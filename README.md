# PicoRV32 SoC

## RISC-V SoC Subsystem with AXI4-Lite Interconnect

A lightweight RISC-V System-on-Chip (SoC) subsystem, designed and implemented from RTL through to GDSII. The design integrates a **PicoRV32** RISC-V processor, a custom **AXI4-Lite interconnect**, ROM, SRAM and a memory-mapped UART into a modular embedded system.

The design is functionally verified with Verilator and GTKWave, then taken through an open-source **RTL-to-GDSII physical design flow** using OpenLane and the SkyWater SKY130 PDK.

**Flow:** RISC-V CPU -> RTL -> Verification -> Synthesis -> Floorplanning -> Placement -> CTS -> Routing -> DRC/LVS -> GDSII

---

## Key Features

- PicoRV32 RISC-V processor core (RV32IMC-capable configuration)
- Custom AXI4-Lite interconnect with address decoding
- ROM for program storage and SRAM for runtime data / stack
- Memory-mapped UART peripheral (8N1, 115200 baud at 50 MHz)
- Verilator-based RTL simulation and GTKWave waveform debugging
- Yosys synthesis and OpenLane RTL-to-GDSII flow on SkyWater SKY130
- Standard-cell placement and routing, CTS, and DRC/LVS signoff

---

## Architecture

The SoC is organised around the PicoRV32 CPU and an AXI4-Lite fabric:

```text
                    +----------------------+
                    |      PicoRV32        |
                    |    RISC-V CPU Core   |
                    +----------+-----------+
                               |
                    Native Memory Interface
                               |
                    +----------v-----------+
                    |     AXI4-Lite        |
                    |       Bridge         |
                    +----------+-----------+
                               |
                    +----------v-----------+
                    |    AXI4-Lite         |
                    |    Interconnect      |
                    +----+-----------+-----+
                         |           |
                  +------+           +------+
                  |                         |
           +------v------+           +------v------+
           |     ROM     |           |    SRAM     |
           |  Program    |           |    Data     |
           |   Memory    |           |   Memory    |
           +-------------+           +-------------+
                                              |
                                    +---------v---------+
                                    |  UART Peripheral  |
                                    +---------+---------+
                                              |
                                         uart_tx / rx
```

Address decoding routes CPU transactions to ROM, SRAM or UART. The AXI4-Lite interface uses independent VALID/READY handshakes across its five channels; a transaction completes only when both VALID and READY are asserted in the same cycle.

---

## Memory Map

| Address      | Peripheral | Purpose                    |
|--------------|------------|----------------------------|
| `0x0000_0000` | ROM        | Program / firmware storage |
| `0x0001_0000` | SRAM       | Runtime data and stack     |
| `0x1000_0000` | UART TX    | Serial transmission        |
| `0x1000_0004` | UART RX    | Serial reception           |
| `0x1000_0008` | UART STATUS| UART status                |

---

## RTL Modules

All RTL lives in `src/`:

| Module                   | Function                              |
|--------------------------|---------------------------------------|
| `picorv32.v`             | RISC-V processor core                 |
| `top.v`                  | SoC top-level integration             |
| `axi_lite_interconnect.v`| AXI transaction routing               |
| `axi_decoder.v`          | Address decoding                      |
| `rom.v`                  | Firmware / program memory             |
| `sram.v`                 | Runtime data memory (byte-writeable)  |
| `uart_axi.v`             | AXI-to-UART register interface        |
| `uart_tx.v`              | UART transmitter                      |
| `uart_rx.v`              | UART receiver                         |

---

## Firmware

The firmware under `picoRV32/fw/` is built with its own Makefile:

```text
main.c -> GCC -> firmware.elf -> objcopy -> firmware.bin -> bin2hex.py -> rom.hex
```

The generated `rom.hex` is loaded into the ROM used by the SoC. The CPU boots from the ROM address space and executes the stored firmware.

---

## Verification

RTL is verified before physical implementation using Verilator and GTKWave:

```text
RTL -> Verilator -> cycle-accurate simulation -> testbench -> VCD/FST -> GTKWave
```

Checks include CPU boot, instruction fetch, memory transactions, AXI VALID/READY handshakes, address decoding, SRAM access, and end-to-end CPU -> AXI -> UART operation.

---

## Physical Design

After RTL verification the design is taken through the open-source ASIC flow:

- **PDK:** SkyWater SKY130
- **Flow:** OpenLane (Yosys synthesis, OpenROAD floorplan/placement/CTS/routing, Magic DRC, Netgen LVS)

The OpenLane configuration is in `config.json` (design `top`, 20 ns clock period, `SYNTHESIS` define) with timing constraints in `top.sdc` and floorplan pin placement in `pin_order.cfg`.

Physical-design figures (area, utilisation, WNS/TNS, power, DRC/LVS) should be quoted from the actual generated OpenLane reports in `runs/`.

---

## Repository Structure

```text
picorv32_soc/
├── src/                 # RTL sources (see table above) + rom.hex
├── picoRV32/
│   ├── fw/              # firmware: Makefile, main.c, crt0.S, link.ld, bin2hex.py
│   └── obj_dir/         # Verilator build output
├── libs/                # sky130 standard-cell library
├── config.json          # OpenLane configuration
├── top.sdc              # timing constraints
├── pin_order.cfg        # floorplan pin placement
├── runs/                # OpenLane run outputs (build artifacts)
├── LICENSE
└── README.md
```

---

## Building and Running

- **Firmware:** run `make` inside `picoRV32/fw/` to compile `main.c` and regenerate `rom.hex`.
- **Simulation:** build the testbench with Verilator and inspect the waveform in GTKWave.
- **Physical design:** run OpenLane against `config.json`; outputs land under `runs/`.

---

## Attribution

This project integrates the **PicoRV32** RISC-V processor core by Clifford Wolf, which is distributed under the ISC license. See the source header in `src/picorv32.v` for its original license terms.

---

## License

Released under the MIT License. See [LICENSE](LICENSE) for details.

---

## Author

**Digambar Singh** - RTL Design / SoC Integration / Physical Design

Focus: RTL Design | Computer Architecture | SoC Integration | AXI4-Lite | Verification | RTL-to-GDSII
