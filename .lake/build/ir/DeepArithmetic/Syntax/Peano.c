// Lean compiler output
// Module: DeepArithmetic.Syntax.Peano
// Imports: public import Init public meta import Init public import FOL.FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL
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
lean_object* lp_FOL_neg(lean_object*);
lean_object* lp_FOL_substFormula(lean_object*, lean_object*, lean_object*);
lean_object* lp_FOL_liftFormula(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "S"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__2_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_inductionSchema(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(lean_object* v_t_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_8_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ___closed__0));
v___x_9_ = lean_box(0);
v___x_10_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_10_, 0, v_t_7_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_8_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x));
v___x_19_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
v___x_21_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero));
v___x_22_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
lean_ctor_set(v___x_22_, 1, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1);
v___x_24_ = lp_FOL_neg(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2);
v___x_26_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3);
return v___x_27_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y));
v___x_29_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
v___x_31_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0);
v___x_32_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__2));
v___x_37_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1);
v___x_38_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3);
v___x_40_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4);
v___x_42_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_inductionSchema(lean_object* v_00_u03c6_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v_baseCase_47_; lean_object* v_phi__lifted_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v_phi__x_51_; lean_object* v___x_52_; lean_object* v_phi__sx_53_; lean_object* v___x_54_; lean_object* v_indStep_55_; lean_object* v_conclusion_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero));
lean_inc(v_00_u03c6_44_);
v_baseCase_47_ = lp_FOL_substFormula(v___x_45_, v___x_46_, v_00_u03c6_44_);
v_phi__lifted_48_ = lp_FOL_liftFormula(v___x_45_, v_00_u03c6_44_);
v___x_49_ = lean_unsigned_to_nat(1u);
v___x_50_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x));
lean_inc(v_phi__lifted_48_);
v_phi__x_51_ = lp_FOL_substFormula(v___x_49_, v___x_50_, v_phi__lifted_48_);
v___x_52_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
v_phi__sx_53_ = lp_FOL_substFormula(v___x_49_, v___x_52_, v_phi__lifted_48_);
lean_inc(v_phi__x_51_);
v___x_54_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_54_, 0, v_phi__x_51_);
lean_ctor_set(v___x_54_, 1, v_phi__sx_53_);
v_indStep_55_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_indStep_55_, 0, v___x_54_);
v_conclusion_56_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_conclusion_56_, 0, v_phi__x_51_);
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v_baseCase_47_);
lean_ctor_set(v___x_57_, 1, v_indStep_55_);
v___x_58_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v_conclusion_56_);
return v___x_58_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_box(0);
return v___x_59_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Peano(uint8_t builtin) {
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
res = initialize_FOL_TheoryFramework_Theory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_TheoryFramework_Instances_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ);
lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj);
lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
