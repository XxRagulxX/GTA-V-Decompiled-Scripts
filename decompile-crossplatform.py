import os
import shutil
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path
from tqdm import tqdm  # For progress bar

# CONFIGURATION
PROC_LIMIT = 20
OUT_DIR = "decompiled_scripts"
NATIVE_TABLES_DIR = "native_tables"
SCRIPTS_DIR = "scripts"
DECOMPILER_EXE = "decompiler.exe"

# Ensure output directories exist
os.makedirs(OUT_DIR, exist_ok=True)
os.makedirs(NATIVE_TABLES_DIR, exist_ok=True)

# Discover scripts to decompile
scripts_to_decompile = []
for entry in os.listdir(SCRIPTS_DIR):
    if entry.endswith("_ysc"):
        script_name = entry[:-4]  # Remove "_ysc"
        scripts_to_decompile.append(script_name)

total_scripts = len(scripts_to_decompile)
failed_scripts = []

def decompile_script(script):
    script_folder = os.path.join(SCRIPTS_DIR, f"{script}_ysc")
    ysc_full_path = os.path.join(script_folder, f"{script}.ysc.full")
    decompile_cmd = [DECOMPILER_EXE, ysc_full_path]
    try:
        result = subprocess.run(decompile_cmd, capture_output=True, text=True, timeout=300)
        if result.returncode != 0:
            return (script, False, result.stderr)
        # Move .c file
        src_c = os.path.join(script_folder, f"{script}.ysc.full.c")
        dest_c = os.path.join(OUT_DIR, f"{script}.c")
        if os.path.isfile(src_c):
            if os.path.isfile(dest_c):
                os.remove(dest_c)
            shutil.move(src_c, dest_c)
        else:
            return (script, False, "Missing .c file")
        # Move native table
        src_native = os.path.join(script_folder, f"{script}.ysc.full native table.txt")
        dest_native = os.path.join(NATIVE_TABLES_DIR, f"{script}.txt")
        if os.path.isfile(src_native):
            if os.path.isfile(dest_native):
                os.remove(dest_native)
            shutil.move(src_native, dest_native)
        else:
            return (script, False, "Missing native table")
        return (script, True, "")
    except Exception as e:
        return (script, False, str(e))

def main():
    print(f"Starting decompilation of {total_scripts} scripts with up to {PROC_LIMIT} parallel processes...\n")
    with ThreadPoolExecutor(max_workers=PROC_LIMIT) as executor:
        futures = {executor.submit(decompile_script, script): script for script in scripts_to_decompile}
        with tqdm(total=total_scripts, desc="Decompiling", unit="script") as pbar:
            for future in as_completed(futures):
                script, success, info = future.result()
                if not success:
                    failed_scripts.append((script, info))
                pbar.update(1)

    print("\nAll done! :D")
    if failed_scripts:
        print("\nFailed scripts:")
        for script, reason in failed_scripts:
            print(f" - {script}: {reason}")
    else:
        print("All scripts decompiled successfully.")

if __name__ == "__main__":
    main()
