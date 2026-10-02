"""MyMiController entry point (used by PyInstaller and by users)."""

import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from gui.flasher import main

if __name__ == "__main__":
    main()