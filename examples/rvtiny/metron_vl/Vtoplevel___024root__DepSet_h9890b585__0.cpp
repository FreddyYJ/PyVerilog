// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtoplevel.h for the primary calling header

#include "verilated.h"

#include "Vtoplevel___024root.h"

VL_INLINE_OPT void Vtoplevel___024root___sequent__TOP__0(Vtoplevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoplevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoplevel___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst;
    CData/*6:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op;
    CData/*4:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd;
    CData/*2:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3;
    CData/*4:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1;
    CData/*4:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2;
    CData/*6:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f7;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__alu_result;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__addr;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__data;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask;
    SData/*14:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__phys_addr;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b;
    CData/*0:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__take_branch;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk7__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk8__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk9__DOT__imm;
    IData/*31:0*/ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk10__DOT__imm;
    IData/*31:0*/ __Vdly__toplevel__DOT__pc;
    // Body
    __Vdly__toplevel__DOT__pc = vlSelf->toplevel__DOT__pc;
    if (vlSelf->reset) {
        vlSelf->o_pc = 0U;
        vlSelf->o_inst = 0U;
        vlSelf->o_bus_read_enable = 0U;
        vlSelf->o_bus_read_data = 0U;
        vlSelf->o_bus_byte_enable = 0U;
        vlSelf->toplevel__DOT__regs[0U] = 0U;
        __Vdly__toplevel__DOT__pc = 0U;
        vlSelf->o_bus_address = 0U;
        vlSelf->o_bus_write_data = 0U;
        vlSelf->o_bus_write_enable = 0U;
    } else {
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
            = vlSelf->toplevel__DOT__text_mem[(0x3fffU 
                                               & (vlSelf->toplevel__DOT__pc 
                                                  >> 2U))];
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op 
            = (0x7fU & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst);
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd 
            = (0x1fU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                        >> 7U));
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3 
            = (7U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                     >> 0xcU));
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1 
            = (0x1fU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                        >> 0xfU));
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2 
            = (0x1fU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                        >> 0x14U));
        __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f7 
            = (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
               >> 0x19U);
        vlSelf->o_bus_address = 0U;
        vlSelf->o_bus_write_enable = 0U;
        vlSelf->o_bus_write_data = 0U;
        if (((0x33U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op)) 
             | (0x13U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op)))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                = vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1];
            __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                         + vlSelf->toplevel__DOT__pc);
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b 
                = ((0x13U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))
                    ? (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                    >> 0x14U))) : vlSelf->toplevel__DOT__regs
                   [__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2]);
            if (((((((((0U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3)) 
                       | (1U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                      | (2U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                     | (3U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                    | (4U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                   | (5U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                  | (6U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) 
                 | (7U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3)))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__alu_result 
                    = ((0U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                        ? (((0x33U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op)) 
                            & ((IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f7) 
                               >> 5U)) ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                          - __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)
                            : (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                               + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b))
                        : ((1U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                            ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                               << (0x1fU & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b))
                            : ((2U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                ? VL_LTS_III(32, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)
                                : ((3U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                    ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                       < __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)
                                    : ((4U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                        ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                           ^ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)
                                        : ((5U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                            ? ((0x20U 
                                                & (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f7))
                                                ? VL_SHIFTRS_III(32,32,5, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a, 
                                                                 (0x1fU 
                                                                  & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b))
                                                : (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                                   >> 
                                                   (0x1fU 
                                                    & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)))
                                            : ((6U 
                                                == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                                ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                                   | __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b)
                                                : (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_a 
                                                   & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__op_b))))))));
            }
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk2__DOT__alu_result;
            }
        } else if ((3U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__imm 
                = (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x1fU))) << 0xbU) 
                   | (0x7ffU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x14U)));
            __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                         + vlSelf->toplevel__DOT__pc);
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__addr 
                = (vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1] 
                   + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__imm);
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data 
                = ((0x1fU >= (0x18U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__addr 
                                       << 3U))) ? (
                                                   vlSelf->toplevel__DOT__data_mem
                                                   [
                                                   (0x7fffU 
                                                    & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__addr 
                                                       >> 2U))] 
                                                   >> 
                                                   (0x18U 
                                                    & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__addr 
                                                       << 3U)))
                    : 0U);
            if ((0U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data 
                    = VL_EXTENDS_II(32,8, (0xffU & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data));
            } else if ((1U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data 
                    = VL_EXTENDS_II(32,16, (0xffffU 
                                            & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data));
            } else if ((4U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data 
                    = (0xffU & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data);
            } else if ((5U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data 
                    = (0xffffU & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data);
            }
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk3__DOT__data;
            }
        } else if ((0x23U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__imm 
                = (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x1fU))) << 0xbU) 
                   | ((0x7e0U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                 >> 0x14U)) | (0x1fU 
                                               & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                                  >> 7U))));
            __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                         + vlSelf->toplevel__DOT__pc);
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                = (vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1] 
                   + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__imm);
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__data 
                = ((0x1fU >= (0x18U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                       << 3U))) ? (
                                                   vlSelf->toplevel__DOT__regs
                                                   [__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2] 
                                                   << 
                                                   (0x18U 
                                                    & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                                       << 3U)))
                    : 0U);
            vlSelf->o_bus_write_enable = 1U;
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask = 0U;
            if ((0U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask 
                    = ((0x1fU >= (0x18U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                           << 3U)))
                        ? ((IData)(0xffU) << (0x18U 
                                              & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                                 << 3U)))
                        : 0U);
            }
            if ((1U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask 
                    = ((0x1fU >= (0x18U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                           << 3U)))
                        ? ((IData)(0xffffU) << (0x18U 
                                                & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                                                   << 3U)))
                        : 0U);
            }
            if ((2U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask = 0xffffffffU;
            }
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__phys_addr 
                = (0x7fffU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr 
                              >> 2U));
            vlSelf->toplevel__DOT__data_mem[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__phys_addr] 
                = ((vlSelf->toplevel__DOT__data_mem
                    [__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__phys_addr] 
                    & (~ __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask)) 
                   | (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__data 
                      & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__mask));
            vlSelf->o_bus_address = __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk4__DOT__addr;
            vlSelf->o_bus_write_data = vlSelf->toplevel__DOT__regs
                [__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2];
        } else if ((0x63U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a 
                = vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1];
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b 
                = vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r2];
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__take_branch 
                = ((0U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                    ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a 
                       == __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)
                    : ((1U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                        ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a 
                           != __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)
                        : ((4U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                            ? VL_LTS_III(32, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)
                            : ((5U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                ? VL_GTES_III(32, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a, __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)
                                : ((6U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3))
                                    ? (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a 
                                       < __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)
                                    : ((7U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__f3)) 
                                       & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_a 
                                          >= __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__op_b)))))));
            if (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__take_branch) {
                __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__imm 
                    = (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                     << 4U)) | ((0x7e0U 
                                                 & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                                      >> 7U)))));
                __Vdly__toplevel__DOT__pc = (vlSelf->toplevel__DOT__pc 
                                             + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__imm);
            } else {
                __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                             + vlSelf->toplevel__DOT__pc);
            }
        } else if ((0x6fU == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk7__DOT__imm 
                = (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst) 
                      | ((0x800U & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                    >> 9U)) | ((0x7e0U 
                                                & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                                     >> 0x14U))))));
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = ((IData)(4U) + vlSelf->toplevel__DOT__pc);
            }
            __Vdly__toplevel__DOT__pc = (vlSelf->toplevel__DOT__pc 
                                         + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk7__DOT__imm);
        } else if ((0x67U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk8__DOT__imm 
                = (((- (IData)((__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x1fU))) << 0xbU) 
                   | (0x7ffU & (__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst 
                                >> 0x14U)));
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = ((IData)(4U) + vlSelf->toplevel__DOT__pc);
            }
            __Vdly__toplevel__DOT__pc = (vlSelf->toplevel__DOT__regs
                                         [__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__r1] 
                                         + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk8__DOT__imm);
        } else if ((0x37U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk9__DOT__imm 
                = (0xfffff000U & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst);
            __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                         + vlSelf->toplevel__DOT__pc);
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk9__DOT__imm;
            }
        } else if ((0x17U == (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__op))) {
            __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk10__DOT__imm 
                = (0xfffff000U & __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__inst);
            if ((0U != (IData)(__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd))) {
                vlSelf->toplevel__DOT__regs[__Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__rd] 
                    = (vlSelf->toplevel__DOT__pc + __Vtask_toplevel__DOT__tick__0__unnamedblk1__DOT__unnamedblk10__DOT__imm);
            }
            __Vdly__toplevel__DOT__pc = ((IData)(4U) 
                                         + vlSelf->toplevel__DOT__pc);
        }
    }
    vlSelf->toplevel__DOT__pc = __Vdly__toplevel__DOT__pc;
}

void Vtoplevel___024root___eval(Vtoplevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoplevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoplevel___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtoplevel___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void Vtoplevel___024root___eval_debug_assertions(Vtoplevel___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtoplevel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoplevel___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
