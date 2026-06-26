// Lean compiler output
// Module: DeepArithmetic
// Imports: public import Init public meta import Init public import DeepArithmetic.Foundation.Lists.PureAxioms public import DeepArithmetic.Foundation.Trees.PureAxioms public import DeepArithmetic.Semantics.Peano.Connection public import DeepArithmetic.Semantics.Lists.Connection public import DeepArithmetic.Semantics.Trees.Connection public import DeepArithmetic.Semantics.Lists.Computability public import DeepArithmetic.Semantics.Trees.Computability public import DeepArithmetic.Semantics.Peano.Computability public import DeepArithmetic.LogicAbstraction.SyntacticSugar public import DeepArithmetic.LogicAbstraction.SetTheory public import DeepArithmetic.LogicAbstraction.Arithmetic public import DeepArithmetic.LogicAbstraction.PeanoModel public import DeepArithmetic.LogicAbstraction.Tactics public import DeepArithmetic.LogicAbstraction.Proofs public import DeepArithmetic.LogicAbstraction.ArithmeticAddProofs public import DeepArithmetic.LogicAbstraction.ArithmeticMultProofs public import DeepArithmetic.LogicAbstraction.Lists public import DeepArithmetic.LogicAbstraction.Trees public import DeepArithmetic.LogicAbstraction.ListProofs public import DeepArithmetic.LogicAbstraction.TreeProofs
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
static const lean_string_object lp_DeepArithmetic_hello___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "world"};
static const lean_object* lp_DeepArithmetic_hello___closed__0 = (const lean_object*)&lp_DeepArithmetic_hello___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_hello = (const lean_object*)&lp_DeepArithmetic_hello___closed__0_value;
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Foundation_Lists_PureAxioms(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Foundation_Trees_PureAxioms(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoModel(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ArithmeticAddProofs(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ArithmeticMultProofs(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ListProofs(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_TreeProofs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Foundation_Lists_PureAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Foundation_Trees_PureAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Computability(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Computability(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Computability(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoModel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ArithmeticAddProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ArithmeticMultProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_ListProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_TreeProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
