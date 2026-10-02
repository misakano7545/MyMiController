# 反编译复现指南

本仓库中的 `decomp_all.c` 是用 Ghidra 对固件代码区完整反编译的产物。
下面是复现步骤（Windows/Linux 通用）。

## 0. 准备工作

- [Ghidra 11+](https://ghidra-sre.org/)（本仓库使用 12.1.4 验证）；
- 处理器插件：[misakano7545/ghidra-jieli](https://github.com/misakano7545/ghidra-jieli)
  （提供杰理 pi32v2 指令集支持），放入 Ghidra 的
  `Ghidra/Extensions/`（或通过 *File → Install Extensions* 安装）；
- 待分析固件：`firmware/G5605_boot_code.bin`。

## 1. 导入

1. 打开 Ghidra，新建工程（例如 `GamepadProj`）；
2. *File → Import File* 选择 `G5605_boot_code.bin`；
3. **Language 一定要选 `JieLi:LE:32:pi32v2`**（即 ghidra-jieli 插件）；
4. 导入向导中把 **Base Address 设为 `0x01E000C0`**（重要！）；
   - 依据：固件打包配置 `isd_config.ini` 中 `ENTRY=0x1E000C0`，
     实际设备内存映射中代码区从该地址开始执行。
5. 完成导入后打开 CodeBrowser，会提示自动分析，选择 **Yes**（默认选项即可）。

## 2. 导出全部函数的反编译结果

使用本仓库的脚本 `decompiled/ExportDecomp.py`：

1. 在 CodeBrowser 中打开 *Window → Script Manager*；
2. 把 `ExportDecomp.py` 拖进脚本列表（或点 *New Script* 粘贴内容）；
3. 运行脚本，设置输出目录环境变量 `GH_OUT`（默认
   `D:/dev/miswitch/analysis/ghidra_out`）；
4. 脚本会把所有函数反编译到 `decomp_all.c`。

命令行方式（headless）：

```bat
set GH_OUT=D:\out
analyzeHeadless D:\proj GamepadProj -import G5605_boot_code.bin ^
    -processor "JieLi:LE:32:pi32v2" -loader BinaryLoader ^
    -loader-baseAddr 0x01E000C0 -postScript ExportDecomp.py
```

## 3. 已知信息（分析起点）

| 项 | 值 |
|----|-----|
| 代码区大小 | 0x53000（含 32 字节设备记录） |
| 反编译函数总数 | 501（`FUN_01e00174` .. `FUN_01e40eea`） |
| 入口地址 | `0x01E000C0`（代码起点，见 `isd_config.ini`） |
| 进入刷写模式函数 | `FUN_01e01d94`（见 [boot-mode-logic.md](boot-mode-logic.md)） |
| 芯片 | BR23 / AC695N，pi32v2 内核 |

## 4. 与固件偏移的换算

反编译基址是 `0x01E000C0`，它对应 **`app.bin` 偏移 0**，而 `app.bin`
在镜像内的位置是 `0x030E0`（见
[flash-layout.md](flash-layout.md)）：

```
app.bin 偏移   = decompiled_address - 0x01E000C0
镜像内偏移     = 0x030E0 + (decompiled_address - 0x01E000C0)
```

例如 `FUN_01e01d94` 在 `app.bin` 偏移 `0x1CD4`，镜像内偏移 `0x4DB4`。

> ⚠️ 镜像内那一段是**加密**的，直接改镜像文件无效。请先用
> `python -m mico unpack firmware/G5605_boot_code.bin -o parts/`
> 解出 `parts/app.bin`，改完再用 `python -m mico pack` 或
> `python tools/build_firmware.py` 重新加密打包（后者会自动重算 CRC）。

## 5. 提示与技巧

- **符号还原**：优先看引用了字符串的函数（如 `"Debug"`、`"CLOCK"` 等），
  它们通常是驱动初始化或日志函数，能快速建立命名体系；
- **外设访问**：BR23 的总线寄存器基址为
  `0x1E0000`（LSB）/ `0x1F0000`（HSB）/ `0x100000`（CPU SFR）；
- **按键状态**：0x200/0x201 附近的数据结构存放按键位图；
- **闪存操作**：搜索对 `0x1E0000` 附近 SPIF 寄存器的写入可定位 flash 驱动。

## 6. 脚本备份

`decompiled/ExportDecomp.py` 即当时使用的导出脚本，可直接复用。
`decompiled/functions.csv` 是由反编译产物生成的函数总表
（地址 / `app.bin` 偏移 / 大小），查地址比翻 4000 行 C 快得多。

## 7. 相关文档

- 闪存布局 / 加密 / CRC：[flash-layout.md](flash-layout.md)
- 刷写模式逻辑：[boot-mode-logic.md](boot-mode-logic.md)
- 模式组合键（Mode+A/X/Y）与 Mode+B 可行性：[mode-switch-logic.md](mode-switch-logic.md)
- 二次开发指南：[../development/README.md](../development/README.md)
- Vibe Coding Mode 路线图：[../development/vibe-coding-mode.md](../development/vibe-coding-mode.md)
