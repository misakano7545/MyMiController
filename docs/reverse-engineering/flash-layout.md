# 闪存布局与固件容器格式

本页是固件的「地图」：`firmware/G5605_V1.0_flash_image.bin` 的每一个
字节是什么、怎么加密、怎么校验、怎么重建。所有结论都通过了
「零件重建 == 出厂镜像」的逐字节验证（见 `tests/test_jlfs.py`）。

## 0. 总览

手柄的 SPI-NOR 闪存为 1 MiB，前 `0x53000` 字节是固件镜像：

| 偏移 | 大小 | 内容 |
|------|------|------|
| `0x00000` | 32 B | 镜像头（PID `G5605_V1.0`、闪存几何等） |
| `0x00020` | 5×32 B | 顶层 JLFS 目录（uboot / isd_config / 两个保留区 / key_mac） |
| `0x000C0` | 8,168 B | `uboot.boot`（SPL，16 B 银行头 + 载荷） |
| `0x020A8` | 113 B | `isd_config.ini`（明文） |
| `0x02119` | — | 0xFF 填充 |
| `0x03000` | 32 B | 一段孤立的代码块（不透明，重建时原样保留） |
| `0x03020` | 32 B | `app_area_head` 目录项 |
| `0x03040` | 5×32 B | 应用目录（app.bin / cfg_tool.bin / VM / PRCT / BTIF） |
| `0x030E0` | 290,872 B | **`app.bin`** — 主程序，Ghidra 的输入 |
| `0x04A118` | 880 B | `cfg_tool.bin` |
| `0x04A488` | 34,672 B | `tone` — 提示音目录（28 个 `.wtg`） |
| `0x052BF8` | — | 加密区结束，0xFF 到 `0x53000` |
| `0x052FE0` | 32 B | 设备记录槽（出货镜像内为 FF，实机上有 PID/MAC） |
| `0xF6000` | — | VM 配置区（1 MiB 备份中才有） |
| `0xFFF00` | 8 B | 结束标记 `FE 09 60 5D 5A A0 A8 B0`（实机备份可见） |

## 1. JLFS 目录项（32 字节）

```
0x00  hdr_crc   u16   = crc16(entry[2:32])
0x02  data_crc  u16   = crc16(payload)
0x04  offset    u32   载荷相对「所在目录数据基址」的偏移（目录项则为 0x20）
0x08  size      u32   载荷字节数（目录项含头部）
0x0C  attr      u8    0x02 文件 / 0x81 保留区 / 0x82 应用文件 / 0x83 目录
0x0D  reserved  u8
0x0E  index     u16   最后一项非 0
0x10  name      char[16]  NUL 结尾，其余填 0xFF
```

CRC 均为 CRC-16/CCITT-FALSE（多项式 0x1021，初值 0，不反转）。

## 2. 加密规则（三处，别搞混）

1. **镜像头 + 顶层目录**：每个 32 字节块独立用 ENC 流密码
   （密钥 `0xFFFF`，每块重新起流）；
2. **uboot.boot**：16 字节银行头用新起的 ENC 流；载荷**延续同一条
   流**（这是唯一跨块连续的地方）；
3. **`0x03020..0x052BF8`**：地址相关 SFC 密码，每 32 字节一块：

   ```
   block_key = (chip_key ^ ((pos - 0x3020) >> 2)) & 0xFFFF
   ```

   `chip_key = 0xA80F`（BR23，可从 `isd_config.ini` 的 32 字节
   chipkey 块解出）；`pos` 是镜像内绝对偏移，位移基准是加密区起点
   `0x3020`，不是文件头。最后一块若不足 32 字节，多余部分保持 0xFF。

> 换句话说：直接把 `app.bin` 的字节写进镜像文件**不生效**，必须按
> 上式重新加密，否则 CRC 也会对不上。

## 3. 校验规则

| 位置 | 校验 |
|------|------|
| 镜像头 `[0:2]` | `crc16(header[2:32])` |
| 目录项 `[0:2]` | `crc16(entry[2:32])` |
| 目录项 `[2:4]` | `crc16(载荷)`（`data_crc`） |
| uboot 银行头 | `crc16(头[0:14])` |
| `app_area_head` | `crc16(0x03040 .. tone 结尾)` |

改任何一个载荷，都要顺带改它的 `data_crc`、目录项 `hdr_crc`，
以及（改 app.bin 时）`app_area_head.data_crc`。构建器全部自动完成。

## 4. 重建工具

```bash
# 拆出零件（含 app.bin 与 tone）
python -m mico unpack firmware/G5605_boot_code.bin -o parts/

# 改 parts/app.bin 后重新打包（CRC 全部重算）
python -m mico pack parts/ -o my_image.bin

# 或走开发构建器（支持补丁脚本、逐字节校验）
python tools/build_firmware.py --patch patches/example-hello.py --out build/x.bin
```

`firmware/parts/` 里就是出厂零件；不修改时重建结果与
`G5605_boot_code.bin` 逐字节一致（SHA256
`FBDA6EE6…`），CI 每次都验证这一点。

## 5. 设备记录

`0x52FE0` 起 32 字节是每台手柄唯一的记录（PID `G5605_V1.0`、MAC
等）。构建整机镜像时用 `--full --record` 把自己备份里的记录带上，
避免把别人的标识刷进自己设备。

## 6. 地址换算

反编译地址（Ghidra 基址 `0x01E000C0`）对应：

```
app.bin 偏移   = addr - 0x01E000C0
镜像内偏移     = 0x030E0 + (addr - 0x01E000C0)
```

> 注意：镜像内偏移处是**密文**。要在十六进制编辑器里看指令，请先
> 用 `python -m mico unpack` 解出 `parts/app.bin`，直接编辑它。

## 7. 版本号与编译日期（`G560501_22C4_V1.0_230413`）

厂商刷机工具里出现的版本串 `G560501_22C4_V1.0_230413`：

| 位置 | 说明 |
|------|------|
| 刷机包 `config.ini` / 解包 `data_config.ini` 第 12 行 | `value="G560501_22C4_V1.0_230413"`，是工具自己的「版本信息」字段 |
| `tail_dec.bin` 偏移 `0x12af` | 同一段配置文本的另一份拷贝 |

**它不在固件里**：`app.bin` 与 1 MiB 刷写镜像里都搜不到
`G560501`/`22C4`/`230413`（镜像头只有 `G5605_V1.0` 这个 PID）。

固件里真正带的是**编译器写入的编译日期**：

| app.bin 偏移 | 内容 | 备注 |
|--------------|------|------|
| `0x1b2e8` | `14:23:48` | 编译时刻 |
| `0x1b3b6` | `Apr 13 2023` | 编译日期，紧跟 `NS JOYPAD!` 之后 |
| `0x1e49d` | `Sep 21 2018` | SDK 日期 |
| `0x1e4ad` | `04:50:51` | SDK 编译时刻 |

结论：版本串里的 **`230413` 就是日期 `2023-04-13`**（年 `23` + 月 `04`
+ 日 `13`），与固件里的 `Apr 13 2023` 完全吻合；不是时分秒。
