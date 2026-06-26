// Lean compiler output
// Module: DeepArithmetic.Semantics.Peano.System
// Imports: public import Init public meta import Init public import DeepArithmetic.Semantics.FreeInductiveAlgebra
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
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_zero(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_zero___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_zero(lean_object* v_S_1_){
_start:
{
lean_object* v_base_2_; 
v_base_2_ = lean_ctor_get(v_S_1_, 0);
lean_inc(v_base_2_);
return v_base_2_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_zero___boxed(lean_object* v_S_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_zero(v_S_3_);
lean_dec_ref(v_S_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(lean_object* v_S_5_, lean_object* v_n_6_){
_start:
{
lean_object* v_step_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_step_7_ = lean_ctor_get(v_S_5_, 1);
lean_inc(v_step_7_);
lean_dec_ref(v_S_5_);
v___x_8_ = lean_box(0);
v___x_9_ = lean_apply_2(v_step_7_, v___x_8_, v_n_6_);
return v___x_9_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeInductiveAlgebra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeInductiveAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
