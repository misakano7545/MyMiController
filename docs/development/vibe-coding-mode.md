# Vibe Coding Mode：把游戏手柄变成编码桌搭

目标：不玩游戏时，这个手柄是 Vibe Coding 的快捷键板——把 X/Y/A/B
映射成 Enter、Esc、Ctrl 等，让「随手一按」真的能敲进编辑器。本页是
实现路线图与已确认的技术事实。

> 这是**实验性分支**。请先备份（GUI 第 2 项），改坏了随时用第 4 项还原。

## 0. 已确认的事实（可放心依赖）

| 结论 | 依据 |
|------|------|
| 手柄在 PC 上以 Xbox 360 兼容设备枚举（VID `045E`/PID `028E`） | 实机枚举 |
| 固件内**已内置键盘 HID 描述符模板**，但未挂在当前设备描述符集上 | `app.bin` 偏移 `0x21407` 起 |
| 同一区域还有 Consumer Control（音量/播放）与厂商集合 | 同上 |
| 按键位图、报告组装、USB 描述符选择的代码都在 `app.bin` 内 | `decompiled/decomp_all.c` |
| 固件启动路径上不校验代码区整体哈希 | 实测改字节后仍启动 |

内置键盘描述符（`app.bin` `0x21407`）：

```
05 01 09 06 a1 01 85 01      通用桌面/键盘，报告 ID 1
75 01 95 08 05 07 19 e0 29 e7  8 位修饰键（LCtrl..RGUI）
95 06 75 08 15 00 26 ff 00    保留字节 + 6 个按键槽
c0
05 0c 09 01 a1 01 85 02      消费者控制，报告 ID 2
05 0f 09 21 85 03 ...        电池/厂商集合
```

也就是说：**协议层已经有键盘模板，缺的是「把它接进当前模式，并
用按键位图填报告」**。这比从头造描述符省一多半的工作量。

## 1. 阶段一（当前仓库已提供）

`patches/vibe-coding-mode.py` 生成一个「可识别但仍与出厂行为一致」
的固件：

- 产品字符串 `Xbox Bluetooth Gamepad` → `Xbox VibeCode Gamepad `；
- 日志标签加 `VibeMod]` 前缀。

用途：在真机上把「构建 → 刷入 → 回读校验 → 观察行为」走通，
确认整条流水线可靠，再动输入路径。构建：

```bash
python tools/build_firmware.py --patch patches/vibe-coding-mode.py \
    --out build/vibe.bin --full --record firmware/G5605_device_record.bin
```

## 2. 阶段二：接上键盘报告（需要真机调试）

需要改的四处都在 `app.bin`（用基址换算找闪存位置，见
[flash-layout.md](../reverse-engineering/flash-layout.md)）：

1. **描述符选择**：让当前模式设备描述符集包含 `0x21407` 的键盘集合
   （把该段并入现有 composite 描述符，或把模式切到自带键盘的模板）；
2. **报告组装**：在 USB 报告组装函数里，按键按下时把对应 HID 用法码
   写进 6 个槽位（Enter 用法码 `0x28`），松开清 0；
3. **报告发送**：键盘报告走报告 ID 1，需确认端点/间隔与现有手柄报告
   不冲突（可复用同一中断端点）；
4. **模式开关**：用 **Mode+B** 切到 Vibe Coding 模式（`HOME + B` 长按
   约 3 秒）。官方固件只用 Mode+A / Mode+X / Mode+Y，Mode+B 是空档，
   不影响其他模式；组合键解剖、插入点与 B 键位探针见
   [mode-switch-logic.md](../reverse-engineering/mode-switch-logic.md)。
   注意：刷写组合的固件判定要求**按键计数恰好为 3**（见
   [boot-mode-logic.md](../reverse-engineering/boot-mode-logic.md)），
   做 HOME+B 的正式补丁时必须同步改这个计数门槛；B 键位在探针确认
   之前，不要写进正式固件。

定位建议：在 `decomp_all.c` 里搜 `0x21407` 附近的描述符引用、搜
USB 报告组装函数（写端点 FIFO 的位置），以及按键位图（文档记录的
`0x200/0x201` 一带）。

## 3. 阶段三：按键映射表

映射做成可改的表（例如 `X → Enter(0x28)`、`Y → Esc(0x29)`、
`B → Tab(0x2B)`），表放在 `app.bin` 的 0xFF 填充区，用补丁脚本写入：

```python
def patch(ctx):
    table = bytes([0x28, 0x29, 0x2B, 0x00])      # X, Y, B, -
    ctx.app[TABLE_OFF:TABLE_OFF + len(table)] = table
```

保持「表 + 代码」分离，改键位就不用重新找指令。

## 4. 调试手段

- **日志**：固件保留 UART 调试输出，标签 `VibeMod]` 便于区分；
- **回读校验**：`python -m mico flash --file build/vibe.bin` 会写入后
  回读比对，失败立即报错；
- **随时回退**：备份是 1 MiB 全量，GUI 第 4 项一键还原；
- **刷写模式**：HOME+X+Y 按住约 3 秒，期间不要碰摇杆/扳机/其他键
  （固件要求按键计数恰好为 3，见
  [boot-mode-logic.md](../reverse-engineering/boot-mode-logic.md)）；
  进入成功与否看电脑是否出现 `BR23 UBOOT1.00`，灯灭不算数。

## 5. 风险与边界

- 描述符写坏会导致 USB 枚举失败（表现为「插上没反应」，但**能进
  刷写模式**，能恢复）；
- 键盘报告与手柄报告共用端点时注意报告长度，长度不符会被主机丢弃；
- 蓝牙（非 USB）路径的描述符由另一套流程下发，本页只覆盖 USB。

## 6. 参考

- 闪存布局与加密：[flash-layout.md](../reverse-engineering/flash-layout.md)
- 刷写模式逻辑：[boot-mode-logic.md](../reverse-engineering/boot-mode-logic.md)
- 二次开发总览：[../development/README.md](../development/README.md)
