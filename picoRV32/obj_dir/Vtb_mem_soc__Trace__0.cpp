// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_mem_soc__Syms.h"


void Vtb_mem_soc___024root__trace_chg_sub_0(Vtb_mem_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mem_soc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_mem_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem_soc___024root*>(voidSelf);
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_mem_soc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_mem_soc___024root__trace_chg_sub_0(Vtb_mem_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii),32);
        bufp->chgWData(oldp+1,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__rom_init__DOT__rom_path),1024);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+33,(vlSelf->tb_mem_soc__DOT__greeting_count),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_mem_soc__DOT__line_count),32);
        bufp->chgIData(oldp+35,(vlSelf->tb_mem_soc__DOT__rx_wr_ptr),32);
        bufp->chgCData(oldp+36,(vlSelf->tb_mem_soc__DOT__mon_byte),8);
        bufp->chgIData(oldp+37,(vlSelf->tb_mem_soc__DOT__bit_idx),32);
        bufp->chgWData(oldp+38,(vlSelf->tb_mem_soc__DOT__asm_line),256);
        bufp->chgIData(oldp+46,(vlSelf->tb_mem_soc__DOT__asm_len),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+47,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out));
        bufp->chgBit(oldp+48,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_ready));
        bufp->chgIData(oldp+49,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_rdata),32);
        bufp->chgBit(oldp+50,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_ready));
        bufp->chgIData(oldp+51,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_rdata),32);
        bufp->chgBit(oldp+52,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_ready));
        bufp->chgIData(oldp+53,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_rdata),32);
        bufp->chgCData(oldp+54,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_data),8);
        bufp->chgBit(oldp+55,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_valid));
        bufp->chgBit(oldp+56,((0U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__state))));
        bufp->chgCData(oldp+57,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_data_raw),8);
        bufp->chgBit(oldp+58,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_data_valid_pulse));
        bufp->chgCData(oldp+59,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_buf_data),8);
        bufp->chgBit(oldp+60,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_buf_valid));
        bufp->chgBit(oldp+61,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_rd_strobe));
        bufp->chgBit(oldp+62,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_state));
        bufp->chgCData(oldp+63,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_pending_data),8);
        bufp->chgCData(oldp+64,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_buf_data),8);
        bufp->chgBit(oldp+65,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_buf_valid));
        bufp->chgBit(oldp+66,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__rx_sync0));
        bufp->chgBit(oldp+67,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__rx_sync1));
        bufp->chgCData(oldp+68,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__state),2);
        bufp->chgSData(oldp+69,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__clk_cnt),9);
        bufp->chgCData(oldp+70,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__bit_cnt),3);
        bufp->chgCData(oldp+71,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__shift_reg),8);
        bufp->chgCData(oldp+72,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__state),2);
        bufp->chgCData(oldp+73,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__shift_reg),8);
        bufp->chgCData(oldp+74,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__bit_cnt),3);
        bufp->chgSData(oldp+75,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__clk_cnt),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+76,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid));
        bufp->chgBit(oldp+77,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_instr));
        bufp->chgIData(oldp+78,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata),32);
        bufp->chgCData(oldp+80,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb),4);
        bufp->chgBit(oldp+81,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_rom));
        bufp->chgBit(oldp+82,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_sram));
        bufp->chgBit(oldp+83,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart));
        bufp->chgBit(oldp+84,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trap));
        bufp->chgIData(oldp+85,((((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_prefetch) 
                                  | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst))
                                  ? (0xfffffffcU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_pc)
                                  : (0xfffffffcU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1))),32);
        bufp->chgIData(oldp+86,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wdata),32);
        bufp->chgCData(oldp+87,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb),4);
        bufp->chgBit(oldp+88,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_valid));
        bufp->chgIData(oldp+89,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_insn),32);
        bufp->chgIData(oldp+90,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1),32);
        bufp->chgIData(oldp+91,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2),32);
        bufp->chgIData(oldp+92,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__eoi),32);
        bufp->chgBit(oldp+93,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trace_valid));
        bufp->chgQData(oldp+94,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trace_data),36);
        bufp->chgQData(oldp+96,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__count_cycle),64);
        bufp->chgQData(oldp+98,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__count_instr),64);
        bufp->chgIData(oldp+100,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_pc),32);
        bufp->chgIData(oldp+101,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+102,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_out),32);
        bufp->chgCData(oldp+103,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_sh),5);
        bufp->chgIData(oldp+104,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+108,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_delay));
        bufp->chgBit(oldp+109,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_active));
        bufp->chgIData(oldp+110,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_mask),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_pending),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__timer),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[0]),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[1]),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[2]),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[3]),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[4]),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[5]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[6]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[7]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[8]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[9]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[10]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[11]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[12]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[13]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[14]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[15]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[16]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[17]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[18]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[19]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[20]),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[21]),32);
        bufp->chgIData(oldp+135,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[22]),32);
        bufp->chgIData(oldp+136,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[23]),32);
        bufp->chgIData(oldp+137,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[24]),32);
        bufp->chgIData(oldp+138,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[25]),32);
        bufp->chgIData(oldp+139,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[26]),32);
        bufp->chgIData(oldp+140,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[27]),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[28]),32);
        bufp->chgIData(oldp+142,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[29]),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[30]),32);
        bufp->chgIData(oldp+144,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[31]),32);
        bufp->chgCData(oldp+145,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state),2);
        bufp->chgCData(oldp+146,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+147,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+148,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+149,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst));
        bufp->chgBit(oldp+150,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rdata));
        bufp->chgBit(oldp+151,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_wdata));
        bufp->chgBit(oldp+152,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_secondword));
        bufp->chgBit(oldp+153,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+154,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__last_mem_valid));
        bufp->chgBit(oldp+155,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__prefetched_high_word));
        bufp->chgBit(oldp+156,(((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_prefetch) 
                                | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT____VdfgTmp_hb06275b1__0))));
        bufp->chgBit(oldp+157,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lui));
        bufp->chgBit(oldp+158,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_auipc));
        bufp->chgBit(oldp+159,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jal));
        bufp->chgBit(oldp+160,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jalr));
        bufp->chgBit(oldp+161,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_beq));
        bufp->chgBit(oldp+162,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bne));
        bufp->chgBit(oldp+163,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_blt));
        bufp->chgBit(oldp+164,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bge));
        bufp->chgBit(oldp+165,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bltu));
        bufp->chgBit(oldp+166,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bgeu));
        bufp->chgBit(oldp+167,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lb));
        bufp->chgBit(oldp+168,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lh));
        bufp->chgBit(oldp+169,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lw));
        bufp->chgBit(oldp+170,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lbu));
        bufp->chgBit(oldp+171,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lhu));
        bufp->chgBit(oldp+172,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sb));
        bufp->chgBit(oldp+173,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sh));
        bufp->chgBit(oldp+174,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sw));
        bufp->chgBit(oldp+175,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_addi));
        bufp->chgBit(oldp+176,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slti));
        bufp->chgBit(oldp+177,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltiu));
        bufp->chgBit(oldp+178,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xori));
        bufp->chgBit(oldp+179,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ori));
        bufp->chgBit(oldp+180,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_andi));
        bufp->chgBit(oldp+181,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slli));
        bufp->chgBit(oldp+182,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srli));
        bufp->chgBit(oldp+183,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srai));
        bufp->chgBit(oldp+184,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_add));
        bufp->chgBit(oldp+185,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub));
        bufp->chgBit(oldp+186,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sll));
        bufp->chgBit(oldp+187,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slt));
        bufp->chgBit(oldp+188,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltu));
        bufp->chgBit(oldp+189,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xor));
        bufp->chgBit(oldp+190,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srl));
        bufp->chgBit(oldp+191,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sra));
        bufp->chgBit(oldp+192,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_or));
        bufp->chgBit(oldp+193,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_and));
        bufp->chgBit(oldp+194,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycle));
        bufp->chgBit(oldp+195,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+196,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstr));
        bufp->chgBit(oldp+197,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+198,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+199,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_fence));
        bufp->chgBit(oldp+200,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_getq));
        bufp->chgBit(oldp+201,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_setq));
        bufp->chgBit(oldp+202,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__compressed_instr));
        bufp->chgBit(oldp+203,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_maskirq));
        bufp->chgBit(oldp+204,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_waitirq));
        bufp->chgBit(oldp+205,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_timer));
        bufp->chgBit(oldp+206,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_trap));
        bufp->chgCData(oldp+207,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rd),5);
        bufp->chgCData(oldp+208,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+209,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+210,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_imm),32);
        bufp->chgIData(oldp+211,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+212,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_trigger));
        bufp->chgBit(oldp+213,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+214,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+215,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+216,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+217,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+218,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+219,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+220,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+221,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+222,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+223,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+224,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+225,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+226,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+227,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+228,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+229,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_compare));
        bufp->chgBit(oldp+230,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+231,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+233,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+235,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+236,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+237,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+238,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+239,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+240,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+241,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+242,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+243,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+245,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+246,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+247,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+248,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+249,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+250,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_next));
        bufp->chgBit(oldp+251,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__launch_next_insn));
        bufp->chgBit(oldp+252,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+253,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+255,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+256,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+257,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+258,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+259,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+260,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpu_state),8);
        bufp->chgCData(oldp+261,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_state),2);
        bufp->chgWData(oldp+262,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+266,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+267,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+268,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+269,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_store));
        bufp->chgBit(oldp+270,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_stalu));
        bufp->chgBit(oldp+271,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch));
        bufp->chgBit(oldp+272,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_compr));
        bufp->chgBit(oldp+273,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_trace));
        bufp->chgBit(oldp+274,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lu));
        bufp->chgBit(oldp+275,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lh));
        bufp->chgBit(oldp+276,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lb));
        bufp->chgCData(oldp+277,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_rd),5);
        bufp->chgIData(oldp+278,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__current_pc),32);
        bufp->chgBit(oldp+279,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_timeout));
        bufp->chgIData(oldp+280,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+281,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__do_waitirq));
        bufp->chgIData(oldp+282,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out),32);
        bufp->chgIData(oldp+283,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_q),32);
        bufp->chgBit(oldp+284,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0));
        bufp->chgBit(oldp+285,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0_q));
        bufp->chgBit(oldp+286,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_wait));
        bufp->chgBit(oldp+287,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_wait_2));
        bufp->chgIData(oldp+288,(((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub)
                                   ? (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                                      - vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2)
                                   : (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                                      + vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+289,((vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                                  << (0x1fU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2))),32);
        bufp->chgIData(oldp+290,((IData)((0x1ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sra) 
                                                                               | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srai)) 
                                                                              & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                                                                                >> 0x1fU)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1))), 
                                                           (0x1fU 
                                                            & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2))))),32);
        bufp->chgBit(oldp+291,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_eq));
        bufp->chgBit(oldp+292,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_ltu));
        bufp->chgBit(oldp+293,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_lts));
        bufp->chgBit(oldp+294,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+295,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_write));
        bufp->chgIData(oldp+296,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+297,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+298,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs2),32);
        bufp->chgCData(oldp+299,((0x3fU & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr 
                                           >> 2U))),6);
        bufp->chgCData(oldp+300,((3U & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr 
                                        >> 2U))),2);
        bufp->chgBit(oldp+301,(((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart) 
                                & (0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb)))));
        bufp->chgBit(oldp+302,(((~ (IData)((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb)))) 
                                & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart))));
        bufp->chgCData(oldp+303,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_byte),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+304,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata),32);
        bufp->chgIData(oldp+305,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+306,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_xfer));
        bufp->chgIData(oldp+307,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle),32);
    }
    bufp->chgBit(oldp+308,(vlSelf->tb_mem_soc__DOT__clk));
    bufp->chgBit(oldp+309,(vlSelf->tb_mem_soc__DOT__reset));
    bufp->chgBit(oldp+310,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_ready));
    bufp->chgBit(oldp+311,((1U & (~ (IData)(vlSelf->tb_mem_soc__DOT__reset)))));
    bufp->chgBit(oldp+312,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_read));
    bufp->chgBit(oldp+313,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_write));
    bufp->chgBit(oldp+314,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word));
    bufp->chgBit(oldp+315,(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_done));
}

void Vtb_mem_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root__trace_cleanup\n"); );
    // Init
    Vtb_mem_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem_soc___024root*>(voidSelf);
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
