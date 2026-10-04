"""Build a flashable image for the G5605 gamepad.

The vendor package ships `flash.bin` (boot code) and `isd_config.ini`
(which carries the device PID). A factory image also has a 32-byte device
record at 0x52FE0 that this tool can preserve from a backup.

Examples:
    # build from vendor package, keeping the record from a previous backup
    python tools/build_image.py --flash-bin flash.bin --backup full_dump.bin \
        --out G5605_image.bin

    # verify an existing image against a backup
    python tools/build_image.py --verify G5605_image.bin --backup full_dump.bin
"""

from __future__ import annotations

import argparse
import hashlib
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from mico.image import (  # noqa: E402
    BOOT_CODE_SIZE,
    DEVICE_RECORD_OFFSET,
    DEVICE_RECORD_SIZE,
    FLASH_SIZE,
    build_full_image,
    split_full_image,
)
from mico.console import init_console  # noqa: E402


def _load(path):
    with open(path, "rb") as fh:
        return fh.read()


def main():
    init_console()
    parser = argparse.ArgumentParser(description="构建 G5605 刷写镜像")
    parser.add_argument("--flash-bin", help="vendor flash.bin (boot code)")
    parser.add_argument("--backup", help="full 1MB backup (record source / verify)")
    parser.add_argument("--out", help="output image path")
    parser.add_argument("--verify", help="verify an existing image instead")
    args = parser.parse_args()

    if args.verify:
        image = _load(args.verify)
        print("镜像: %s (%d bytes)" % (args.verify, len(image)))
        print("SHA256: %s" % hashlib.sha256(image).hexdigest().upper())
        if args.backup:
            backup = _load(args.backup)
            boot, record = split_full_image(backup.ljust(FLASH_SIZE, b"\xff")[:FLASH_SIZE])
            matches = image[:LIB_BOOT := min(len(image), len(backup))] == backup[:LIB_BOOT]
            print("与备份前 %d 字节一致: %s" % (LIB_BOOT, matches))
        return 0

    if not args.flash_bin or not args.out:
        parser.error("需要 --flash-bin 和 --out（或使用 --verify）")

    boot = _load(args.flash_bin)
    if len(boot) > BOOT_CODE_SIZE:
        print("错误: flash.bin 超过 %d 字节" % BOOT_CODE_SIZE)
        return 2
    print("boot code: %d bytes" % len(boot))

    record = b""
    if args.backup:
        backup = _load(args.backup)
        if len(backup) != FLASH_SIZE:
            print("错误: 备份应为 %d 字节" % FLASH_SIZE)
            return 2
        _, record = split_full_image(backup)
        print("device record: %s" % record.hex())

    image = build_full_image(boot, record)
    with open(args.out, "wb") as fh:
        fh.write(image[: min(FLASH_SIZE, BOOT_CODE_SIZE + DEVICE_RECORD_SIZE)])
    print("output: %s" % args.out)
    return 0


if __name__ == "__main__":
    sys.exit(main())
