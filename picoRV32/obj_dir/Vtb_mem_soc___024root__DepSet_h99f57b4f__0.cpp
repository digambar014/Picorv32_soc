// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_soc.h for the primary calling header

#include "verilated.h"

#include "Vtb_mem_soc__Syms.h"
#include "Vtb_mem_soc__Syms.h"
#include "Vtb_mem_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__act(Vtb_mem_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mem_soc___024root___eval_triggers__act(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_hc564b89d__0;
    __Vtrigcurrexpr_hc564b89d__0 = 0;
    __Vtrigcurrexpr_hc564b89d__0 = (0xaU == vlSelf->tb_mem_soc__DOT__greeting_count);
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_mem_soc__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_mem_soc__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_mem_soc__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->tb_mem_soc__DOT__reset)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__reset__0)));
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_hc564b89d__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_hc564b89d__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__clk__0 
        = vlSelf->tb_mem_soc__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__reset__0 
        = vlSelf->tb_mem_soc__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out__0 
        = vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_uart__DOT__tx_serial_out;
    vlSelf->__Vtrigprevexpr_hc564b89d__0 = __Vtrigcurrexpr_hc564b89d__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
