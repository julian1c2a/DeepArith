// Lean compiler output
// Module: DeepArithmetic.Semantics.Peano.Connection
// Imports: public import Init public meta import Init public import FOL.FOL public import DeepArithmetic.Syntax.Peano public import DeepArithmetic.Semantics.Peano.System
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "S"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(lean_object* v_S_3_, lean_object* v_f_4_, lean_object* v_args_5_){
_start:
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0));
v___x_7_ = lean_string_dec_eq(v_f_4_, v___x_6_);
if (v___x_7_ == 0)
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1));
v___x_9_ = lean_string_dec_eq(v_f_4_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v_base_10_; 
lean_dec(v_args_5_);
v_base_10_ = lean_ctor_get(v_S_3_, 0);
lean_inc(v_base_10_);
lean_dec_ref(v_S_3_);
return v_base_10_;
}
else
{
if (lean_obj_tag(v_args_5_) == 1)
{
lean_object* v_tail_11_; 
v_tail_11_ = lean_ctor_get(v_args_5_, 1);
if (lean_obj_tag(v_tail_11_) == 0)
{
lean_object* v_head_12_; lean_object* v___x_13_; 
v_head_12_ = lean_ctor_get(v_args_5_, 0);
lean_inc(v_head_12_);
lean_dec_ref_known(v_args_5_, 2);
v___x_13_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(v_S_3_, v_head_12_);
return v___x_13_;
}
else
{
lean_object* v_base_14_; 
lean_dec_ref_known(v_args_5_, 2);
v_base_14_ = lean_ctor_get(v_S_3_, 0);
lean_inc(v_base_14_);
lean_dec_ref(v_S_3_);
return v_base_14_;
}
}
else
{
lean_object* v_base_15_; 
lean_dec(v_args_5_);
v_base_15_ = lean_ctor_get(v_S_3_, 0);
lean_inc(v_base_15_);
lean_dec_ref(v_S_3_);
return v_base_15_;
}
}
}
else
{
lean_object* v_base_16_; 
lean_dec(v_args_5_);
v_base_16_ = lean_ctor_get(v_S_3_, 0);
lean_inc(v_base_16_);
lean_dec_ref(v_S_3_);
return v_base_16_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed(lean_object* v_S_17_, lean_object* v_f_18_, lean_object* v_args_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(v_S_17_, v_f_18_, v_args_19_);
lean_dec_ref(v_f_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel(lean_object* v_S_21_){
_start:
{
lean_object* v___f_22_; 
v___f_22_ = lean_alloc_closure((void*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed), 3, 1);
lean_closure_set(v___f_22_, 0, v_S_21_);
return v___f_22_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Peano(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Connection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_FOL_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Peano(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
