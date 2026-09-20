// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "verilated.h"

#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__0(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "multi_clk_tb.v", 
                                       30);
    vlSelf->multi_clk_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x3cULL, nullptr, 
                                       "multi_clk_tb.v", 
                                       32);
    vlSelf->multi_clk_tb__DOT__sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x3cULL, nullptr, 
                                       "multi_clk_tb.v", 
                                       33);
    vlSelf->multi_clk_tb__DOT__sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "multi_clk_tb.v", 
                                       35);
    VL_FINISH_MT("multi_clk_tb.v", 35, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___eval_triggers__act(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->multi_clk_tb__DOT__clk_fast) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0))) 
                                     | ((IData)(vlSelf->multi_clk_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 
        = vlSelf->multi_clk_tb__DOT__clk_fast;
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 
        = vlSelf->multi_clk_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_clk_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
