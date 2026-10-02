"""Unpack a vendor .fw/.ufw package into its component files.

Example:
    python tools/unpack_fw.py jl_isd.fw -o unpacked/
"""

from __future__ import annotations

import argparse
import hashlib
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from mico.jlfw import load  # noqa: E402


def main():
    parser = argparse.ArgumentParser(description="解包 JieLi .fw/.ufw 固件包")
    parser.add_argument("file", help=".fw 或 .ufw 文件")
    parser.add_argument("-o", "--out", default="unpacked", help="输出目录")
    args = parser.parse_args()

    image = load(args.file)
    print("格式: %s" % image.format)
    print("芯片: %s" % image.chip)
    print("chip key: %s" % ("0x%04X" % image.chip_key if image.chip_key is not None else "?"))
    print("header ok: %s, list ok: %s" % (image.header_ok, image.list_ok))
    os.makedirs(args.out, exist_ok=True)

    for entry in image.entries:
        payload = image.plain(entry)
        if entry.size == 0:
            continue
        name = entry.name.replace("/", "_").replace("\\", "_") or ("entry_%02X.bin" % entry.kind)
        path = os.path.join(args.out, name)
        with open(path, "wb") as fh:
            fh.write(payload)
        print("  %-20s %8d bytes  -> %s" % (name, entry.size, path))
    return 0


if __name__ == "__main__":
    sys.exit(main())