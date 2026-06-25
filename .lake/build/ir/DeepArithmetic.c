// Lean compiler output
// Module: DeepArithmetic
// Imports: public import Init public import DeepArithmetic.Syntax.Peano public import DeepArithmetic.Syntax.Lists public import DeepArithmetic.Syntax.Trees public import DeepArithmetic.Semantics.FreeInductiveAlgebra public import DeepArithmetic.Semantics.FreeBinaryAlgebra public import DeepArithmetic.Semantics.Peano.System public import DeepArithmetic.Semantics.Lists.System public import DeepArithmetic.Semantics.Trees.System public import DeepArithmetic.Foundation.Peano.PureAxioms public import DeepArithmetic.Foundation.Lists.PureAxioms public import DeepArithmetic.Foundation.Trees.PureAxioms public import DeepArithmetic.Semantics.Peano.Connection public import DeepArithmetic.Semantics.Lists.Connection public import DeepArithmetic.Semantics.Trees.Connection public import DeepArithmetic.Semantics.Lists.Computability public import DeepArithmetic.Semantics.Trees.Computability public import DeepArithmetic.Semantics.Peano.Computability public import DeepArithmetic.LogicAbstraction.PeanoModel
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Peano(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Lists(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeInductiveAlgebra(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeBinaryAlgebra(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Foundation_Peano_PureAxioms(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Foundation_Lists_PureAxioms(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Foundation_Trees_PureAxioms(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Connection(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Computability(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoModel(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Peano(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Lists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeInductiveAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_FreeBinaryAlgebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Foundation_Peano_PureAxioms(builtin);
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
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoModel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
