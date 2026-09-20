// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmulti_clk_tb__Syms.h"


VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_init_sub__TOP__0(Vmulti_clk_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("multi_clk_tb ");
    tracep->declBit(c+1,"clk_fast", false,-1);
    tracep->declBit(c+2,"clk_slow", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBit(c+5,"muxed_clk", false,-1);
    tracep->declBit(c+6,"clk_div4", false,-1);
    tracep->pushNamePrefix("u_div ");
    tracep->declBit(c+1,"clk_in", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBit(c+6,"clk_out", false,-1);
    tracep->declBus(c+7,"counter", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mux ");
    tracep->declBit(c+1,"clk0", false,-1);
    tracep->declBit(c+2,"clk1", false,-1);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBit(c+5,"clk_out", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_init_top(Vmulti_clk_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root__trace_init_top\n"); );
    // Body
    Vmulti_clk_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmulti_clk_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmulti_clk_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_register(Vmulti_clk_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmulti_clk_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmulti_clk_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmulti_clk_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_full_sub_0(Vmulti_clk_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmulti_clk_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_clk_tb___024root*>(voidSelf);
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmulti_clk_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmulti_clk_tb___024root__trace_full_sub_0(Vmulti_clk_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmulti_clk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_clk_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->multi_clk_tb__DOT__clk_fast));
    bufp->fullBit(oldp+2,(vlSelf->multi_clk_tb__DOT__clk_slow));
    bufp->fullBit(oldp+3,(vlSelf->multi_clk_tb__DOT__rst));
    bufp->fullBit(oldp+4,(vlSelf->multi_clk_tb__DOT__sel));
    bufp->fullBit(oldp+5,(vlSelf->multi_clk_tb__DOT__muxed_clk));
    bufp->fullBit(oldp+6,(vlSelf->multi_clk_tb__DOT__clk_div4));
    bufp->fullCData(oldp+7,(vlSelf->multi_clk_tb__DOT__u_div__DOT__counter),2);
}
