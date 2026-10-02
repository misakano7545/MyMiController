"""Vibe Coding Mode firmware - stage 1: identifiable build + hook points.

Goal of this branch: turn the gamepad into a desk tool for Vibe Coding
sessions (map face buttons to Enter / Esc / Ctrl and so on) instead of
only a game controller.

Stage 1 (this patch) is deliberately conservative: it produces a
*firmware that boots exactly like stock* but is identifiable, so the
whole pipeline (build -> flash -> verify) can be exercised on real
hardware before any input-path change lands.  It also documents the
exact hook points for stage 2, which is the part that needs the pad on
a bench.

What this patch changes (all same-length, so nothing shifts):

  * the USB product strings "Xbox Bluetooth Gamepad" -> "Xbox VibeCode
    Gamepad " (identical byte length, trailing space keeps the length
    prefix valid);
  * the log tag "Debug]: [Analog]setbak" -> "VibeMod]: [Analog]setbak"
    so the UART log makes it obvious which firmware is running.

Stage 2 hook - a keyboard HID descriptor is already compiled into this
firmware image.  It lives at app.bin offset 0x21407 and declares a
boot-keyboard collection (modifiers + 6-key rollover, report ID 1), a
consumer-control collection and a vendor collection:

    05 01 09 06 a1 01 85 01        Generic Desktop / Keyboard, report 1
    75 01 95 08 05 07 19 e0 29 e7  modifiers (LCtrl..RGUI)
    95 06 75 08 15 00 26 ff 00     reserved byte + six usage slots
    05 0c 09 01 a1 01 85 02        Consumer Control, report 2
    05 0f 09 21 85 03 ...          battery / vendor

The product's active descriptor set (the one the Xbox-mode device
announces) does not include that keyboard collection, which is why the
pad types nothing today.  Stage 2 is descriptor surgery plus filling the
six usage slots from the button bitmap; both are bench work because a
bad descriptor stops the USB interface from enumerating.  See
docs/development/vibe-coding-mode.md for the plan and the offsets.
"""

PRODUCT_OLD = b"Xbox Bluetooth Gamepad"
PRODUCT_NEW = b"Xbox VibeCode Gamepad "   # same 22 chars + NUL
LOG_OLD = b"Debug]: [Analog]setbak"
LOG_NEW = b"VibeMod]: [Analog]setbak"


def patch(ctx):
    hits = ctx.app.count(PRODUCT_OLD)
    if hits:
        ctx.app[:] = ctx.app.replace(PRODUCT_OLD, PRODUCT_NEW)
        ctx.note("产品字符串改为 %r（%d 处）" % (PRODUCT_NEW.decode(), hits))
    else:
        ctx.note("警告: 未找到产品字符串，跳过")

    found = ctx.app.find(LOG_OLD)
    if found >= 0:
        ctx.app[found:found + len(LOG_OLD)] = LOG_NEW
        ctx.note("日志标签改为 %r" % LOG_NEW.decode())
    else:
        ctx.note("警告: 未找到日志标签，跳过")
