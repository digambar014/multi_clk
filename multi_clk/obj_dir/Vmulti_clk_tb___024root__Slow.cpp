// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_clk_tb.h for the primary calling header

#include "verilated.h"

#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb__Syms.h"
#include "Vmulti_clk_tb___024root.h"

void Vmulti_clk_tb___024root___ctor_var_reset(Vmulti_clk_tb___024root* vlSelf);

Vmulti_clk_tb___024root::Vmulti_clk_tb___024root(Vmulti_clk_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmulti_clk_tb___024root___ctor_var_reset(this);
}

void Vmulti_clk_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmulti_clk_tb___024root::~Vmulti_clk_tb___024root() {
}
