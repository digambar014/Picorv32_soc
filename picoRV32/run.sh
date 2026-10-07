#!/bin/bash
set -e

TOP_MODULE="tb_mem_soc"
TB_FILE="tb/tb_mem_soc.v"

DESIGN_FILES="\
rtl/picorv32.v \
rtl/mem_rom.v \
rtl/mem_sram.v \
rtl/mem_uart.v \
rtl/uart_rx.v \
rtl/uart_tx.v \
rtl/top.v"

echo "----------------------------------------"
echo " Building Firmware..."
echo "----------------------------------------"
make -C fw

echo "----------------------------------------"
echo " Running Verilator Build..."
echo "----------------------------------------"
verilator --binary --timing --trace -Wall -Wno-fatal \
    --top-module "${TOP_MODULE}" \
    ${DESIGN_FILES} "${TB_FILE}" \
    -Mdir obj_dir

echo "----------------------------------------"
echo " Executing Simulation..."
echo "----------------------------------------"
./obj_dir/V${TOP_MODULE}

echo "----------------------------------------"
echo " Checking Waveforms..."
echo "----------------------------------------"
if [ -f tb_picorv32.vcd ]; then
    echo "Launching GTKWave with tb_picorv32.vcd..."
    gtkwave tb_picorv32.vcd &
else
    echo "No VCD file found - check the \$dumpfile name in ${TB_FILE}."
fi
