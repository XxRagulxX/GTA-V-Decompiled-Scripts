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

DECOMPILER_EXE = "decompiler.exe"
WINE_BINARY = "wine"      # change to "wine64" if required
TIMEOUT = 300

ALL_SCRIPTS_FILE = "all_script_names.txt"
# =================================================

# Detect OS
SYSTEM = platform.system().lower()
IS_WINDOWS = SYSTEM == "windows"
IS_LINUX = SYSTEM == "linux"

# Ensure output directories exist
os.makedirs(OUT_DIR, exist_ok=True)
os.makedirs(NATIVE_TABLES_DIR, exist_ok=True)

# -------------------------------------------------
# Discover scripts
# -------------------------------------------------
scripts_to_decompile = []
for entry in os.listdir(SCRIPTS_DIR):
    if entry.endswith("_ysc"):
        scripts_to_decompile.append(entry[:-4])  # remove "_ysc"

scripts_to_decompile = sorted(scripts_to_decompile)
total_scripts = len(scripts_to_decompile)
failed_scripts = []

# -------------------------------------------------
# Write all script names to file
# -------------------------------------------------
with open(ALL_SCRIPTS_FILE, "w", encoding="utf-8") as f:
    for script in scripts_to_decompile:
        f.write(f"{script}\n")

# -------------------------------------------------
# Helpers
# -------------------------------------------------
def build_decompiler_command(ysc_path: Path):
    """
    Build platform-specific decompiler command.
    """
    if IS_WINDOWS:
        return [DECOMPILER_EXE, str(ysc_path)]
    else:
        return [WINE_BINARY, DECOMPILER_EXE, str(ysc_path)]

def decompile_script(script):
    script_folder = Path(SCRIPTS_DIR) / f"{script}_ysc"
    ysc_full_path = script_folder / f"{script}.ysc.full"

    if not ysc_full_path.exists():
        return (script, False, "Missing .ysc.full file")

    cmd = build_decompiler_command(ysc_full_path)

    try:
        result = subprocess.run(
            cmd,
            capture_output=True,
            text=True,
            timeout=TIMEOUT
        )

        if result.returncode != 0:
            return (script, False, result.stderr.strip() or "Decompiler failed")

        # Move generated .c file
        src_c = script_folder / f"{script}.ysc.full.c"
        dest_c = Path(OUT_DIR) / f"{script}.c"

        if not src_c.exists():
            return (script, False, "Missing .c output file")

        dest_c.unlink(missing_ok=True)
        shutil.move(src_c, dest_c)

        # Move native table
        src_native = script_folder / f"{script}.ysc.full native table.txt"
        dest_native = Path(NATIVE_TABLES_DIR) / f"{script}.txt"

        if not src_native.exists():
            return (script, False, "Missing native table")

        dest_native.unlink(missing_ok=True)
        shutil.move(src_native, dest_native)

        return (script, True, "")

    except subprocess.TimeoutExpired:
        return (script, False, "Timeout")
    except Exception as e:
        return (script, False, str(e))

# -------------------------------------------------
# Main
# -------------------------------------------------
def main():
    print(f"Detected OS : {platform.system()}")
    print(f"Total scripts: {total_scripts}")
    print(f"Parallel workers: {PROC_LIMIT}\n")

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
        for script, reason in failed_scripts:
            print(f" - {script}: {reason}")
    else:
        print("All scripts decompiled successfully.")

# -------------------------------------------------
if __name__ == "__main__":
    main()
