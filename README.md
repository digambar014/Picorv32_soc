# Prico32RV

## RISC-V Based SoC Subsystem with AXI4-Lite Interconnect

Prico32RV is a lightweight RISC-V based System-on-Chip (SoC) subsystem designed and implemented from RTL through physical design and GDSII generation.

The project integrates a **PicoRV32 RISC-V processor**, an **AXI4-Lite interconnect**, memory, and a UART peripheral into a modular embedded system. The design is functionally verified using Verilator and GTKWave and taken through an open-source **RTL-to-GDSII physical design flow using OpenLane and the SkyWater 130 nm PDK**.

The project demonstrates the complete digital ASIC design flow:

**RISC-V CPU → RTL → Verification → Synthesis → Floorplanning → Placement → CTS → Routing → DRC/LVS → GDSII**

---

## Key Features

- RISC-V based embedded SoC subsystem
- PicoRV32 processor core
- RV32IMC-capable PicoRV32 configuration
- AXI4-Lite master interface
- Custom AXI4-Lite interconnect
- Address decoding and memory mapping
- ROM for program storage
- SRAM for runtime data and stack
- Memory-mapped UART peripheral
- UART TX/RX support
- 8N1 UART communication
- 115200 baud operation with 50 MHz clock
- Verilator-based RTL simulation
- GTKWave waveform debugging
- Yosys RTL synthesis
- OpenLane RTL-to-GDSII flow
- SkyWater SKY130 PDK
- Standard-cell placement and routing
- Clock Tree Synthesis
- DRC and LVS verification
- Final GDSII generation

---

# System Architecture

The SoC is organized around the PicoRV32 CPU and an AXI4-Lite communication fabric.

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
                         |  AXI4-Lite           |
                         |   Interconnect       |
                         +----+----------+------+
                              |          |
                    +---------+          +---------+
                    |                              |
             +------v------+                +------v------+
             |     ROM     |                |    SRAM     |
             |  Program    |                |    Data     |
             |   Memory    |                |   Memory    |
             +-------------+                +-------------+
                                                   
                                    +----------------+
                                    | UART Peripheral|
                                    +-------+--------+
                                            |
                                            v
                                      uart_tx / rx
```

The architecture uses address decoding to route CPU transactions to ROM, SRAM, or UART. The AXI4-Lite interface uses independent VALID/READY handshakes for its five channels.

---

# Processor Core

The system uses the **PicoRV32** processor core.

The core is a size-optimized 32-bit RISC-V implementation with configurable ISA extensions. The project documentation describes RV32IMC support, including:

- RV32I base integer ISA
- M extension for multiplication/division
- C extension for compressed instructions
- 32 general-purpose registers
- Configurable interrupt support
- Native memory interface

The PicoRV32 AXI variant exposes an AXI-compatible master interface for SoC integration.

### Important CPU Signals

| Signal | Description |
|---|---|
| `mem_valid` | Indicates an active memory transaction |
| `mem_ready` | Indicates transaction completion |
| `mem_instr` | Identifies an instruction fetch |
| `mem_addr[31:0]` | Target memory/peripheral address |
| `mem_wdata[31:0]` | Write data |
| `mem_wstrb[3:0]` | Byte write enables |
| `mem_rdata[31:0]` | Read data returned to CPU |

---

# AXI4-Lite Interconnect

The processor communicates with the system peripherals through an AXI4-Lite interconnect.

AXI4-Lite contains five independent channels:

### Write

1. **AW — Write Address**
2. **W — Write Data**
3. **B — Write Response**

### Read

4. **AR — Read Address**
5. **R — Read Data**

A transaction is completed only when both `VALID` and `READY` are asserted during the same clock cycle.

### AXI Handshake Rules

```text
Transfer = VALID && READY
```

The master keeps `VALID` asserted until the receiving slave asserts `READY`.

The implementation uses an FSM to translate the PicoRV32 native memory interface into AXI4-Lite transactions.

### Bridge FSM

```text
                 +----------+
                 | ST_IDLE  |
                 +----+-----+
                      |
             +--------+--------+
             |                 |
           WRITE              READ
             |                 |
             v                 v
       +-----------+     +-----------+
       | ST_WR_AW  |     | ST_RD_AR  |
       +-----+-----+     +-----+-----+
             |                 |
             v                 v
       +-----------+     +-----------+
       |  ST_WR_B  |     |  ST_RD_R  |
       +-----+-----+     +-----+-----+
             |                 |
             +--------+--------+
                      |
                      v
                 +----------+
                 | ST_IDLE  |
                 +----------+
```

The documented bridge contains five primary states: `ST_IDLE`, `ST_WR_AW`, `ST_WR_B`, `ST_RD_AR`, and `ST_RD_R`.

---

# Memory Map

The SoC uses memory-mapped access for program memory, data memory, and UART registers.

| Address | Peripheral | Purpose |
|---|---|---|
| `0x0000_0000` | ROM | Program / firmware storage |
| `0x0001_0000` | SRAM | Runtime data and stack |
| `0x1000_0000` | UART TX | Serial transmission |
| `0x1000_0004` | UART RX | Serial reception |
| `0x1000_0008` | UART STATUS | UART status |

The address decoder uses address matching to select the appropriate slave.

> **Note:** The address windows shown in the project documentation are larger than the actual implemented memory depth. For example, the ROM has an address window but the documented physical ROM depth is 8 KB, while the SRAM implementation described in the RTL section is 64 × 32-bit = 256 bytes.

---

# ROM

The ROM stores the firmware executed by the RISC-V processor.

The documented firmware flow is:

```text
main.c
   ↓
GCC
   ↓
firmware.elf
   ↓
objcopy
   ↓
firmware.bin
   ↓
bin2hex
   ↓
rom.hex
```

The generated `rom.hex` file is loaded into the ROM implementation used by the SoC.

---

# SRAM

The SRAM provides runtime storage for data and the processor stack.

The documented RTL implementation uses:

```text
Depth  = 64 words
Width  = 32 bits
Size   = 64 × 32 bits
       = 256 Bytes
```

The SRAM supports byte-level writes through the `wstrb[3:0]` signals.

```verilog
if (wstrb[0]) mem[addr][7:0]   <= wdata[7:0];
if (wstrb[1]) mem[addr][15:8]  <= wdata[15:8];
if (wstrb[2]) mem[addr][23:16] <= wdata[23:16];
if (wstrb[3]) mem[addr][31:24] <= wdata[31:24];
```

The RTL is intended to remain ASIC-friendly by avoiding `initial` blocks for SRAM initialization.

---

# UART Peripheral

The SoC includes a memory-mapped UART peripheral for serial communication and debugging.

### UART Configuration

```text
Clock       : 50 MHz
Baud Rate   : 115200
Frame       : 8N1
Data Bits   : 8
Parity      : None
Stop Bits   : 1
```

The documented clock divider is:

```text
CLKS_PER_BIT = 50,000,000 / 115,200
             ≈ 434
```

A transmitted byte follows:

```text
START → D0 → D1 → D2 → D3 → D4 → D5 → D6 → D7 → STOP
```

The CPU accesses the UART through memory-mapped registers.

---

# Firmware

The firmware directory is organized as:

```text
fw/
├── main.c
├── start.S
├── link.ld
├── firmware.bin
└── rom.hex
```

A typical UART access is performed through a memory-mapped register:

```c
#define UART_TX \
    (*((volatile uint32_t*)0x10000000))

void uart_putc(char c)
{
    UART_TX = c;
}
```

The processor boots from the ROM address space and executes the firmware stored in `rom.hex`.

---

# RTL Structure

The main RTL components include:

```text
rtl/
├── picorv32.v
├── top.v
├── axi_lite_interconnect.v
├── axi_decoder.v
├── rom.v
├── sram.v
├── uart_axi.v
├── uart_tx.v
└── uart_rx.v
```

The major responsibilities are:

| Module | Function |
|---|---|
| `picorv32.v` | RISC-V processor |
| `top.v` | SoC top-level integration |
| `axi_lite_interconnect.v` | AXI transaction routing |
| `axi_decoder.v` | Address decoding |
| `rom.v` | Firmware/program memory |
| `sram.v` | Runtime data memory |
| `uart_axi.v` | AXI-to-UART register interface |
| `uart_tx.v` | UART transmitter |
| `uart_rx.v` | UART receiver |

---

# Verification

The design is verified before physical implementation using Verilator and GTKWave.

### Simulation Flow

```text
RTL
 ↓
Verilator
 ↓
Cycle-accurate simulation
 ↓
Testbench
 ↓
VCD/FST waveform
 ↓
GTKWave
```

The documented verification checks include:

- CPU boot
- Instruction fetching
- Memory transactions
- AXI VALID/READY handshakes
- Address decoding
- SRAM access
- UART transmission
- UART frame timing
- End-to-end CPU → AXI → UART operation

The project documents a successful simulation with a `TEST PASSED` result and a verified PING/echo operation.

---

# Waveform Debugging

GTKWave can be used to inspect the design at different abstraction levels.

### Layer 1 — SoC

```text
clk
reset
uart_tx_pin
```

### Layer 2 — CPU

```text
cpu_mem_valid
mem_addr
mem_instr
```

### Layer 3 — AXI Bridge

```text
b_state
```

### Layer 4 — Interconnect

```text
wr_sel
rd_sel
```

### Layer 5 — UART

```text
uart_axi.buf_valid
u_tx.state
```

This allows debugging from the processor level down to individual peripheral transactions.

---

# ASIC / Physical Design

After functional RTL verification, the design is taken through an open-source ASIC physical design flow.

### Technology

```text
PDK : SkyWater SKY130
Flow: OpenLane
```

### RTL-to-GDSII

```text
        Verilog RTL
             |
             v
         Synthesis
           Yosys
             |
             v
        Floorplanning
             |
             v
         Placement
         OpenROAD
             |
             v
           CTS
             |
             v
          Routing
             |
             v
        DRC / LVS
      Magic / Netgen
             |
             v
           GDSII
```

OpenLane integrates synthesis, floorplanning, placement, CTS, routing, and physical verification into an automated RTL-to-GDSII flow.

---

# Physical Design Toolchain

| Tool | Role |
|---|---|
| **Yosys** | RTL synthesis |
| **OpenROAD** | Floorplanning, placement, CTS and routing |
| **Magic** | DRC and layout inspection |
| **Netgen** | LVS |
| **OpenLane** | RTL-to-GDSII flow orchestration |
| **SkyWater SKY130 PDK** | Technology libraries and design rules |
| **KLayout** | GDSII viewing / stream-out |

The toolchain is based entirely on open-source EDA tools and the SkyWater 130 nm PDK.

---

# Physical Design Stages

## 1. Synthesis

Yosys converts the Verilog RTL into a technology-mapped gate-level netlist.

```text
RTL
 ↓
Yosys
 ↓
Gate-level netlist
```

## 2. Floorplanning

The die/core area, I/O locations, macros and power distribution structure are defined.

## 3. Placement

Standard cells are placed while considering:

- Timing
- Area
- Routing congestion
- Interconnect length

## 4. Clock Tree Synthesis

CTS builds a clock distribution network and attempts to control:

- Clock skew
- Clock latency
- Setup timing
- Hold timing

## 5. Routing

The physical connections between cells are created using the available metal layers.

## 6. Signoff

The final layout is checked using:

- DRC
- LVS
- Antenna checks
- Timing verification

## 7. GDSII

After successful physical implementation and signoff, the final layout is exported as GDSII.

---

# Make Commands

The project provides several commands for building and testing individual components and the complete SoC.

### Build Firmware

```bash
make fw
```

Compiles the firmware and generates `rom.hex`.

### Run Complete SoC Simulation

```bash
make soc
```

Builds and runs the complete Verilator simulation.

### View Waveforms

```bash
make wave
```

Converts the waveform and opens it for GTKWave analysis.

### Debug Simulation

```bash
make debug_soc
```

Runs the more verbose debug testbench.

### Synthesis

```bash
make synth
```

Runs Yosys synthesis.

### OpenLane

```bash
make openlane
```

Runs the ASIC physical design flow and generates the GDSII output.

### Individual Tests

```bash
make pico
make axi_sa
make uart
make soc_pico_uart_mem
make riscv_axi
make axi_uart
```

These commands allow individual components and subsystem configurations to be tested independently.

---

# Synthesis

The documented synthesis flow uses Yosys with the following RTL components:

```text
picorv32.v
top.v
axi_lite_interconnect.v
axi_decoder.v
rom.v
sram.v
uart_axi.v
uart_tx.v
uart_rx.v
```

The synthesis flow produces:

```text
top.json
synth.v
```

ASIC-oriented synthesis is performed with the `SYNTHESIS` define to avoid simulation-only constructs such as initialization blocks.

---

# Project Applications

The architecture can serve as a small embedded computing platform for:

- IoT edge devices
- Wireless sensor nodes
- Industrial embedded controllers
- Educational VLSI/ASIC research
- Custom accelerator prototyping
- Low-cost silicon research

Its modular AXI4-Lite architecture also makes it possible to add additional memory-mapped peripherals or accelerators without modifying the processor core.

---

# Project Highlights

The project demonstrates the following complete hardware-design capabilities:

```text
RISC-V
  ↓
Processor Integration
  ↓
AXI4-Lite Bus Design
  ↓
RTL Development
  ↓
Firmware Integration
  ↓
Functional Verification
  ↓
Synthesis
  ↓
Floorplanning
  ↓
Placement
  ↓
Clock Tree Synthesis
  ↓
Routing
  ↓
DRC / LVS
  ↓
GDSII
```

This makes Prico32RV more than a processor RTL project: it demonstrates integration of a processor, bus fabric, memory, peripheral, firmware, verification, synthesis, and physical implementation in a single ASIC-oriented workflow.

---

# Repository Structure

A suggested repository structure is:

```text
Prico32RV/
│
├── rtl/
│   ├── picorv32.v
│   ├── top.v
│   ├── axi_lite_interconnect.v
│   ├── axi_decoder.v
│   ├── rom.v
│   ├── sram.v
│   ├── uart_axi.v
│   ├── uart_tx.v
│   └── uart_rx.v
│
├── fw/
│   ├── main.c
│   ├── start.S
│   ├── link.ld
│   ├── firmware.bin
│   └── rom.hex
│
├── tb/
│   └── tb_top.v
│
├── openlane_design/
│   └── config.json
│
├── scripts/
│
├── Makefile
│
└── README.md
```

---

# Current Design Status

### RTL

- [x] RISC-V processor integration
- [x] AXI4-Lite interface
- [x] AXI address decoding
- [x] ROM
- [x] SRAM
- [x] UART peripheral
- [x] Firmware integration

### Verification

- [x] Verilator simulation
- [x] AXI handshake verification
- [x] CPU boot verification
- [x] UART verification
- [x] Waveform analysis

### Physical Design

- [x] Synthesis flow
- [x] Floorplanning
- [x] Placement
- [x] CTS
- [x] Routing
- [x] DRC/LVS flow
- [x] GDSII generation

---

# Important Note on PPA Results

Physical-design numbers should only be reported as final results after the corresponding OpenLane run has actually completed.

The project presentation contains both **illustrative/TBD targets** and later example/result values. Therefore, repository documentation should use the actual generated OpenLane reports for final:

- Area
- Utilization
- WNS
- TNS
- Clock frequency
- Power
- DRC violations
- LVS status
- Antenna violations

Do not present target/example values as measured silicon or final implementation results. The presentation itself explicitly marks some physical-design numbers as illustrative/TBD.

---

# Future Extensions

Potential extensions include:

- Larger SRAM capacity
- Additional AXI4-Lite peripherals
- SPI/I²C controllers
- GPIO
- Timer peripherals
- Interrupt-driven peripherals
- Hardware accelerators
- Custom RISC-V instructions
- Larger or pipelined CPU core
- Improved PPA optimization
- More extensive verification
- FPGA prototyping
- Further physical-design optimization

---

# Conclusion

Prico32RV demonstrates a complete open-source RISC-V SoC development flow, starting from processor and peripheral RTL and progressing through functional verification, synthesis, physical implementation, signoff, and GDSII generation.

The project combines **RISC-V, AXI4-Lite, Verilog RTL, firmware, Verilator, GTKWave, Yosys, OpenROAD, Magic, Netgen, OpenLane, and the SkyWater 130 nm PDK** into a single hardware-development workflow.

The result is a compact SoC subsystem suitable for embedded applications, VLSI education, ASIC research, and experimentation with open-source silicon implementation.

---

## Author

**Prico32RV — RISC-V SoC / RTL-to-GDSII Project**

Built as an end-to-end digital ASIC design project with emphasis on:

**RTL Design • Computer Architecture • SoC Integration • AXI4-Lite • Verification • Physical Design • RTL-to-GDSII**
