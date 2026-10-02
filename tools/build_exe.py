"""Build a single-file executable of the GUI with PyInstaller.

Usage:
    python tools/build_exe.py

Produces dist/MyMiController.exe (Windows) or dist/MyMiController (Linux).

The mico package's data files (the BR23 ram loader blob) and the firmware
directory are packaged alongside the executable so the GUI can flash the
shipped image without any extra downloads.
"""

import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SEP = ";" if os.name == "nt" else ":"


def main() -> int:
    if subprocess.call([sys.executable, "-m", "PyInstaller", "--version"],
                       stdout=subprocess.DEVNULL) != 0:
        print("PyInstaller is not installed: python -m pip install pyinstaller")
        return 1

    args = [
        sys.executable, "-m", "PyInstaller",
        "--noconfirm", "--clean",
        "--onefile",
        "--windowed",
        "--name", "MyMiController",
        "--add-data", os.path.join(ROOT, "mico", "data") + SEP + os.path.join("mico", "data"),
        "--add-data", os.path.join(ROOT, "firmware") + SEP + "firmware",
        "--paths", ROOT,
        os.path.join(ROOT, "MyMiController.py"),
    ]
    print("running:", " ".join(args))
    return subprocess.call(args)


if __name__ == "__main__":
    sys.exit(main())