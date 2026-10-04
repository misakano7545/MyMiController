"""Build a flashable firmware image from the parts in firmware/parts.

This is the developer entry point for the "Vibe Coding Mode" firmware
branch of the project:

    python tools/build_firmware.py                       # stock rebuild
    python tools/build_firmware.py --patch my.py         # apply a patch
    python tools/build_firmware.py --app-bin patched.bin # use another app

The default path rebuilds the shipped image and checks it against a
pinned SHA256, so a clean checkout always has a golden reference.  The
build is deterministic: the same inputs always produce the same bytes.

Patches are plain Python scripts.  A patch file gets a `PatchContext`
and can change any part of the image before it is packed:

    def patch(ctx):
        ctx.app[0x1BF08:0x1BF08+8] = b"VibeMod!"   # patch app.bin
        ctx.isd_config += b"..."                   # extend a config file
        ctx.note("changed the greeting string")

Every patch is re-validated by the container CRCs, and then by the
golden-image check when nothing was modified.

`--full` additionally writes a 1 MB flash image.  Its settings area
(0xF6000..0x100000) is blank (0xFF) unless `--settings` points at a
full backup or a bare settings blob; flashing it without settings
wipes the gamepad calibration / mode settings.  Prefer flashing the
0x53000 image, or merge the live settings with `--settings backup.bin`.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import runpy
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, ROOT)

from mico.jlfs import (  # noqa: E402
    JlfImage,
    build_flash_image,
    extract_parts,
    extract_template,
    IMAGE_SIZE,
)
from mico.image import (  # noqa: E402
    DEVICE_RECORD_OFFSET,
    DEVICE_RECORD_SIZE,
    FLASH_SIZE,
    SETTINGS_OFFSET,
    SETTINGS_SIZE,
)
from mico.console import init_console  # noqa: E402

PARTS_DIR = os.path.join(ROOT, "firmware", "parts")
STOCK_REF = os.path.join(ROOT, "firmware", "G5605_boot_code.bin")
STOCK_IMAGE = os.path.join(ROOT, "firmware", "G5605_V1.0_flash_image.bin")
PARTS = ("uboot.boot", "isd_config.ini", "app.bin", "cfg_tool.bin", "tone.bin")


class PatchContext:
    """Mutable parts handed to a patch script."""

    def __init__(self):
        self.reset()
        self.notes = []

    def reset(self):
        self.uboot = bytearray(_read("uboot.boot"))
        self.isd_config = bytearray(_read("isd_config.ini"))
        self.app = bytearray(_read("app.bin"))
        self.cfg_tool = bytearray(_read("cfg_tool.bin"))
        self.tone = bytearray(_read("tone.bin"))

    def note(self, message):
        self.notes.append(message)

    def as_kwargs(self):
        return dict(
            uboot=bytes(self.uboot),
            isd_config=bytes(self.isd_config),
            app_bin=bytes(self.app),
            cfg_tool=bytes(self.cfg_tool),
            tone=bytes(self.tone),
        )


def _read(name):
    with open(os.path.join(PARTS_DIR, name), "rb") as fh:
        return fh.read()


def verify_parts() -> list:
    """Check firmware/parts against the golden reference image.

    Rebuilding from the parts must reproduce the shipped boot code
    exactly.  Anything else means the parts are stale or corrupt.
    """
    problems = []
    stock = open(STOCK_REF, "rb").read()
    parts = extract_parts(stock)
    template = extract_template(stock)
    built = build_flash_image(
        uboot=parts["uboot"], isd_config=parts["isd_config"],
        app_bin=parts["app_bin"], cfg_tool=parts["cfg_tool"],
        tone=parts["tone"], header=template["header"],
        stray=template["stray"], rows=template["rows"])
    if built != stock:
        problems.append("factory image is not self-consistent")

    expected = {"uboot.boot": parts["uboot"],
                "isd_config.ini": parts["isd_config"],
                "app.bin": parts["app_bin"],
                "cfg_tool.bin": parts["cfg_tool"],
                "tone.bin": parts["tone"]}
    for name in PARTS:
        blob = _read(name)
        want = expected[name]
        if blob != want:
            problems.append("%s: parts file differs from the factory image "
                            "(%d vs %d bytes)"
                            % (name, len(blob), len(want)))
    return problems


def load_settings(path: str) -> bytes:
    """Return the settings area (0xF6000..) from a backup or blob.

    Accepts either a full 1 MB flash backup (the area is sliced out) or
    a bare SETTINGS_SIZE blob.
    """
    with open(path, "rb") as fh:
        data = fh.read()
    if len(data) == FLASH_SIZE:
        return data[SETTINGS_OFFSET:]
    if len(data) == SETTINGS_SIZE:
        return data
    raise SystemExit(
        "设置区来源必须是 %d 字节的整片备份，或 %d 字节的设置块（实际 %d 字节）"
        % (FLASH_SIZE, SETTINGS_SIZE, len(data)))


def merge_settings(full: bytearray, settings: bytes) -> int:
    """Copy a settings area into a full image; returns non-FF byte count."""
    if len(settings) != SETTINGS_SIZE:
        raise ValueError("settings must be exactly %d bytes" % SETTINGS_SIZE)
    full[SETTINGS_OFFSET:SETTINGS_OFFSET + SETTINGS_SIZE] = settings
    return sum(1 for byte in settings if byte != 0xFF)


def load_patch(path: str) -> PatchContext:
    ctx = PatchContext()
    module = runpy.run_path(path)
    hook = module.get("patch")
    if hook is None:
        raise SystemExit("patch file %s has no patch() function" % path)
    hook(ctx)
    return ctx


def main(argv=None) -> int:
    init_console()
    parser = argparse.ArgumentParser(description="构建可刷写固件镜像")
    parser.add_argument("--parts", default=PARTS_DIR,
                        help="零件目录（默认 firmware/parts）")
    parser.add_argument("--patch", help="要应用的 Python 补丁脚本")
    parser.add_argument("--app-bin", help="直接替换 app.bin")
    parser.add_argument("--out", default=os.path.join(ROOT, "build", "firmware.bin"),
                        help="输出镜像路径")
    parser.add_argument("--full", action="store_true",
                        help="同时输出 1MB 完整镜像（含设备记录）")
    parser.add_argument("--record", help="设备记录文件（32 字节）")
    parser.add_argument("--settings",
                        help="整片备份（1MB）或设置块（%d 字节）："
                             "合并设置区到完整镜像，避免刷掉校准/模式设置"
                             % SETTINGS_SIZE)
    parser.add_argument("--verify-only", action="store_true",
                        help="只做校验，不构建")
    args = parser.parse_args(argv)

    stock = open(STOCK_REF, "rb").read()
    problems = verify_parts()
    if problems:
        for problem in problems:
            print("零件校验失败: %s" % problem)
        return 2
    print("零件校验通过: rebuild == 出厂镜像")

    if args.verify_only:
        return 0

    ctx = PatchContext()
    if args.patch:
        ctx = load_patch(args.patch)
        for note in ctx.notes:
            print("补丁: %s" % note)
    if args.app_bin:
        with open(args.app_bin, "rb") as fh:
            ctx.app = bytearray(fh.read())
        print("已替换 app.bin: %s (%d 字节)" % (args.app_bin, len(ctx.app)))

    parts = ctx.as_kwargs()
    image = build_flash_image(**parts)

    parsed = JlfImage(image)
    faults = parsed.verify()
    if faults:
        for fault in faults:
            print("构建产物校验失败: %s" % fault)
        return 3
    print("构建产物校验通过（容器 CRC 全部正确）")

    identical = image == stock
    print("与出厂固件一致: %s" % ("是（未修改）" if identical else "否（已修改）"))
    print("SHA256: %s" % hashlib.sha256(image).hexdigest().upper())

    os.makedirs(os.path.dirname(os.path.abspath(args.out)), exist_ok=True)
    with open(args.out, "wb") as fh:
        fh.write(image)
    print("已写出: %s (%d 字节)" % (args.out, len(image)))

    if args.full:
        full = bytearray(b"\xff" * FLASH_SIZE)
        full[:IMAGE_SIZE] = image
        record = b""
        if args.record:
            record = open(args.record, "rb").read()
        elif os.path.exists(STOCK_IMAGE):
            record = open(STOCK_IMAGE, "rb").read()[
                DEVICE_RECORD_OFFSET:DEVICE_RECORD_OFFSET + DEVICE_RECORD_SIZE]
        if record:
            if len(record) != DEVICE_RECORD_SIZE:
                raise SystemExit("设备记录必须是 %d 字节" % DEVICE_RECORD_SIZE)
            full[DEVICE_RECORD_OFFSET:DEVICE_RECORD_OFFSET + DEVICE_RECORD_SIZE] = record
        if args.settings:
            settings = load_settings(args.settings)
            non_ff = merge_settings(full, settings)
            print("已合并设置区: %s（非 FF 字节 %d）" % (args.settings, non_ff))
            if non_ff < 64:
                print("警告: 设置区几乎全空（非 FF 仅 %d 字节），请确认来源文件。" % non_ff)
        else:
            print("警告: 完整镜像的设置区（0x%X 起）为空白 FF。" % SETTINGS_OFFSET)
            print("      刷入会清掉校准/模式设置，可能导致灯效异常。")
            print("      优先刷小镜像（同一次构建写出的 %d 字节版本）；" % IMAGE_SIZE)
            print("      或将本机备份用 --settings 传入，合并设置区后再刷。")
        full_out = os.path.splitext(args.out)[0] + "-full.bin"
        with open(full_out, "wb") as fh:
            fh.write(full)
        print("已写出完整镜像: %s" % full_out)
    return 0


if __name__ == "__main__":
    sys.exit(main())
