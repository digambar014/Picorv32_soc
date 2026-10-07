// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_soc.h for the primary calling header

#include "verilated.h"

#include "Vtb_mem_soc__Syms.h"
#include "Vtb_mem_soc___024root.h"

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_static__TOP(Vtb_mem_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_static(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_static\n"); );
    // Body
    Vtb_mem_soc___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_static__TOP(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_mem_soc__DOT__clk = 0U;
    vlSelf->tb_mem_soc__DOT__reset = 1U;
    vlSelf->tb_mem_soc__DOT__greeting_count = 0U;
    vlSelf->tb_mem_soc__DOT__line_count = 0U;
    vlSelf->tb_mem_soc__DOT__rx_wr_ptr = 0U;
}

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_final(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_triggers__stl(Vtb_mem_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__stl(Vtb_mem_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___eval_stl(Vtb_mem_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_settle(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_mem_soc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_mem_soc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_mem_soc.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_mem_soc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__stl(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vtb_mem_soc__ConstPool__TABLE_h5fec6d0a_0;

VL_ATTR_COLD void Vtb_mem_soc___024root___stl_sequent__TOP__0(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_ready 
        = (0U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__state));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs1))
            ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs
           [vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs1]
            : 0U);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs2))
            ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs
           [vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs2]
            : 0U);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_byte 
        = (0xffU & ((1U & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb))
                     ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata
                     : ((2U & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb))
                         ? (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata 
                            >> 8U) : ((4U & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb))
                                       ? (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata 
                                          >> 0x10U)
                                       : (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata 
                                          >> 0x18U)))));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpu_state)) 
           & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_trigger));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_write = 0U;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_write 
        = ((~ (IData)(vlSelf->tb_mem_soc__DOT__reset)) 
           & ((~ (IData)((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state)))) 
              & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpu_state;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state[0U] 
        = Vtb_mem_soc__ConstPool__TABLE_h5fec6d0a_0
        [__Vtableidx1][0U];
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state[1U] 
        = Vtb_mem_soc__ConstPool__TABLE_h5fec6d0a_0
        [__Vtableidx1][1U];
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state[2U] 
        = Vtb_mem_soc__ConstPool__TABLE_h5fec6d0a_0
        [__Vtableidx1][2U];
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state[3U] 
        = Vtb_mem_soc__ConstPool__TABLE_h5fec6d0a_0
        [__Vtableidx1][3U];
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_pc 
        = (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch) 
            & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_store))
            ? (0xfffffffeU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_out)
            : vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_next_pc);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstrh))));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_imm 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_imm;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_opcode 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_opcode;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs1 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs1;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs2 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs2;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rd 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rd;
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__prefetched_high_word)))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word = 0U;
    }
    if ((((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch) 
          | (0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_state))) 
         | (IData)(vlSelf->tb_mem_soc__DOT__reset))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_read 
        = ((~ (IData)(vlSelf->tb_mem_soc__DOT__reset)) 
           & ((~ (IData)((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state)))) 
              & ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst) 
                 | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_prefetch) 
                    | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rdata)))));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpu_state))) {
        if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch) {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_write = 1U;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_wrdata 
                = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_pc 
                   + ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_store) 
                    & (~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch)))) {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_write = 1U;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_stalu)
                    ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_q
                    : vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_out);
        }
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT____VdfgTmp_hb06275b1__0 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst) 
           | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rdata) 
              | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_wdata)));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_ready 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_ready) 
           | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_ready) 
              | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_ready)));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_rom = 
        ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid) 
         & (0U == (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr 
                   >> 0x10U)));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_sram = 
        ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid) 
         & (1U == (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr 
                   >> 0x10U)));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart = 
        ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid) 
         & (1U == (vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr 
                   >> 0x1cU)));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_eq 
        = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
           == vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_lts 
        = VL_LTS_III(32, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_ltu 
        = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
           < vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lui) 
                    | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_auipc) 
                       | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jal) 
                          | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jalr) 
                             | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_beq) 
                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bne) 
                                   | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_blt) 
                                      | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bge) 
                                         | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bltu) 
                                            | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bgeu) 
                                               | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lb) 
                                                  | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lh) 
                                                     | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lw) 
                                                        | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lbu) 
                                                           | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lhu) 
                                                              | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sb) 
                                                                 | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sh) 
                                                                    | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sw) 
                                                                       | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_addi) 
                                                                          | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slti) 
                                                                             | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xori) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ori) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_andi) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slli) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srli) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srai) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_add) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sll) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slt) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xor) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srl) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sra) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_or) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_and) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycle) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_fence) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_getq) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_setq) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__compressed_instr) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_timer) 
                                                                                | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_waitirq))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0ULL;
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lui) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_auipc) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jal) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jalr) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_beq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bne) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_blt) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bge) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bltu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bgeu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lb) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lh) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lw) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lbu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lhu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sb) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sh) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sw) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_addi) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slti) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltiu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xori) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ori) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_andi) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slli) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srli) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srai) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_add) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x737562ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sll) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slt) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xor) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srl) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sra) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_or) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_and) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycle) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycleh) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstr) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstrh) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_fence) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_getq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_setq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__compressed_instr) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_maskirq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_waitirq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_timer) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_xfer 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_ready) 
           & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_rom)
            ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_rdata
            : ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_sram)
                ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_rdata
                : ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart)
                    ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_rdata
                    : 0U)));
    if ((0U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_wordsize))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wdata 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2;
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb = 0xfU;
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata;
    } else if ((1U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_wordsize))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wdata 
            = ((vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2));
        if ((2U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)) {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)) {
                vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word 
                    = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb = 3U;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word 
                = (0xffffU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata);
        }
    } else if ((2U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_wordsize))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wdata 
            = ((vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2))));
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)));
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word 
            = ((2U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)
                ? ((1U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)
                    ? (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1)
                    ? (0xffU & (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata 
                                >> 8U)) : (0xffU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata)));
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 = 0U;
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_beq) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_eq;
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bne) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_eq)));
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bge) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_lts)));
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bgeu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_ltu)));
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_slti_blt_slt) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_lts;
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sltiu_bltu_sltu) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_ltu;
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out = 0U;
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out 
            = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub)
                ? (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                   - vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2)
                : (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
                   + vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2));
    } else if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_compare) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out 
            = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0;
    } else if (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xori) 
                | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xor))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out 
            = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
               ^ vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    } else if (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ori) 
                | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_or))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out 
            = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
               | vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    } else if (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_andi) 
                | (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_and))) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out 
            = (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 
               & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2);
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_instr 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_ascii_instr;
    if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_next) {
        if (vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_pseudo_trigger_q) {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_imm 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_imm;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_opcode 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_opcode;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs1 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs1;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs2 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs2;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rd 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rd;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_instr 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_ascii_instr;
        } else {
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_imm 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_imm;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_insn_opcode))
                    ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_insn_opcode
                    : (0xffffU & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_insn_opcode));
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs1 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs1;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs2 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs2;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rd 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rd;
            vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_instr 
                = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr;
        }
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_done 
        = ((~ (IData)(vlSelf->tb_mem_soc__DOT__reset)) 
           & (((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_xfer) 
               & ((0U != (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state)) 
                  & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT____VdfgTmp_hb06275b1__0))) 
              | ((3U == (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state)) 
                 & (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst))));
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_xfer)
            ? vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata
            : vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_q);
}

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_stl(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mem_soc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__act(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_mem_soc.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_mem_soc.clk or posedge tb_mem_soc.reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_mem_soc.reset)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_mem_soc.u_dut.u_uart.tx_serial_out)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] (32'sha == tb_mem_soc.greeting_count))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__nba(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_mem_soc.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_mem_soc.clk or posedge tb_mem_soc.reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_mem_soc.reset)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_mem_soc.u_dut.u_uart.tx_serial_out)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] (32'sha == tb_mem_soc.greeting_count))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mem_soc___024root___ctor_var_reset(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_mem_soc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__greeting_count = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__line_count = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__rx_wr_ptr = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__mon_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__bit_idx = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->tb_mem_soc__DOT__asm_line);
    vlSelf->tb_mem_soc__DOT__asm_len = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__cpu_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_rom = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_sram = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sel_uart = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__rom_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__dbg_ascii_state);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_cpu__DOT____VdfgTmp_hb06275b1__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__rom_init__DOT__rom_path);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_sram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_data_raw = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_data_valid_pulse = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_byte = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_buf_data = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_buf_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__rx_rd_strobe = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_state = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__wr_pending_data = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_buf_data = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_buf_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_tx__DOT__clk_cnt = VL_RAND_RESET_I(9);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__rx_sync0 = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__rx_sync1 = VL_RAND_RESET_I(1);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__clk_cnt = VL_RAND_RESET_I(9);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__u_rx__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hc564b89d__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
