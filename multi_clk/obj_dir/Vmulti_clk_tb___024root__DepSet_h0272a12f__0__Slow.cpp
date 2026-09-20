// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "verilated.h"

#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static__TOP(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_static\n"); );
    // Body
    Vmulti_clk_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_static__TOP(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->multi_clk_tb__DOT__clk_fast = 0U;
    vlSelf->multi_clk_tb__DOT__clk_slow = 0U;
    vlSelf->multi_clk_tb__DOT__rst = 1U;
    vlSelf->multi_clk_tb__DOT__sel = 0U;
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_final(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_triggers__stl(Vmulti_clk_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__stl(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_stl(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_settle(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmulti_clk_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmulti_clk_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("multi_clk_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmulti_clk_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__stl(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___act_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf);

VL_ATTR_COLD void Vmulti_clk_tb___024root___eval_stl(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmulti_clk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge multi_clk_tb.clk_fast or posedge multi_clk_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__nba(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge multi_clk_tb.clk_fast or posedge multi_clk_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmulti_clk_tb___024root___ctor_var_reset(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->multi_clk_tb__DOT__clk_fast = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__clk_slow = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__muxed_clk = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__clk_div4 = VL_RAND_RESET_I(1);
    vlSelf->multi_clk_tb__DOT__u_div__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_slow__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_slow__v0 = 0;
    vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_fast__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_fast__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
}
