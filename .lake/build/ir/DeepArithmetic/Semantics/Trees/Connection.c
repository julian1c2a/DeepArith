// Lean compiler output
// Module: DeepArithmetic.Semantics.Trees.Connection
// Imports: public import Init public import FOL.FOL public import DeepArithmetic.Syntax.Trees public import DeepArithmetic.Semantics.Trees.System public import DeepArithmetic.Semantics.ManySorted
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc_ref(x_8);
lean_inc_ref(x_6);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
lean_dec(x_3);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec_ref(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec_ref(x_6);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec_ref(x_8);
x_13 = lean_apply_3(x_2, x_10, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_apply_2(x_3, x_1, lean_box(0));
return x_14;
}
}
else
{
lean_object* x_15; 
lean_dec(x_2);
x_15 = lean_apply_2(x_3, x_1, lean_box(0));
return x_15;
}
}
else
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_apply_2(x_3, x_1, lean_box(0));
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_2);
x_17 = lean_apply_2(x_3, x_1, lean_box(0));
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_2);
x_18 = lean_apply_2(x_3, x_1, lean_box(0));
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_2);
x_19 = lean_apply_2(x_3, x_1, lean_box(0));
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_apply_2(x_3, x_1, lean_box(0));
return x_20;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 0);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_4, 1);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 1);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_inc_ref(x_11);
lean_inc_ref(x_9);
lean_inc_ref(x_7);
lean_dec_ref(x_4);
lean_dec(x_6);
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
lean_dec_ref(x_7);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec_ref(x_9);
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec_ref(x_11);
x_16 = lean_apply_3(x_5, x_13, x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_5);
x_17 = lean_apply_2(x_6, x_4, lean_box(0));
return x_17;
}
}
else
{
lean_object* x_18; 
lean_dec(x_5);
x_18 = lean_apply_2(x_6, x_4, lean_box(0));
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_5);
x_19 = lean_apply_2(x_6, x_4, lean_box(0));
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_5);
x_20 = lean_apply_2(x_6, x_4, lean_box(0));
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_5);
x_21 = lean_apply_2(x_6, x_4, lean_box(0));
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_5);
x_22 = lean_apply_2(x_6, x_4, lean_box(0));
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
x_23 = lean_apply_2(x_6, x_4, lean_box(0));
return x_23;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_2(x_3, x_1, lean_box(0));
return x_7;
}
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_2(x_3, x_1, lean_box(0));
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec_ref(x_4);
x_9 = lean_apply_1(x_5, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_5);
x_10 = lean_apply_2(x_6, x_4, lean_box(0));
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_6, x_4, lean_box(0));
return x_11;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec_ref(x_4);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec_ref(x_4);
x_10 = lean_apply_1(x_6, x_9);
return x_10;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Connection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_FOL_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
