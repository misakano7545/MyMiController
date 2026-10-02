# MyMiController

[![CI](https://github.com/misakano7545/MyMiController/actions/workflows/ci.yml/badge.svg)](https://github.com/misakano7545/MyMiController/actions/workflows/ci.yml)
[![Release](https://img.shields.io/github/v/release/misakano7545/MyMiController?color=2ea44f&label=release)](https://github.com/misakano7545/MyMiController/releases/latest)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

小米游戏手柄（G5605 / 芯片 BR23·AC695N）的**刷写工具 + 固件镜像 + 反编译源码**一体仓库。

官方刷机软件又老又难用，本仓库提供一套经过实测的替代方案：

- 🖥️ **图形界面工具**：备份固件、刷入固件、恢复备份，点几下就完成；
- 📦 **固件镜像**：本手柄可用的完整镜像（与出厂固件逐字节一致）；
- 🔬 **反编译源码**：对固件完整反编译（501 个函数），附带复现教程；
- 🧰 **命令行工具**：脚本化刷写，方便批量/自动化；
- ⚙️ **CI**：自动跑测试、校验固件镜像、构建 Windows 可执行文件。

> ⚠️ 刷机有风险。请先阅读[安全须知](#安全须知)，并**务必先备份**。

---

## 支持的设备

| 项目 | 值 |
|------|-----|
| 手柄型号 | 小米游戏手柄（G5605，Xbox 布局） |
| 主控芯片 | 杰理 BR23 (AC695N/AC635N) |
| 闪存 | 1 MiB SPI-NOR（`0xEB6014`） |
| 刷写模式设备名 | `BR23 UBOOT1.00` |
| 正常模式 USB ID | `VID_045E&PID_028E`（Xbox 360 手柄） |
| 刷写模式 USB ID | `VID_4C4A&PID_2342` |

如果你的手柄是同一个主控方案（BR23/AC695N），本工具大概率也能用，但固件镜像
请只用于 G5605。

---

## 快速开始（图形界面，推荐）

**Windows 用户：**

1. 安装 [Python 3.9+](https://www.python.org/downloads/)（安装时勾选 *Add to PATH*）；
2. 双击 `launch_gui.cmd`（会自动申请管理员权限）；
3. 让手柄进入刷写模式（见下节）；
4. 在窗口中点击：
   - **1. 备份手柄固件** — 先把当前固件存下来（强烈建议第一步就做）；
   - **2. 刷入项目固件** — 写入本仓库提供的固件；
   - **3. 恢复备份** — 用它随时还原；
   - **4. 刷入自选镜像** — 二次开发用；
   - **5. 退出手柄刷写模式** — 让手柄重启回正常模式。

**Linux 用户：** `./launch_gui.sh`（需要读写 `/dev/sg*` 的权限，通常要 root）。

也可以在 [Releases](../../releases) 下载单文件版 `MyMiController.exe`（CI 自动构建），
无需安装 Python。

---

## 如何进入刷写模式

1. 用数据线把手柄接到电脑（有线模式，1 号灯常亮，电脑里出现 Xbox 360 手柄）；
2. 同时按住 **HOME + X + Y** 三个键约 **3 秒**；
3. 指示灯熄灭、电脑出现 **`BR23 UBOOT1.00`** 设备 = 成功；
4. 刷写完成后工具会自动让手柄重启回正常模式。

> 失败时：拔线重插，确认是直连主机（不要用扩展坞/Hub），再重复第 2 步。
> 详细排查见 [docs/enter-flashing-mode.md](docs/enter-flashing-mode.md)。

---

## 命令行用法

```bash
python -m mico info                  # 查看设备
python -m mico backup my_backup.bin  # 备份 1MB 全片
python -m mico flash  image.bin      # 擦除+写入+校验（-y 跳过确认）
python -m mico restore backup.bin    # 从备份恢复
python -m mico reset                 # 手柄重启回正常模式
```

所有命令均可跨平台（Windows / Linux），零第三方依赖（只用 Python 标准库）。

---

## 仓库结构

```
├─ launch_gui.cmd / .sh     # GUI 一键启动
├─ MyMiController.py        # GUI 入口（PyInstaller 之锚）
├─ gui/flasher.py           # tkinter 图形界面
├─ mico/                    # 核心库（零依赖）
│  ├─ transport.py          #   SCSI passthrough 传输层（Win32/Linux）
│  ├─ device.py             #   BR23 引导 + 闪存读写 + 校验
│  ├─ crypto.py             #   杰理 CRC16/CRC32/各种固件加密
│  ├─ jlfw.py               #   .fw/.ufw 固件包解析
│  ├─ image.py              #   闪存镜像布局
│  ├─ cli.py                #   命令行
│  └─ data/br23loader.bin   #   芯片 RAM loader（刷写必需）
├─ firmware/                # 固件镜像
│  ├─ G5605_V1.0_flash_image.bin   # ★ 可直接刷入的镜像
│  ├─ G5605_boot_code.bin          #   固件代码区（vendor flash.bin）
│  └─ G5605_device_record.bin      #   32 字节设备记录说明样本
├─ decompiled/              # 反编译源码 + 复现指南
├─ tools/                   # 辅助工具（构建镜像/解包固件/打包 exe）
├─ tests/                   # 测试（无 pytest 也能跑）
├─ docs/                    # 文档（含逆向、二次开发）
└─ .github/workflows/ci.yml # CI：测试 + 镜像校验 + 构建 exe
```

---

## 固件镜像说明

`firmware/G5605_V1.0_flash_image.bin`（339,968 字节，即 `0x53000`）：

- 与手柄出厂固件**逐字节一致**（在真实设备上读取并校验过，SHA256 见下）；
- 组成 = 厂商 `flash.bin`（代码区）+ 32 字节设备记录（PID `G5605_V1.0`、设备 MAC 等）；
- 刷入时只覆盖前 `0x53000` 字节，后面的配置区不动。

| 文件 | 大小 | SHA256（前 16 位） |
|------|------|--------------------|
| `G5605_V1.0_flash_image.bin` | 339,968 B | `875032921584BF3E…` |
| `G5605_boot_code.bin` | 339,968 B | `FBDA6EE68CEC9269…` |

> 🔐 设备记录里含有**你手柄的 MAC 等唯一数据**。如果你是另一台手柄，
> 建议先 `python -m mico backup`，再用 `tools/build_image.py` 生成保留
> 自己设备记录的镜像，而不是直接刷这个文件。

---

## 反编译源码

`decompiled/decomp_all.c` 包含固件**全部 501 个函数**的反编译结果
（Ghidra 12 + [ghidra-jieli](https://github.com/misakano7545/ghidra-jieli) 处理器插件，
地址基址 `0x01E000C0`）。

- 复现方法：[docs/reverse-engineering/README.md](docs/reverse-engineering/README.md)
- 刷写模式逻辑分析：[docs/reverse-engineering/boot-mode-logic.md](docs/reverse-engineering/boot-mode-logic.md)
- 已还原的关键发现：手柄固件内部有一个「长按 HOME+X+Y 进入 USB 刷写」的判定
  （`FUN_01e01d94`，约 3 秒计时），以及闪存的完整布局。

---

## 二次开发

想把按键映射成电脑的 Enter 键？想改灯光、加功能？入口如下：

1. 阅读 [docs/development/README.md](docs/development/README.md)（总览）；
2. 改造 `firmware/G5605_boot_code.bin`（或反编译源码）；
3. 用 `tools/build_image.py` 生成镜像；
4. GUI 选「4. 刷入自选镜像」或 `python -m mico flash`；
5. 不满意随时用备份还原。

固件容器（`jl_isd.fw` / `update.ufw`）的解析与解包见 `tools/unpack_fw.py`。

---

## CI（GitHub Actions）

`.github/workflows/ci.yml` 在每次 push/PR 时：

- 在 Ubuntu + Windows、Python 3.9/3.12 上跑完整测试；
- 校验 `firmware/` 镜像与代码区/设备记录的一致性；
- 构建 Windows 单文件 `MyMiController.exe` 并上传为构建产物（Artifact）。

---

## 安全须知

- **先备份**：任何时候都可以用备份把闪存恢复到原样；
- 芯片 ROM 中的刷写模式不依赖闪存内容，**正常操作不会刷坏**（没有变砖风险）；
- 刷写过程中**不要拔线**，工具会自动回读校验；
- 本项目与小米公司无关，仅供学习与个人设备维修研究使用；
- 固件版权归原厂所有；本仓库中的固件仅作为你个人设备的备份/恢复用途。

---

## 致谢

- [kagaimiq/jl-uboot-tool](https://github.com/kagaimiq/jl-uboot-tool)（MIT）—
  杰理 UBOOT 协议与 loader 的权威参考实现；
- [kagaimiq/jl-misctools](https://github.com/kagaimiq/jl-misctools)（MIT）—
  .fw/.ufw 容器与杰理加密算法；
- [misakano7545/ghidra-jieli](https://github.com/misakano7545/ghidra-jieli)（Apache-2.0）—
  Ghidra 的 pi32v2 处理器插件，反编译本项目固件的基础设施；
- gamesir-fw 项目 — 固件容器格式的启示。

## 许可证

本项目代码以 MIT 许可发布，见 [LICENSE](LICENSE)。第三方组件的许可见
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)。