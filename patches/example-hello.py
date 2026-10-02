"""Example patch: rename a firmware log tag (smallest real modification).

This is the smallest end-to-end demonstration of the firmware build
pipeline.  It edits one ASCII string inside app.bin, rebuilds the image
with correct container CRCs, and lets the builder shift the parts that
follow app.bin when the size changes.

    python tools/build_firmware.py --patch patches/example-hello.py \
        --out build/hello.bin

The string at app.bin 0x1BF08 is the log tag "Debug]: [Analog]setbak".
Renaming it to "VibeMod]" grows app.bin by 2 bytes; cfg_tool.bin and the
tone resources then move 2 bytes later, and every CRC is recomputed by
the builder.  That is exactly the machinery firmware development needs.
"""

OLD = b"Debug]: [Analog]setbak"
NEW = b"VibeMod]: [Analog]setbak"


def patch(ctx):
    found = ctx.app.find(OLD)
    if found < 0:
        raise SystemExit("string not found in app.bin")
    ctx.app[found:found + len(OLD)] = NEW
    ctx.note("把日志标签 %r 改为 %r（app.bin 增加 %d 字节）"
             % (OLD[:7], NEW[:7], len(NEW) - len(OLD)))
