// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.PeanoModel
// Imports: public import Init public meta import Init public import TheoryFramework.Instances.FOL public import TheoryFramework.Theory public import DeepArithmetic.Semantics.Peano.System public import DeepArithmetic.Semantics.Peano.Computability
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mult"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__2_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms;
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(lean_object* v_t_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_14_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
v___x_15_ = lean_box(0);
v___x_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_16_, 0, v_t_13_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_14_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(lean_object* v_t1_19_, lean_object* v_t2_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_21_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
v___x_22_ = lean_box(0);
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v_t2_20_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
v___x_24_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_24_, 0, v_t1_19_);
lean_ctor_set(v___x_24_, 1, v___x_23_);
v___x_25_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_21_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(lean_object* v_t1_27_, lean_object* v_t2_28_){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_29_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
v___x_30_ = lean_box(0);
v___x_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_31_, 0, v_t2_28_);
lean_ctor_set(v___x_31_, 1, v___x_30_);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v_t1_27_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_29_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_35_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
v___x_37_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0);
v___x_38_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1);
v___x_40_ = lp_FOL_neg(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2);
v___x_42_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3);
return v___x_43_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
v___x_45_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
v___x_47_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0);
v___x_48_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__2));
v___x_53_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1);
v___x_54_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3);
v___x_56_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4);
v___x_58_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5);
return v___x_59_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
v___x_61_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_62_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_64_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0);
v___x_65_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1);
v___x_67_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2);
return v___x_68_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
v___x_70_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_71_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
v___x_73_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_74_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1);
v___x_76_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2);
v___x_78_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0);
v___x_79_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_80_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3);
v___x_81_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4);
v___x_83_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5);
return v___x_84_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
v___x_86_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_87_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
v___x_89_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0);
v___x_90_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1);
v___x_92_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2);
return v___x_93_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
v___x_95_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_96_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
v___x_98_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_99_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1);
v___x_101_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
v___x_102_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2);
v___x_104_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0);
v___x_105_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
return v___x_105_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3);
v___x_107_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4);
v___x_109_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5);
return v___x_110_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_box(0);
v___x_112_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ;
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0);
v___x_115_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero;
v___x_116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1);
v___x_118_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ;
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2);
v___x_121_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero;
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3);
v___x_124_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ;
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4);
v___x_127_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero;
v___x_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5);
return v___x_129_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_box(0);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter___redArg(lean_object* v_ts_131_, lean_object* v_h__1_132_, lean_object* v_h__2_133_){
_start:
{
if (lean_obj_tag(v_ts_131_) == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
lean_dec(v_h__2_133_);
v___x_134_ = lean_box(0);
v___x_135_ = lean_apply_1(v_h__1_132_, v___x_134_);
return v___x_135_;
}
else
{
lean_object* v_head_136_; lean_object* v_tail_137_; lean_object* v___x_138_; 
lean_dec(v_h__1_132_);
v_head_136_ = lean_ctor_get(v_ts_131_, 0);
lean_inc(v_head_136_);
v_tail_137_ = lean_ctor_get(v_ts_131_, 1);
lean_inc(v_tail_137_);
lean_dec_ref_known(v_ts_131_, 2);
v___x_138_ = lean_apply_2(v_h__2_133_, v_head_136_, v_tail_137_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter(lean_object* v_motive_139_, lean_object* v_ts_140_, lean_object* v_h__1_141_, lean_object* v_h__2_142_){
_start:
{
if (lean_obj_tag(v_ts_140_) == 0)
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_h__2_142_);
v___x_143_ = lean_box(0);
v___x_144_ = lean_apply_1(v_h__1_141_, v___x_143_);
return v___x_144_;
}
else
{
lean_object* v_head_145_; lean_object* v_tail_146_; lean_object* v___x_147_; 
lean_dec(v_h__1_141_);
v_head_145_ = lean_ctor_get(v_ts_140_, 0);
lean_inc(v_head_145_);
v_tail_146_ = lean_ctor_get(v_ts_140_, 1);
lean_inc(v_tail_146_);
lean_dec_ref_known(v_ts_140_, 2);
v___x_147_ = lean_apply_2(v_h__2_142_, v_head_145_, v_tail_146_);
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___redArg(lean_object* v_f_148_, lean_object* v_ts_149_, lean_object* v_h__1_150_, lean_object* v_h__2_151_, lean_object* v_h__3_152_, lean_object* v_h__4_153_, lean_object* v_h__5_154_){
_start:
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0));
v___x_156_ = lean_string_dec_eq(v_f_148_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; uint8_t v___x_158_; 
lean_dec(v_h__1_150_);
v___x_157_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
v___x_158_ = lean_string_dec_eq(v_f_148_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
lean_dec(v_h__2_151_);
v___x_159_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
v___x_160_ = lean_string_dec_eq(v_f_148_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
lean_dec(v_h__3_152_);
v___x_161_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
v___x_162_ = lean_string_dec_eq(v_f_148_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
lean_dec(v_h__4_153_);
v___x_163_ = lean_apply_6(v_h__5_154_, v_f_148_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_163_;
}
else
{
lean_dec_ref(v_f_148_);
if (lean_obj_tag(v_ts_149_) == 1)
{
lean_object* v_tail_164_; 
v_tail_164_ = lean_ctor_get(v_ts_149_, 1);
if (lean_obj_tag(v_tail_164_) == 1)
{
lean_object* v_tail_165_; 
v_tail_165_ = lean_ctor_get(v_tail_164_, 1);
if (lean_obj_tag(v_tail_165_) == 0)
{
lean_object* v_head_166_; lean_object* v_head_167_; lean_object* v___x_168_; 
lean_inc_ref(v_tail_164_);
lean_dec(v_h__5_154_);
v_head_166_ = lean_ctor_get(v_ts_149_, 0);
lean_inc(v_head_166_);
lean_dec_ref_known(v_ts_149_, 2);
v_head_167_ = lean_ctor_get(v_tail_164_, 0);
lean_inc(v_head_167_);
lean_dec_ref_known(v_tail_164_, 2);
v___x_168_ = lean_apply_2(v_h__4_153_, v_head_166_, v_head_167_);
return v___x_168_;
}
else
{
lean_object* v___x_169_; 
lean_dec(v_h__4_153_);
v___x_169_ = lean_apply_6(v_h__5_154_, v___x_161_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_169_;
}
}
else
{
lean_object* v___x_170_; 
lean_dec(v_h__4_153_);
v___x_170_ = lean_apply_6(v_h__5_154_, v___x_161_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_170_;
}
}
else
{
lean_object* v___x_171_; 
lean_dec(v_h__4_153_);
v___x_171_ = lean_apply_6(v_h__5_154_, v___x_161_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_171_;
}
}
}
else
{
lean_dec(v_h__4_153_);
lean_dec_ref(v_f_148_);
if (lean_obj_tag(v_ts_149_) == 1)
{
lean_object* v_tail_172_; 
v_tail_172_ = lean_ctor_get(v_ts_149_, 1);
if (lean_obj_tag(v_tail_172_) == 1)
{
lean_object* v_tail_173_; 
v_tail_173_ = lean_ctor_get(v_tail_172_, 1);
if (lean_obj_tag(v_tail_173_) == 0)
{
lean_object* v_head_174_; lean_object* v_head_175_; lean_object* v___x_176_; 
lean_inc_ref(v_tail_172_);
lean_dec(v_h__5_154_);
v_head_174_ = lean_ctor_get(v_ts_149_, 0);
lean_inc(v_head_174_);
lean_dec_ref_known(v_ts_149_, 2);
v_head_175_ = lean_ctor_get(v_tail_172_, 0);
lean_inc(v_head_175_);
lean_dec_ref_known(v_tail_172_, 2);
v___x_176_ = lean_apply_2(v_h__3_152_, v_head_174_, v_head_175_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; 
lean_dec(v_h__3_152_);
v___x_177_ = lean_apply_6(v_h__5_154_, v___x_159_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_177_;
}
}
else
{
lean_object* v___x_178_; 
lean_dec(v_h__3_152_);
v___x_178_ = lean_apply_6(v_h__5_154_, v___x_159_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_178_;
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v_h__3_152_);
v___x_179_ = lean_apply_6(v_h__5_154_, v___x_159_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_179_;
}
}
}
else
{
lean_dec(v_h__4_153_);
lean_dec(v_h__3_152_);
lean_dec_ref(v_f_148_);
if (lean_obj_tag(v_ts_149_) == 1)
{
lean_object* v_tail_180_; 
v_tail_180_ = lean_ctor_get(v_ts_149_, 1);
if (lean_obj_tag(v_tail_180_) == 0)
{
lean_object* v_head_181_; lean_object* v___x_182_; 
lean_dec(v_h__5_154_);
v_head_181_ = lean_ctor_get(v_ts_149_, 0);
lean_inc(v_head_181_);
lean_dec_ref_known(v_ts_149_, 2);
v___x_182_ = lean_apply_1(v_h__2_151_, v_head_181_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; 
lean_dec(v_h__2_151_);
v___x_183_ = lean_apply_6(v_h__5_154_, v___x_157_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_183_;
}
}
else
{
lean_object* v___x_184_; 
lean_dec(v_h__2_151_);
v___x_184_ = lean_apply_6(v_h__5_154_, v___x_157_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_184_;
}
}
}
else
{
lean_dec(v_h__4_153_);
lean_dec(v_h__3_152_);
lean_dec(v_h__2_151_);
lean_dec_ref(v_f_148_);
if (lean_obj_tag(v_ts_149_) == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_h__5_154_);
v___x_185_ = lean_box(0);
v___x_186_ = lean_apply_1(v_h__1_150_, v___x_185_);
return v___x_186_;
}
else
{
lean_object* v___x_187_; 
lean_dec(v_h__1_150_);
v___x_187_ = lean_apply_6(v_h__5_154_, v___x_155_, v_ts_149_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_187_;
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(lean_object* v_P_188_, lean_object* v_motive_189_, lean_object* v_f_190_, lean_object* v_ts_191_, lean_object* v_h__1_192_, lean_object* v_h__2_193_, lean_object* v_h__3_194_, lean_object* v_h__4_195_, lean_object* v_h__5_196_){
_start:
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0));
v___x_198_ = lean_string_dec_eq(v_f_190_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; uint8_t v___x_200_; 
lean_dec(v_h__1_192_);
v___x_199_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
v___x_200_ = lean_string_dec_eq(v_f_190_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; uint8_t v___x_202_; 
lean_dec(v_h__2_193_);
v___x_201_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
v___x_202_ = lean_string_dec_eq(v_f_190_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; uint8_t v___x_204_; 
lean_dec(v_h__3_194_);
v___x_203_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
v___x_204_ = lean_string_dec_eq(v_f_190_, v___x_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec(v_h__4_195_);
v___x_205_ = lean_apply_6(v_h__5_196_, v_f_190_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_205_;
}
else
{
lean_dec_ref(v_f_190_);
if (lean_obj_tag(v_ts_191_) == 1)
{
lean_object* v_tail_206_; 
v_tail_206_ = lean_ctor_get(v_ts_191_, 1);
if (lean_obj_tag(v_tail_206_) == 1)
{
lean_object* v_tail_207_; 
v_tail_207_ = lean_ctor_get(v_tail_206_, 1);
if (lean_obj_tag(v_tail_207_) == 0)
{
lean_object* v_head_208_; lean_object* v_head_209_; lean_object* v___x_210_; 
lean_inc_ref(v_tail_206_);
lean_dec(v_h__5_196_);
v_head_208_ = lean_ctor_get(v_ts_191_, 0);
lean_inc(v_head_208_);
lean_dec_ref_known(v_ts_191_, 2);
v_head_209_ = lean_ctor_get(v_tail_206_, 0);
lean_inc(v_head_209_);
lean_dec_ref_known(v_tail_206_, 2);
v___x_210_ = lean_apply_2(v_h__4_195_, v_head_208_, v_head_209_);
return v___x_210_;
}
else
{
lean_object* v___x_211_; 
lean_dec(v_h__4_195_);
v___x_211_ = lean_apply_6(v_h__5_196_, v___x_203_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_211_;
}
}
else
{
lean_object* v___x_212_; 
lean_dec(v_h__4_195_);
v___x_212_ = lean_apply_6(v_h__5_196_, v___x_203_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_212_;
}
}
else
{
lean_object* v___x_213_; 
lean_dec(v_h__4_195_);
v___x_213_ = lean_apply_6(v_h__5_196_, v___x_203_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_213_;
}
}
}
else
{
lean_dec(v_h__4_195_);
lean_dec_ref(v_f_190_);
if (lean_obj_tag(v_ts_191_) == 1)
{
lean_object* v_tail_214_; 
v_tail_214_ = lean_ctor_get(v_ts_191_, 1);
if (lean_obj_tag(v_tail_214_) == 1)
{
lean_object* v_tail_215_; 
v_tail_215_ = lean_ctor_get(v_tail_214_, 1);
if (lean_obj_tag(v_tail_215_) == 0)
{
lean_object* v_head_216_; lean_object* v_head_217_; lean_object* v___x_218_; 
lean_inc_ref(v_tail_214_);
lean_dec(v_h__5_196_);
v_head_216_ = lean_ctor_get(v_ts_191_, 0);
lean_inc(v_head_216_);
lean_dec_ref_known(v_ts_191_, 2);
v_head_217_ = lean_ctor_get(v_tail_214_, 0);
lean_inc(v_head_217_);
lean_dec_ref_known(v_tail_214_, 2);
v___x_218_ = lean_apply_2(v_h__3_194_, v_head_216_, v_head_217_);
return v___x_218_;
}
else
{
lean_object* v___x_219_; 
lean_dec(v_h__3_194_);
v___x_219_ = lean_apply_6(v_h__5_196_, v___x_201_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_219_;
}
}
else
{
lean_object* v___x_220_; 
lean_dec(v_h__3_194_);
v___x_220_ = lean_apply_6(v_h__5_196_, v___x_201_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_220_;
}
}
else
{
lean_object* v___x_221_; 
lean_dec(v_h__3_194_);
v___x_221_ = lean_apply_6(v_h__5_196_, v___x_201_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_221_;
}
}
}
else
{
lean_dec(v_h__4_195_);
lean_dec(v_h__3_194_);
lean_dec_ref(v_f_190_);
if (lean_obj_tag(v_ts_191_) == 1)
{
lean_object* v_tail_222_; 
v_tail_222_ = lean_ctor_get(v_ts_191_, 1);
if (lean_obj_tag(v_tail_222_) == 0)
{
lean_object* v_head_223_; lean_object* v___x_224_; 
lean_dec(v_h__5_196_);
v_head_223_ = lean_ctor_get(v_ts_191_, 0);
lean_inc(v_head_223_);
lean_dec_ref_known(v_ts_191_, 2);
v___x_224_ = lean_apply_1(v_h__2_193_, v_head_223_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; 
lean_dec(v_h__2_193_);
v___x_225_ = lean_apply_6(v_h__5_196_, v___x_199_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_225_;
}
}
else
{
lean_object* v___x_226_; 
lean_dec(v_h__2_193_);
v___x_226_ = lean_apply_6(v_h__5_196_, v___x_199_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_226_;
}
}
}
else
{
lean_dec(v_h__4_195_);
lean_dec(v_h__3_194_);
lean_dec(v_h__2_193_);
lean_dec_ref(v_f_190_);
if (lean_obj_tag(v_ts_191_) == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v_h__5_196_);
v___x_227_ = lean_box(0);
v___x_228_ = lean_apply_1(v_h__1_192_, v___x_227_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; 
lean_dec(v_h__1_192_);
v___x_229_ = lean_apply_6(v_h__5_196_, v___x_197_, v_ts_191_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_229_;
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___boxed(lean_object* v_P_230_, lean_object* v_motive_231_, lean_object* v_f_232_, lean_object* v_ts_233_, lean_object* v_h__1_234_, lean_object* v_h__2_235_, lean_object* v_h__3_236_, lean_object* v_h__4_237_, lean_object* v_h__5_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(v_P_230_, v_motive_231_, v_f_232_, v_ts_233_, v_h__1_234_, v_h__2_235_, v_h__3_236_, v_h__4_237_, v_h__5_238_);
lean_dec_ref(v_P_230_);
return v_res_239_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Computability(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoModel(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_TheoryFramework_Instances_FOL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FOL_TheoryFramework_Theory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Peano_Computability(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
