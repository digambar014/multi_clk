// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "verilated.h"

#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__0(Vmulti_clk_tb___024root* vlSelf);
VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__1(Vmulti_clk_tb___024root* vlSelf);
VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__2(Vmulti_clk_tb___024root* vlSelf);

void Vmulti_clk_tb___024root___eval_initial(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial\n"); );
    // Body
    Vmulti_clk_tb___024root___eval_initial__TOP__0(vlSelf);
    Vmulti_clk_tb___024root___eval_initial__TOP__1(vlSelf);
    Vmulti_clk_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__clk_fast__0 
        = vlSelf->multi_clk_tb__DOT__clk_fast;
    vlSelf->__Vtrigprevexpr___TOP__multi_clk_tb__DOT__rst__0 
        = vlSelf->multi_clk_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__1(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "multi_clk_tb.v", 
                                           11);
        vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_slow__v0 
            = (1U & (~ (IData)(vlSelf->multi_clk_tb__DOT__clk_slow)));
        vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_slow__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vmulti_clk_tb___024root___eval_initial__TOP__2(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "multi_clk_tb.v", 
                                           9);
        vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_fast__v0 
            = (1U & (~ (IData)(vlSelf->multi_clk_tb__DOT__clk_fast)));
        vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_fast__v0 = 1U;
    }
}

VL_INLINE_OPT void Vmulti_clk_tb___024root___act_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->multi_clk_tb__DOT__muxed_clk = ((IData)(vlSelf->multi_clk_tb__DOT__sel)
                                             ? (IData)(vlSelf->multi_clk_tb__DOT__clk_slow)
                                             : (IData)(vlSelf->multi_clk_tb__DOT__clk_fast));
}

void Vmulti_clk_tb___024root___eval_act(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmulti_clk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmulti_clk_tb___024root___nba_sequent__TOP__0(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__multi_clk_tb__DOT__u_div__DOT__counter;
    __Vdly__multi_clk_tb__DOT__u_div__DOT__counter = 0;
    CData/*0:0*/ __Vdly__multi_clk_tb__DOT__clk_div4;
    __Vdly__multi_clk_tb__DOT__clk_div4 = 0;
    // Body
    __Vdly__multi_clk_tb__DOT__clk_div4 = vlSelf->multi_clk_tb__DOT__clk_div4;
    __Vdly__multi_clk_tb__DOT__u_div__DOT__counter 
        = vlSelf->multi_clk_tb__DOT__u_div__DOT__counter;
    if (vlSelf->multi_clk_tb__DOT__rst) {
        __Vdly__multi_clk_tb__DOT__u_div__DOT__counter = 0U;
        __Vdly__multi_clk_tb__DOT__clk_div4 = 0U;
    } else {
        __Vdly__multi_clk_tb__DOT__u_div__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelf->multi_clk_tb__DOT__u_div__DOT__counter)));
        if ((3U == (IData)(vlSelf->multi_clk_tb__DOT__u_div__DOT__counter))) {
            __Vdly__multi_clk_tb__DOT__clk_div4 = (1U 
                                                   & (~ (IData)(vlSelf->multi_clk_tb__DOT__clk_div4)));
        }
    }
    vlSelf->multi_clk_tb__DOT__u_div__DOT__counter 
        = __Vdly__multi_clk_tb__DOT__u_div__DOT__counter;
    vlSelf->multi_clk_tb__DOT__clk_div4 = __Vdly__multi_clk_tb__DOT__clk_div4;
}

VL_INLINE_OPT void Vmulti_clk_tb___024root___nba_sequent__TOP__1(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_slow__v0) {
        vlSelf->multi_clk_tb__DOT__clk_slow = vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_slow__v0;
        vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_slow__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_fast__v0) {
        vlSelf->multi_clk_tb__DOT__clk_fast = vlSelf->__Vdlyvval__multi_clk_tb__DOT__clk_fast__v0;
        vlSelf->__Vdlyvset__multi_clk_tb__DOT__clk_fast__v0 = 0U;
    }
    vlSelf->multi_clk_tb__DOT__muxed_clk = ((IData)(vlSelf->multi_clk_tb__DOT__sel)
                                             ? (IData)(vlSelf->multi_clk_tb__DOT__clk_slow)
                                             : (IData)(vlSelf->multi_clk_tb__DOT__clk_fast));
}

void Vmulti_clk_tb___024root___eval_nba(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmulti_clk_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmulti_clk_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmulti_clk_tb___024root___eval_triggers__act(Vmulti_clk_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__act(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmulti_clk_tb___024root___timing_resume(Vmulti_clk_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_clk_tb___024root___dump_triggers__nba(Vmulti_clk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmulti_clk_tb___024root___eval(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmulti_clk_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmulti_clk_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("multi_clk_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmulti_clk_tb___024root___timing_resume(vlSelf);
                Vmulti_clk_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmulti_clk_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("multi_clk_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmulti_clk_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vmulti_clk_tb___024root___timing_resume(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vmulti_clk_tb___024root___eval_debug_assertions(Vmulti_clk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
