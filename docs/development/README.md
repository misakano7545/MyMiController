# 二次开发指南

本页说明如何基于本仓库改造手柄固件（例如做「Vibe Coding Mode」：把按键
映射成电脑键盘按键）。**刷机有风险，请先备份。**

## 总览：从代码到上手

```
反编译源码 (decompiled/decomp_all.c) + 函数表 (decompiled/functions.csv)
        │  分析、定位要改的逻辑
        ▼
应用代码 (firmware/parts/app.bin)          ← 补丁/替换；容器细节全自动
        │  python tools/build_firmware.py（或 python -m mico pack）
        ▼
刷写镜像 (build/*.bin，0x53000 字节)
        │  GUI「5. 刷入自选镜像」或 python -m mico flash
        ▼
手柄实机验证 → 不行就「4. 恢复备份」
```

> 出厂镜像已在仓库里拆成「零件」放在 `firmware/parts/`：改固件就是
> 改这些零件再重新打包，不用手工处理目录、加密和 CRC。
> 不修改时打包结果与出厂镜像**逐字节一致**，CI 每次都会验证。

## 构建流水线（推荐入口）

```bash
# 1) 校验零件（重建 == 出厂镜像）
python tools/build_firmware.py --verify-only

# 2) 应用补丁并构建（补丁=一个 Python 文件，见 patches/）
python tools/build_firmware.py --patch patches/example-hello.py \
    --out build/my-firmware.bin

# 3) 需要整机镜像（带自己的设备记录）时
python tools/build_firmware.py --patch patches/example-hello.py \
    --out build/my-firmware.bin --full --record my_backup.bin
```

补丁文件长这样：

```python
def patch(ctx):
    ctx.app[0x1234] = 0x01          # 改 app.bin 的字节
    ctx.app[0x2000:0x2008] = b"..."  # 或写一段字符串
    ctx.note("说明这次改了什么")
```

`ctx` 同时提供 `uboot` / `isd_config` / `app` / `cfg_tool` / `tone`
五个可改零件；长度变了也没关系，构建器会自动挪动后续内容并重算所有
CRC（`app_area_head` 的校验覆盖整个应用区）。

## 0. 环境

- Python 3.9+（本仓库所有工具零第三方依赖）；
- 可用的反编译环境（可选）：Ghidra + ghidra-jieli，见
  [../reverse-engineering/README.md](../reverse-engineering/README.md)；
- 十六进制编辑器（如 HxD / ImHex / 010 Editor）或直接写 Python 脚本；
- 一个完整的本机备份（GUI 第 2 项）。

## 1. 找到入口：固件如何启动

| 项 | 值 |
|----|-----|
| 芯片 | 杰理 BR23 / AC695N |
| 代码区文件 | `firmware/G5605_boot_code.bin`（339,968 字节） |
| 反编译基址 | `0x01E000C0` |
| 闪存↔地址换算 | `flash_offset = addr - 0x01E000C0 + 0xC0` |
| 打包配置 | `jl_isd.fw` 内的 `isd_config.ini`（`ENTRY=0x1E000C0`） |

主循环、按键扫描、USB HID 报告等都可以在 `decomp_all.c` 里搜索关键常量
定位（例如按键位图在偏移 0x200/0x201，刷写模式计时器在 0xEE）。

## 2. 三种改造方式（由易到难）

### 方式 A：二进制补丁（无需编译）

适合改**常量、表、跳转**这类小改动：

1. 在 `decomp_all.c` 中定位目标函数（搜 `FUN_01e...` 或常量），
   或在 `decompiled/functions.csv` 里按地址查；
2. 用换算公式求出 `app.bin` 偏移
   （`app_off = addr - 0x01E000C0`，见
   [../reverse-engineering/flash-layout.md](../reverse-engineering/flash-layout.md)）；
3. 写一个补丁脚本改 `ctx.app`；
4. 用 `tools/build_firmware.py --patch ...` 构建、刷入测试。

示例：想把「进刷写模式需要 3 秒」改成别的时长，就找
`docs/reverse-engineering/boot-mode-logic.md` 里 `0x84` 那个比较常量，
写一个对应的补丁脚本。

现成例子见 `patches/`：
- `example-hello.py` —— 最小改动演示（改一段日志字符串）；
- `vibe-coding-mode.py` —— Vibe Coding Mode 阶段一（产品名/日志可识别）。

### 方式 B：可重定位代码（patch 空间注入）

在固件的空闲区域（例如 0x53000 之后、或代码区中的 0xFF 填充区）写入自定义
机器码，把原函数入口改成跳转过去。需要：

1. 用 Ghidra 在目标位置编写汇编（pi32v2），导出机器码；
2. 用 Python 写入 `G5605_boot_code.bin` 相应偏移；
3. 修正任何受影响的校验（本手柄固件未发现整体校验，已实测直接改二进制
   可启动——见下节「关于校验」）。

### 方式 C：完全重编译（最重）

杰理官方 SDK（AC695N）不在本仓库内提供；如果拿到 SDK，可基于 SDK 工程
重建固件，注意保持：

- 芯片型号 AC695X、Flash 1M、SPI 配置与 `isd_config.ini` 一致；
- PID 保持 `G5605_V1.0`（含 16 字节内）；
- 输出 `flash.bin` 后用本仓库的 `tools/build_image.py` 加上设备记录。

## 3. 打包镜像

```bash
# 方式一（推荐）：开发构建器，自动处理容器与 CRC
python tools/build_firmware.py --patch my_patch.py --out my_image.bin

# 方式二：拆包 / 打包
python -m mico unpack firmware/G5605_boot_code.bin -o parts/
#   改 parts/app.bin ...
python -m mico pack parts/ -o my_image.bin

# 方式三：旧式手工镜像（仅做记录保留/完整性检查）
python tools/build_image.py --flash-bin patched_flash.bin \
    --backup my_backup.bin --out my_image.bin
```

- `my_image.bin` 即 GUI「5. 刷入自选镜像」所用的文件；
- 关于设备记录：`0x52FE0` 起 32 字节，含 PID 字符串和本机 MAC/标识。
  **保留自己手柄的记录**更安全（尤其涉及蓝牙配对时）；
- 容器结构（目录、加密、CRC）见
  [../reverse-engineering/flash-layout.md](../reverse-engineering/flash-layout.md)；
- Vibe Coding Mode 路线图见 [vibe-coding-mode.md](vibe-coding-mode.md)。

## 4. 刷入与验证

1. 手柄进刷写模式（HOME+X+Y 约 3 秒）；
2. GUI「5. 刷入自选镜像」或 `python -m mico flash my_image.bin`；
   - 工具会**擦除→写入→回读校验**，失败会明确报错；
3. 完成后自动重启，观察手柄行为；
4. 异常时用「4. 恢复备份」还原（也可选「6」仅重启）。

## 5. 关于校验（重要）

- 本固件在启动路径上**未发现对代码区的整体校验**（对若干区域修改后仍能
  正常启动，已在实机验证）；
- 但 **BT/OTA 系统**可能校验 `ota.bin`（升级包版本区）、`script.ver` 等，
  而这些区域**不在** `flash.bin`（0x53000）范围内，正常刷写不会动它们；
- 如果修改涉及 `0x53000` 之后的数据（不推荐），请先理解其结构。

## 6. 固件容器（.fw/.ufw）解析

```bash
python tools/unpack_fw.py jl_isd.fw -o unpacked/
```

会解出 `flash.bin`、`isd_config.ini`、`ota.bin`、`br23loader.bin` 等，
解密逻辑见 `mico/jlfw.py`（纯 Python，含 SFC / ENC / CRC 算法实现）。

## 7. 常见问题

**Q: 刷了自制固件没声音/灯不亮？**
- 先用备份恢复，确认硬件本身正常；
- 检查是否误改了 `0x53000` 之后的配置区。

**Q: 能不能做按键映射成 Enter 键？**
- 可以。思路：找到 USB HID 报告组装函数（在 `decomp_all.c` 中搜索 USB /
  HID 相关寄存器写入），把对应按键位映射到键盘用法码（Enter = 0x28）。
  也可以改成复合设备（手柄+键盘）或纯键盘。需要一定的逆向功底。

**Q: 刷写会变砖吗？**
- 理论上不会。刷写模式在芯片 MaskROM 中，与闪存内容无关，任何时候都能
  再次进入并重刷（见 README「安全须知」）。

## 8. 参考

- 逆向总览：[../reverse-engineering/README.md](../reverse-engineering/README.md)
- 刷写模式逻辑：[../reverse-engineering/boot-mode-logic.md](../reverse-engineering/boot-mode-logic.md)
- 闪存布局：`mico/image.py` 头部注释
- 参考项目：kagaimiq/jl-uboot-tool、kagaimiq/jl-misctools（MIT）