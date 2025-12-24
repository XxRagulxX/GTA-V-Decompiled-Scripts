import os
import shutil
import subprocess
import platform
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from tqdm import tqdm

# ================= CONFIGURATION =================
PROC_LIMIT = 20
OUT_DIR = "decompiled_scripts"
NATIVE_TABLES_DIR = "native_tables"
SCRIPTS_DIR = "scripts"
DECOMPILER_DIR = "decompiler"

DECOMPILER_EXE = "Decompiler.exe"
WINE_BINARY = "wine"
TIMEOUT = 300

ALL_SCRIPTS_FILE = "all_script_names.txt"
# =================================================

SYSTEM = platform.system().lower()
IS_WINDOWS = SYSTEM == "windows"

BASE_DIR = Path(__file__).resolve().parent
DECOMPILER_PATH = BASE_DIR / DECOMPILER_DIR / DECOMPILER_EXE

Path(OUT_DIR).mkdir(exist_ok=True)
Path(NATIVE_TABLES_DIR).mkdir(exist_ok=True)

# -------------------------------------------------
# Discover scripts
# -------------------------------------------------
all_scripts = sorted(
    entry[:-4] for entry in os.listdir(SCRIPTS_DIR) if entry.endswith("_ysc")
)

# -------------------------------------------------
# Resume mode: skip already decompiled scripts
# -------------------------------------------------
scripts_to_decompile = []
skipped_scripts = []

for script in all_scripts:
    c_out = Path(OUT_DIR) / f"{script}.c"
    native_out = Path(NATIVE_TABLES_DIR) / f"{script}.txt"

    if c_out.exists() and native_out.exists():
        skipped_scripts.append(script)
    else:
        scripts_to_decompile.append(script)

total_scripts = len(scripts_to_decompile)
failed_scripts = []

# -------------------------------------------------
# Write all script names (full list)
# -------------------------------------------------
with open(ALL_SCRIPTS_FILE, "w", encoding="utf-8") as f:
    for script in all_scripts:
        f.write(f"{script}\n")

# -------------------------------------------------
# Helpers
# -------------------------------------------------
def build_decompiler_command(ysc_path: Path):
    if IS_WINDOWS:
        return [str(DECOMPILER_PATH), str(ysc_path)]
    return [WINE_BINARY, str(DECOMPILER_PATH), str(ysc_path)]

def cleanup_generated_files(script_folder: Path, script: str):
    leftovers = [
        script_folder / f"{script}.ysc.full.c",
        script_folder / f"{script}.ysc.full native table.txt",
    ]
    for f in leftovers:
        if f.exists():
            try:
                f.unlink()
            except Exception:
                pass

def decompile_script(script):
    script_folder = Path(SCRIPTS_DIR) / f"{script}_ysc"
    ysc_full_path = script_folder / f"{script}.ysc.full"

    if not ysc_full_path.exists():
        return (script, False, "Missing .ysc.full")

    cmd = build_decompiler_command(ysc_full_path)

    try:
        result = subprocess.run(
            cmd,
            cwd=DECOMPILER_PATH.parent,
            capture_output=True,
            text=True,
            timeout=TIMEOUT
        )

        if result.returncode != 0:
            return (script, False, result.stderr.strip() or "Decompiler failed")

        # Move .c output
        src_c = script_folder / f"{script}.ysc.full.c"
        dest_c = Path(OUT_DIR) / f"{script}.c"

        if not src_c.exists():
            return (script, False, "Missing .c output")

        dest_c.unlink(missing_ok=True)
        shutil.move(src_c, dest_c)

        # Move native table
        src_native = script_folder / f"{script}.ysc.full native table.txt"
        dest_native = Path(NATIVE_TABLES_DIR) / f"{script}.txt"

        if not src_native.exists():
            return (script, False, "Missing native table")

        dest_native.unlink(missing_ok=True)
        shutil.move(src_native, dest_native)

        cleanup_generated_files(script_folder, script)
        return (script, True, "")

    except subprocess.TimeoutExpired:
        return (script, False, "Timeout")
    except Exception as e:
        return (script, False, str(e))

# -------------------------------------------------
# Main
# -------------------------------------------------
def main():
    print(f"OS                : {platform.system()}")
    print(f"Decompiler path   : {DECOMPILER_PATH}")
    print(f"Total scripts     : {len(all_scripts)}")
    print(f"Skipped (resume)  : {len(skipped_scripts)}")
    print(f"To decompile      : {total_scripts}")
    print(f"Workers           : {PROC_LIMIT}\n")

    if skipped_scripts:
        print("Skipped scripts (already done):")
        print(", ".join(skipped_scripts[:10]) + (" ..." if len(skipped_scripts) > 10 else ""))
        print()

    with ThreadPoolExecutor(max_workers=PROC_LIMIT) as executor:
        futures = {
            executor.submit(decompile_script, script): script
            for script in scripts_to_decompile
        }

        with tqdm(total=total_scripts, desc="Decompiling", unit="script") as pbar:
            for future in as_completed(futures):
                script, success, info = future.result()
                if not success:
                    failed_scripts.append((script, info))
                pbar.update(1)

    print("\nAll done!")

    if failed_scripts:
        print("\nFailed scripts:")
        for s, r in failed_scripts:
            print(f" - {s}: {r}")
    else:
        print("All scripts decompiled successfully.")

# -------------------------------------------------
if __name__ == "__main__":
    main()
