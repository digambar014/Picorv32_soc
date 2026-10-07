// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_soc.h for the primary calling header

#include "verilated.h"

#include "Vtb_mem_soc__Syms.h"
#include "Vtb_mem_soc__Syms.h"
#include "Vtb_mem_soc___024root.h"

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_initial__TOP(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f736f63U;
    __Vtemp_1[2U] = 0x5f6d656dU;
    __Vtemp_1[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii = 0U;
    while (VL_GTS_III(32, 0x800U, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii)) {
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__mem[(0x7ffU 
                                                              & vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii)] = 0x13U;
        vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii 
            = ((IData)(1U) + vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__ii);
    }
    __Vtemp_3[0U] = 0x3d202573U;
    __Vtemp_3[1U] = 0x68657820U;
    __Vtemp_3[2U] = 0x726f6dU;
    if (VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(3, __Vtemp_3), 
                             vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__rom_init__DOT__rom_path)) {
        VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(32, vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__rom_init__DOT__rom_path)
                     ,  &(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__mem)
                     , 0, ~0ULL);
        VL_WRITEF("[MEM_ROM] loaded from parameter : rom.hex\n");
    } else {
        VL_READMEM_N(true, 32, 2048, 0, std::string{"rom.hex"}
                     ,  &(vlSelf->tb_mem_soc__DOT__u_dut__DOT__u_rom__DOT__mem)
                     , 0, ~0ULL);
        VL_WRITEF("[MEM_ROM] WARNING: ROM contains NOPs only\n");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_soc___024root___dump_triggers__stl(Vtb_mem_soc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mem_soc___024root___eval_triggers__stl(Vtb_mem_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_soc___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_soc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
