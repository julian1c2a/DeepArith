// Lean compiler output
// Module: DeepArithmetic.Semantics.Trees.System
// Imports: public import Init public meta import Init public import DeepArithmetic.Semantics.FreeBinaryAlgebra
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
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg(lean_object* v_S_1_){
_start:
{
lean_object* v_base_2_; 
v_base_2_ = lean_ctor_get(v_S_1_, 0);
lean_inc(v_base_2_);
return v_base_2_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg___boxed(lean_object* v_S_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg(v_S_3_);
lean_dec_ref(v_S_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree(lean_object* v_A_5_, lean_object* v_S_6_){
_start:
{
lean_object* v_base_7_; 
v_base_7_ = lean_ctor_get(v_S_6_, 0);
lean_inc(v_base_7_);
return v_base_7_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___boxed(lean_object* v_A_8_, lean_object* v_S_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree(v_A_8_, v_S_9_);
lean_dec_ref(v_S_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node___redArg(lean_object* v_S_11_, lean_object* v_h_12_, lean_object* v_l_13_, lean_object* v_r_14_){
_start:
{
lean_object* v_node_15_; lean_object* v___x_16_; 
v_node_15_ = lean_ctor_get(v_S_11_, 1);
lean_inc(v_node_15_);
lean_dec_ref(v_S_11_);
v___x_16_ = lean_apply_3(v_node_15_, v_h_12_, v_l_13_, v_r_14_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node(lean_object* v_A_17_, lean_object* v_S_18_, lean_object* v_h_19_, lean_object* v_l_20_, lean_object* v_r_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node___redArg(v_S_18_, v_h_19_, v_l_20_, v_r_21_);
return v___x_22_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeBinaryAlgebra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeBinaryAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
