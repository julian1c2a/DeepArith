// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.PeanoModel
// Imports: public import Init public import TheoryFramework.Instances.FOL public import TheoryFramework.Theory public import DeepArithmetic.Semantics.Peano.System public import DeepArithmetic.Semantics.Peano.Computability
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
lean_object* lp_FOL_neg(lean_object*);
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__1);
x_2 = lp_FOL_neg(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__2);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__3);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__2));
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__1);
x_3 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__3);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__4);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__5);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__1);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero___closed__2);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__1);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__2);
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__3);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__4);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ___closed__5);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero));
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__1);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero___closed__2);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ___closed__0);
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_y));
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__1);
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_x));
x_3 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__2);
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__3);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__4);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ___closed__5);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__succ;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__0);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__mult__zero;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__1);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__succ;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__2);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__add__zero;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__3);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__inj__succ;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__4);
x_2 = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_ax__succ__neq__zero;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxiomsList___closed__5);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_PeanoAxioms(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__FOL_Metamath_Semantics_evalTerms_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec_ref(x_2);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0));
x_9 = lean_string_dec_eq(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_3);
x_10 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
x_11 = lean_string_dec_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_4);
x_12 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
x_13 = lean_string_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
lean_dec(x_5);
x_14 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
x_15 = lean_string_dec_eq(x_1, x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_6);
x_16 = lean_apply_6(x_7, x_1, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_16;
}
else
{
lean_dec_ref(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_17) == 1)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 1);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_inc_ref(x_17);
lean_dec(x_7);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec_ref(x_2);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec_ref(x_17);
x_21 = lean_apply_2(x_6, x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_6);
x_22 = lean_apply_6(x_7, x_14, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_22;
}
}
else
{
lean_object* x_23; 
lean_dec(x_6);
x_23 = lean_apply_6(x_7, x_14, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_6);
x_24 = lean_apply_6(x_7, x_14, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_24;
}
}
}
else
{
lean_dec(x_6);
lean_dec_ref(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_25, 1);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_inc_ref(x_25);
lean_dec(x_7);
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec_ref(x_2);
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec_ref(x_25);
x_29 = lean_apply_2(x_5, x_27, x_28);
return x_29;
}
else
{
lean_object* x_30; 
lean_dec(x_5);
x_30 = lean_apply_6(x_7, x_12, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_5);
x_31 = lean_apply_6(x_7, x_12, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_5);
x_32 = lean_apply_6(x_7, x_12, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_32;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec_ref(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_7);
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
lean_dec_ref(x_2);
x_35 = lean_apply_1(x_4, x_34);
return x_35;
}
else
{
lean_object* x_36; 
lean_dec(x_4);
x_36 = lean_apply_6(x_7, x_10, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_36;
}
}
else
{
lean_object* x_37; 
lean_dec(x_4);
x_37 = lean_apply_6(x_7, x_10, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_37;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec_ref(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_7);
x_38 = lean_box(0);
x_39 = lean_apply_1(x_3, x_38);
return x_39;
}
else
{
lean_object* x_40; 
lean_dec(x_3);
x_40 = lean_apply_6(x_7, x_8, x_2, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_40;
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__zero___closed__0));
x_11 = lean_string_dec_eq(x_3, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_5);
x_12 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__succ___closed__0));
x_13 = lean_string_dec_eq(x_3, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
lean_dec(x_6);
x_14 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__add___closed__0));
x_15 = lean_string_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_dec(x_7);
x_16 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_t__mult___closed__0));
x_17 = lean_string_dec_eq(x_3, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_8);
x_18 = lean_apply_6(x_9, x_3, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_18;
}
else
{
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_4, 1);
if (lean_obj_tag(x_19) == 1)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 1);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc_ref(x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
lean_dec_ref(x_4);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec_ref(x_19);
x_23 = lean_apply_2(x_8, x_21, x_22);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_8);
x_24 = lean_apply_6(x_9, x_16, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_8);
x_25 = lean_apply_6(x_9, x_16, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_25;
}
}
else
{
lean_object* x_26; 
lean_dec(x_8);
x_26 = lean_apply_6(x_9, x_16, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_26;
}
}
}
else
{
lean_dec(x_8);
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_4, 1);
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 1);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_inc_ref(x_27);
lean_dec(x_9);
x_29 = lean_ctor_get(x_4, 0);
lean_inc(x_29);
lean_dec_ref(x_4);
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec_ref(x_27);
x_31 = lean_apply_2(x_7, x_29, x_30);
return x_31;
}
else
{
lean_object* x_32; 
lean_dec(x_7);
x_32 = lean_apply_6(x_9, x_14, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_32;
}
}
else
{
lean_object* x_33; 
lean_dec(x_7);
x_33 = lean_apply_6(x_9, x_14, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_33;
}
}
else
{
lean_object* x_34; 
lean_dec(x_7);
x_34 = lean_apply_6(x_9, x_14, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_34;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_4, 1);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
x_36 = lean_ctor_get(x_4, 0);
lean_inc(x_36);
lean_dec_ref(x_4);
x_37 = lean_apply_1(x_6, x_36);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_6);
x_38 = lean_apply_6(x_9, x_12, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_38;
}
}
else
{
lean_object* x_39; 
lean_dec(x_6);
x_39 = lean_apply_6(x_9, x_12, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_39;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_9);
x_40 = lean_box(0);
x_41 = lean_apply_1(x_5, x_40);
return x_41;
}
else
{
lean_object* x_42; 
lean_dec(x_5);
x_42 = lean_apply_6(x_9, x_10, x_4, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return x_42;
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lp_DeepArithmetic___private_DeepArithmetic_LogicAbstraction_PeanoModel_0__DeepArithmetic_LogicAbstraction_DeepArithmeticPeanoModel_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec_ref(x_1);
return x_10;
}
}
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
