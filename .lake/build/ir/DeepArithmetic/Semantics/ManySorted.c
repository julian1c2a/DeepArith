// Lean compiler output
// Module: DeepArithmetic.Semantics.ManySorted
// Imports: public import Init public meta import Init
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
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v_val_2_; lean_object* v___x_4_; uint8_t v_isShared_5_; uint8_t v_isSharedCheck_9_; 
v_val_2_ = lean_ctor_get(v_x_1_, 0);
v_isSharedCheck_9_ = !lean_is_exclusive(v_x_1_);
if (v_isSharedCheck_9_ == 0)
{
v___x_4_ = v_x_1_;
v_isShared_5_ = v_isSharedCheck_9_;
goto v_resetjp_3_;
}
else
{
lean_inc(v_val_2_);
lean_dec(v_x_1_);
v___x_4_ = lean_box(0);
v_isShared_5_ = v_isSharedCheck_9_;
goto v_resetjp_3_;
}
v_resetjp_3_:
{
lean_object* v___x_7_; 
if (v_isShared_5_ == 0)
{
lean_ctor_set_tag(v___x_4_, 1);
v___x_7_ = v___x_4_;
goto v_reusejp_6_;
}
else
{
lean_object* v_reuseFailAlloc_8_; 
v_reuseFailAlloc_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_8_, 0, v_val_2_);
v___x_7_ = v_reuseFailAlloc_8_;
goto v_reusejp_6_;
}
v_reusejp_6_:
{
return v___x_7_;
}
}
}
else
{
lean_object* v___x_10_; 
lean_dec_ref_known(v_x_1_, 1);
v___x_10_ = lean_box(0);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1(lean_object* v_A_11_, lean_object* v_B_12_, lean_object* v_x_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1___redArg(v_x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2___redArg(lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
lean_object* v___x_16_; 
lean_dec_ref_known(v_x_15_, 1);
v___x_16_ = lean_box(0);
return v___x_16_;
}
else
{
lean_object* v_val_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_val_17_ = lean_ctor_get(v_x_15_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v_x_15_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_val_17_);
lean_dec(v_x_15_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_val_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2(lean_object* v_A_25_, lean_object* v_B_26_, lean_object* v_x_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2___redArg(v_x_27_);
return v___x_28_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
