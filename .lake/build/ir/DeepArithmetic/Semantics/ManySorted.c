// Lean compiler output
// Module: DeepArithmetic.Semantics.ManySorted
// Imports: public import Init
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
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_ctor_set_tag(x_1, 1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
lean_object* x_5; 
lean_dec_ref(x_1);
x_5 = lean_box(0);
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract1___redArg(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
lean_dec_ref(x_1);
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_DeepArithmetic_DeepArithmetic_Semantics_ManySorted_extract2___redArg(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
