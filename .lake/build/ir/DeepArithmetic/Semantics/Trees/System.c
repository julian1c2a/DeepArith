// Lean compiler output
// Module: DeepArithmetic.Semantics.Trees.System
// Imports: public import Init public import DeepArithmetic.Semantics.FreeBinaryAlgebra
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
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___redArg(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_emptyTree(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_DeepArithmetic_DeepArithmetic_Semantics_Trees_TreeSystem_node___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
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
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeBinaryAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
