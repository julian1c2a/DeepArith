// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.Proofs
// Imports: public import Init public meta import Init public import FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL public import DeepArithmetic.LogicAbstraction.SetTheory public import DeepArithmetic.LogicAbstraction.Arithmetic public import DeepArithmetic.LogicAbstraction.Tactics
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
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero;
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_FullTheoryAxioms;
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero___closed__0);
return v___x_4_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_6_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_7_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_6_, v___x_5_);
return v___x_7_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_9_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__0);
v___x_10_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero___closed__1);
return v___x_11_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_FullTheoryAxioms(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_box(0);
return v___x_12_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs(uint8_t builtin) {
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
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_gamma__add__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_P__add__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_FullTheoryAxioms = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_FullTheoryAxioms();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Proofs_FullTheoryAxioms);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
