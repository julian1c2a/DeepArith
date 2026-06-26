// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.Trees
// Imports: public import Init public meta import Init public import FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL public import DeepArithmetic.LogicAbstraction.SetTheory public import DeepArithmetic.LogicAbstraction.SyntacticSugar
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
lean_object* lp_FOL_substFormula(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "t_leaf"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "t_node"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "is_tree"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__5_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf___closed__1_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__1_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__induction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__induction___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node(lean_object* v_v_7_, lean_object* v_l_8_, lean_object* v_r_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_10_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node___closed__0));
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v_r_9_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v_l_8_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_14_, 0, v_v_7_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_10_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(lean_object* v_t_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_18_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree___closed__0));
v___x_19_ = lean_box(0);
v___x_20_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_20_, 0, v_t_17_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
v___x_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_18_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf));
v___x_23_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf___closed__0);
return v___x_24_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0));
v___x_28_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2));
v___x_32_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3);
v___x_34_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__1);
v___x_35_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_38_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2));
v___x_39_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0));
v___x_40_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__5));
v___x_41_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__node(v___x_40_, v___x_39_, v___x_38_);
return v___x_41_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6);
v___x_43_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_is__tree(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__7);
v___x_45_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4);
v___x_46_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__8);
v___x_48_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__9);
v___x_50_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__10);
v___x_52_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__11);
return v___x_53_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6);
v___x_60_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__1));
v___x_61_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__2);
v___x_63_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__3);
v___x_65_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__4);
v___x_67_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__5);
v___x_69_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__0));
v___x_70_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__6);
v___x_72_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3);
v___x_73_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__7);
v___x_75_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases___closed__8);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__induction(lean_object* v_P_77_, lean_object* v_varIdx_78_){
_start:
{
lean_object* v___x_79_; lean_object* v_p__leaf_80_; lean_object* v___x_81_; lean_object* v_p__l_82_; lean_object* v___x_83_; lean_object* v_p__r_84_; lean_object* v___x_85_; lean_object* v_p__node_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v_step_94_; lean_object* v___x_95_; lean_object* v_conclusion_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_79_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_t__leaf));
lean_inc_n(v_P_77_, 4);
v_p__leaf_80_ = lp_FOL_substFormula(v_varIdx_78_, v___x_79_, v_P_77_);
v___x_81_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__0));
v_p__l_82_ = lp_FOL_substFormula(v_varIdx_78_, v___x_81_, v_P_77_);
v___x_83_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__2));
v_p__r_84_ = lp_FOL_substFormula(v_varIdx_78_, v___x_83_, v_P_77_);
v___x_85_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__6);
v_p__node_86_ = lp_FOL_substFormula(v_varIdx_78_, v___x_85_, v_P_77_);
v___x_87_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__3);
v___x_88_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node___closed__4);
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v_p__l_82_);
lean_ctor_set(v___x_89_, 1, v_p__r_84_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_p__node_86_);
v___x_92_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
v___x_93_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
v_step_94_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_step_94_, 0, v___x_93_);
v___x_95_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_87_);
lean_ctor_set(v___x_95_, 1, v_P_77_);
v_conclusion_96_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_conclusion_96_, 0, v___x_95_);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v_p__leaf_80_);
lean_ctor_set(v___x_97_, 1, v_step_94_);
v___x_98_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v_conclusion_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__induction___boxed(lean_object* v_P_99_, lean_object* v_varIdx_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__induction(v_P_99_, v_varIdx_100_);
lean_dec(v_varIdx_100_);
return v_res_101_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_box(0);
v___x_103_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases;
v___x_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__0);
v___x_106_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node;
v___x_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
return v___x_107_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__1);
v___x_109_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf;
v___x_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList___closed__2);
return v___x_111_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees(uint8_t builtin) {
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
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__leaf);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__node);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_ax__tree__cases);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Trees_TreeAxiomsList);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
