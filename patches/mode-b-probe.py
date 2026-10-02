"""Mode+B probe firmware - find out which bitmap bit the B button uses.

Background
==========

The stock firmware enters the USB download mode (MaskROM "BR23
UBOOT1.00") when HOME + X + Y are held for ~3 seconds.  The check lives
at 0x01e106e8 in the main loop:

    0x01e106e8  movz r1,#0x200        (app.bin 0x10628)
    0x01e106ec  lb.z r1,[r15 + r1]    r1 = ctx[0x200] (button bitmap)
    0x01e106f0  and r1,r1,#0xffffff03 keep bits 0+1     (0x10630)
    0x01e106f4  jne r1,#0x3,skip      both pressed?    (0x10634)
    0x01e106f8  lh.z r0,[r15 + 0xee]  hold timer
    0x01e106fc  jae r0,#0x85,flash    long enough -> download mode

HOME is bit0 and the X/Y pair is bit1 (see boot-mode-logic.md).  Which
bit represents the B button is *not* visible statically: the combo
decoder never uses a bare-B mask, so the bit has to be confirmed on
real hardware.

This probe rewrites the three instructions above so a different
combination becomes the download-mode trigger:

    (ctx[BYTE] & KEEP) == KEEP  held for ~3 s  ->  download mode

Two probe flavours (see CANDIDATE):

  * BYTE=0x200, KEEP=0x01|<B bit>          -> hold HOME + B
  * BYTE=0x201/0x202/0x203, KEEP=<B bit>   -> hold B alone

One candidate per build: flash, try, restore, repeat.

Instruction encodings, verified against 128 ``and`` and 351 ``jne``
samples in the stock image:

    and  r1,r1,#0xffffff<~K>  ->  71 e1 (~K & 0xff) 10
    jne  r1,#K,0x01e10704     ->  81 f8 06 (K << 1)      (delta 0x0c)
    movz r1,#0x20X            ->  41 e0 0X 02

The ``jne`` target (0x01e10704) does not move because every rewrite is
the same length, so the relative displacement stays 0x0c.  The compare
immediate is *7 bits* (pi32v2 ``imm2531``; 351 stock samples agree,
masks 0x40..0x75 included), so the keep mask must stay in 1..0x7f.  A
bit7 (0x80) candidate would need a different instruction pair and is
out of scope for this probe.

Usage
=====

    python tools/build_firmware.py --patch patches/mode-b-probe.py \
        --out build/probe.bin --full --record firmware/G5605_device_record.bin

On the bench:

  1. back up the current firmware (GUI step 2 / ``python -m mico
     backup out.bin``);
  2. flash build/probe.bin (GUI step 5, "刷入自选镜像");
  3. hold the combination for ~3 s: HOME+B for BYTE 0x200, B alone for
     the other bytes;
  4. hit  -> LED goes out and ``BR23 UBOOT1.00`` appears: record the
     (BYTE, KEEP) pair in docs/reverse-engineering/mode-switch-logic.md
     section 4.1, then restore the stock firmware;
     miss -> restore from the backup and build the next candidate.

This is a diagnostic build: only the download-mode trigger changes,
everything else in the firmware is untouched.
"""

# (bitmap byte offset, keep mask) -- one candidate per build.
# HOME is ctx[0x200] bit0.  Bit4 of 0x201 is the combo conflict guard
# and must NOT be used as a candidate.
CANDIDATE = (0x200, 0x01 | 0x04)        # HOME + B, B = 0x200 bit2

# Candidates to try, in the suggested order (bits the combo decoder
# never touches come first; one per build):
#   (0x200, 0x01 | 0x04)   HOME + B, B = 0x200 bit2 (dedicated dispatch
#                          at 0x01e1077c)
#   (0x200, 0x01 | 0x20)   HOME + B, B = 0x200 bit5 (clean)
#   (0x200, 0x01 | 0x10)   HOME + B, B = 0x200 bit4 (clean)
#   (0x200, 0x01 | 0x40)   HOME + B, B = 0x200 bit6 (clean)
#   (0x200, 0x01 | 0x08)   HOME + B, B = 0x200 bit3 (used by 0x0d)
#   (0x202, 0x01 .. 0x40)  B alone,   B = 0x202 bit0..bit6 (all clean)
#   (0x201, 0x40)          B alone,   B = 0x201 bit6 (clean)
#   (0x203, 0x10) (0x203, 0x20)  B alone, B = 0x203 bit4/bit5 (clean)
#   (0x201, 0x02) (0x201, 0x04) (0x201, 0x08) (0x201, 0x01) (0x201, 0x20)
#                          B alone, bits 0x201 already uses elsewhere
#   (0x203, 0x08)          B alone,   B = 0x203 bit3 (used by two branches)
#
# The keep mask must stay <= 0x7f (see the jne note above), so bit7
# candidates need a different instruction pair and are not listed.

# app.bin offsets of the instructions rewritten (addr - 0x01e000c0).
MOVZ_OFF = 0x10628      # 0x01e106e8  movz r1,#0x200
AND_OFF = 0x10630       # 0x01e106f0  and r1,r1,#0xffffff03
CMP_OFF = 0x10634       # 0x01e106f4  jne r1,#0x3,0x01e10704

STOCK_MOVZ = bytes([0x41, 0xE0, 0x00, 0x02])
STOCK_AND = bytes([0x71, 0xE1, 0xFC, 0x10])
STOCK_CMP = bytes([0x81, 0xF8, 0x06, 0x06])


def _movz_r1(value):
    return bytes([0x41, 0xE0, value & 0xFF, value >> 8])


def _and_r1(keep):
    return bytes([0x71, 0xE1, (~keep) & 0xFF, 0x10])


def _jne_r1(keep):
    if not 0 < keep < 0x80:
        raise SystemExit("掩码 0x%02x 超出 7 位比较立即数范围（必须 1..0x7f）"
                         % keep)
    return bytes([0x81, 0xF8, 0x06, keep << 1])


def patch(ctx):
    byte, keep = CANDIDATE
    with_home = byte == 0x200 and (keep & 0x01) != 0
    for off, want in ((MOVZ_OFF, STOCK_MOVZ), (AND_OFF, STOCK_AND),
                      (CMP_OFF, STOCK_CMP)):
        if bytes(ctx.app[off:off + 4]) != want:
            raise SystemExit(
                "app.bin 偏移 0x%05x 不是出厂指令（实际 %s，期望 %s），"
                "探针只能在出厂零件上使用"
                % (off, bytes(ctx.app[off:off + 4]).hex(" "), want.hex(" ")))
    ctx.app[MOVZ_OFF:MOVZ_OFF + 4] = _movz_r1(byte)
    ctx.app[AND_OFF:AND_OFF + 4] = _and_r1(keep)
    ctx.app[CMP_OFF:CMP_OFF + 4] = _jne_r1(keep)
    ctx.note("Mode+B 探针: 读位图 0x%03x, 掩码 0x%02x —— %s"
             % (byte, keep,
                "按住 HOME+B 约 3 秒" if with_home else "按住 B 约 3 秒"))
    ctx.note("写入 movz=%s  and=%s  jne=%s"
             % (_movz_r1(byte).hex(" "), _and_r1(keep).hex(" "),
                _jne_r1(keep).hex(" ")))
    ctx.note("命中判定: 灯灭 + 电脑出现 BR23 UBOOT1.00；命中后把 "
             "(0x%03x, 0x%02x) 回填 docs/reverse-engineering/"
             "mode-switch-logic.md 4.1 节" % (byte, keep))
