// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.AutomataProofs
// Imports: public import Init public meta import Init public import FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL public import DeepArithmetic.LogicAbstraction.SetTheory public import DeepArithmetic.LogicAbstraction.SyntacticSugar public import DeepArithmetic.LogicAbstraction.Arithmetic public import DeepArithmetic.LogicAbstraction.Lists public import DeepArithmetic.LogicAbstraction.Tactics public import DeepArithmetic.LogicAbstraction.Proofs public import DeepArithmetic.LogicAbstraction.Automata
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
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists_ListAxiomsList;
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList;
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Automata_AutomataAxiomsList;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext;
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists_ListAxiomsList;
v___x_2_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList;
v___x_3_ = l_List_appendTR___redArg(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Automata_AutomataAxiomsList;
v___x_5_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__0);
v___x_6_ = l_List_appendTR___redArg(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext___closed__1);
return v___x_7_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Automata(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_TheoryFramework_Theory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_TheoryFramework_Instances_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Lists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Automata(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_AutomataProofs_AutomataAxiomContext);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
