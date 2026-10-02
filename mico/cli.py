"""Command-line entry point for mico.

Usage:
    python -m mico info                 # list connected bootloader devices
    python -m mico backup OUT.bin       # read the full 1 MB flash
    python -m mico flash  IMAGE.bin     # erase+write+verify a <=1MB image
    python -m mico restore BACKUP.bin   # same as flash, kept for clarity
    python -m mico reset                # reboot the gamepad
"""

from __future__ import annotations

import argparse
import hashlib
import sys
import time

from .device import UBOOTDevice, DeviceNotFoundError
from .image import FLASH_SIZE


def _progress_printer(prefix):
    last = [0.0]

    def show(done, total):
        now = time.monotonic()
        if now - last[0] < 0.1 and done < total:
            return
        last[0] = now
        pct = done * 100 // total if total else 0
        sys.stdout.write("\r%s %3d%% (%d/%d bytes)" % (prefix, pct, done, total))
        sys.stdout.flush()
        if done >= total:
            sys.stdout.write("\n")

    return show


def cmd_info(args):
    devices = UBOOTDevice.find_devices()
    if not devices:
        print("未发现刷写模式设备。")
        print("提示：按住手柄 HOME + X + Y 约 3 秒进入刷写模式，")
        print("     设备会以 “BR23 UBOOT1.00” 出现。")
        return 1
    for device in devices:
        print("设备: %s" % device["name"])
        print("  路径: %s" % device["path"])
    with _open(args) as dev:
        print("  芯片: type=0x%02X id=0x%06X" % (dev.chip_type, dev.chip_id))
        print("  缓冲区: %d 字节" % dev.loader_buffer_size)
    return 0


def _open(args) -> UBOOTDevice:
    dev = UBOOTDevice(log=lambda m: print("  [dev] %s" % m))
    dev.open(timeout=args.timeout)
    return dev


def cmd_backup(args):
    with _open(args) as dev:
        print("读取 %d 字节闪存…" % FLASH_SIZE)
        data = dev.read(0, FLASH_SIZE, progress=_progress_printer("读取"))
        with open(args.file, "wb") as fh:
            fh.write(data)
        print("已保存: %s" % args.file)
        print("SHA256: %s" % hashlib.sha256(data).hexdigest().upper())
    return 0


def cmd_flash(args):
    with open(args.file, "rb") as fh:
        data = fh.read()
    if not data:
        print("错误: 镜像为空"); return 2
    if len(data) > FLASH_SIZE:
        print("错误: 镜像超过 1MB"); return 2

    print("镜像: %s (%d 字节)" % (args.file, len(data)))
    print("SHA256: %s" % hashlib.sha256(data).hexdigest().upper())
    if not args.yes:
        ans = input("将擦除并写入手柄闪存，确认？输入 yes 继续: ").strip().lower()
        if ans != "yes":
            print("已取消。"); return 1

    with _open(args) as dev:
        print("擦除并写入…")
        dev.write(0, data, progress=_progress_printer("写入"))
        print("回读校验…")
        ok, bad = dev.verify(0, data, retries=1)
        if not ok:
            print("校验失败！不一致字节数: %d" % len(bad))
            print("前几处: %s" % bad[:10])
            return 3
        print("校验通过。重启手柄…")
        dev.reset()
    print("完成。")
    return 0


def cmd_reset(args):
    with _open(args) as dev:
        print("发送重启指令…")
        dev.reset()
    print("手柄正在重启。")
    return 0


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(prog="mico", description="小米游戏手柄 (BR23) 刷写工具")
    parser.add_argument("--timeout", type=float, default=30.0, help="等待设备出现的秒数")
    sub = parser.add_subparsers(dest="command", required=True)

    p = sub.add_parser("info", help="列出刷写模式设备")
    p.set_defaults(func=cmd_info)

    p = sub.add_parser("backup", help="备份 1MB 闪存到文件")
    p.add_argument("file", help="输出文件名")
    p.set_defaults(func=cmd_backup)

    p = sub.add_parser("flash", help="擦除+写入+校验镜像")
    p.add_argument("file", help="镜像文件 (<=1MB)")
    p.add_argument("-y", "--yes", action="store_true", help="跳过确认")
    p.set_defaults(func=cmd_flash)

    p = sub.add_parser("restore", help="从备份恢复 (等价 flash)")
    p.add_argument("file", help="备份文件")
    p.add_argument("-y", "--yes", action="store_true", help="跳过确认")
    p.set_defaults(func=cmd_flash)

    p = sub.add_parser("reset", help="让手柄退出刷写模式")
    p.set_defaults(func=cmd_reset)

    args = parser.parse_args(argv)
    try:
        return args.func(args)
    except DeviceNotFoundError as exc:
        print("未找到设备: %s" % exc, file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main())