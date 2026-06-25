// Lean compiler output
// Module: DeepArithmetic.Semantics.Peano.Connection
// Imports: public import Init public import FOL.FOL public import DeepArithmetic.Syntax.Peano public import DeepArithmetic.Semantics.Peano.System
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
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "S"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1_value;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__0));
x_5 = lean_string_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___closed__1));
x_7 = lean_string_dec_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec_ref(x_1);
return x_8;
}
else
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec_ref(x_3);
x_11 = lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_PeanoSystem_succ(x_1, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec_ref(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec_ref(x_1);
return x_12;
}
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec_ref(x_1);
return x_13;
}
}
}
else
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec_ref(x_1);
return x_14;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0(x_1, x_2, x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(lp_DeepArithmetic_DeepArithmetic_Semantics_Peano_peanoModel___lam__0___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
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
