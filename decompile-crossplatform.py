
#!/usr/bin/env python3
import os
import shutil
import subprocess
import platform
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from tqdm import tqdm

# ================= CONFIGURATION =================
PROC_LIMIT = 10 if platform.system().lower() != "windows" else 8
OUT_DIR = "decompiled_scripts"
NATIVE_TABLES_DIR = "native_tables"
SCRIPTS_DIR = "scripts"
DECOMPILER_DIR = "decompiler"

DECOMPILER_EXE = "Decompiler.exe"
WINE_BINARY = "wine"
TIMEOUT = 300
ALL_SCRIPTS_FILE = "all_script_names.txt"
FAILED_LOG = "failed_scripts.txt"
# =================================================

SYSTEM = platform.system().lower()
IS_WINDOWS = SYSTEM == "windows"

BASE_DIR = Path(__file__).resolve().parent
DECOMPILER_PATH = (BASE_DIR / DECOMPILER_DIR / DECOMPILER_EXE).resolve()
SCRIPTS_PATH = (BASE_DIR / SCRIPTS_DIR).resolve()
OUT_PATH = (BASE_DIR / OUT_DIR).resolve()
NATIVE_PATH = (BASE_DIR / NATIVE_TABLES_DIR).resolve()

OUT_PATH.mkdir(exist_ok=True)
NATIVE_PATH.mkdir(exist_ok=True)

all_scripts = sorted(
    p.name[:-4] for p in SCRIPTS_PATH.iterdir()
    if p.is_dir() and p.name.endswith("_ysc")
)

scripts_to_decompile = []
failed_scripts = []

for script in all_scripts:
    if (OUT_PATH / f"{script}.c").exists() and (NATIVE_PATH / f"{script}.txt").exists():
        continue
    scripts_to_decompile.append(script)

with open(BASE_DIR / ALL_SCRIPTS_FILE, "w", encoding="utf-8") as f:
    f.write("\n".join(all_scripts))

def build_cmd(ysc):
    if IS_WINDOWS:
        return [str(DECOMPILER_PATH), str(ysc)]
    return [WINE_BINARY, str(DECOMPILER_PATH), str(ysc)]

def locate_file(name):
    for root in (BASE_DIR, SCRIPTS_PATH, DECOMPILER_PATH.parent):
        for p in root.rglob(name):
            return p
    return None

def decompile(script):
    folder = SCRIPTS_PATH / f"{script}_ysc"
    ysc = folder / f"{script}.ysc.full"

    if not ysc.exists():
        return (script, False, f"Missing input: {ysc}")

    cmd = build_cmd(ysc)
    try:
        res = subprocess.run(
            cmd,
            cwd=DECOMPILER_PATH.parent,
            capture_output=True,
            text=True,
            timeout=TIMEOUT,
        )
    except subprocess.TimeoutExpired:
        return (script, False, "Timeout")
    except Exception as e:
        return (script, False, str(e))

    c_file = locate_file(f"{script}.ysc.full.c")
    n_file = locate_file(f"{script}.ysc.full native table.txt")

    if not c_file:
        return (
            script,
            False,
            f"No .c produced\nReturn={res.returncode}\nSTDOUT:\n{res.stdout}\nSTDERR:\n{res.stderr}"
        )

    shutil.move(str(c_file), OUT_PATH / f"{script}.c")

    if n_file:
        shutil.move(str(n_file), NATIVE_PATH / f"{script}.txt")

    return (script, True, "")

def main():
    print(f"OS: {platform.system()}")
    print(f"Decompiler: {DECOMPILER_PATH}")
    print(f"Scripts: {len(scripts_to_decompile)}")
    print(f"Workers: {PROC_LIMIT}")

    with ThreadPoolExecutor(max_workers=PROC_LIMIT) as pool:
        futures = [pool.submit(decompile, s) for s in scripts_to_decompile]
        with tqdm(total=len(futures), desc="Decompiling") as bar:
            for fut in as_completed(futures):
                script, ok, info = fut.result()
                if not ok:
                    failed_scripts.append((script, info))
                bar.update(1)

    if failed_scripts:
        with open(BASE_DIR / FAILED_LOG, "w", encoding="utf-8") as f:
            for s, r in failed_scripts:
                f.write(f"{s}\n{r}\n{'-'*80}\n")
        print(f"Failed: {len(failed_scripts)} (see {FAILED_LOG})")
    else:
        print("All scripts decompiled successfully.")

if __name__ == "__main__":
    main()
