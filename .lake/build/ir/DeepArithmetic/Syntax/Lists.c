// Lean compiler output
// Module: DeepArithmetic.Syntax.Lists
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
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsList"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsElem"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__6_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__7_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__8_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_listInductionSchema(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_ListTheory;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(lean_object* v_h_7_, lean_object* v_t_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_9_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons___closed__0));
v___x_10_ = lean_box(0);
v___x_11_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_11_, 0, v_t_8_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v_h_7_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_9_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append(lean_object* v_l1_15_, lean_object* v_l2_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_17_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append___closed__0));
v___x_18_ = lean_box(0);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v_l2_16_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_20_, 0, v_l1_15_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
v___x_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_17_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList___closed__0));
v___x_25_ = lean_box(0);
v___x_26_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_26_, 0, v_x_23_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
v___x_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_24_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem___closed__0));
v___x_31_ = lean_box(0);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v_x_29_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_30_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_47_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_49_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__1);
v___x_51_ = lp_FOL_neg(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__2);
v___x_53_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0);
v___x_54_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__3);
v___x_56_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__4);
return v___x_57_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil));
v___x_59_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList___closed__0);
return v___x_60_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1));
v___x_62_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0);
v___x_64_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__0);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_67_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1));
v___x_68_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2);
v___x_70_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__3);
v___x_72_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1);
v___x_73_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__4);
v___x_75_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__5);
v___x_77_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__6);
return v___x_78_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2);
v___x_80_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil));
v___x_81_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set(v___x_81_, 1, v___x_79_);
return v___x_81_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__0);
v___x_83_ = lp_FOL_neg(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__1);
v___x_85_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1);
v___x_86_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__2);
v___x_88_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__3);
v___x_90_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons___closed__4);
return v___x_91_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3));
v___x_93_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2));
v___x_95_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__1);
v___x_97_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__0);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1);
v___x_100_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__2);
v___x_101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2));
v___x_103_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v3));
v___x_104_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2);
v___x_106_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__4);
v___x_107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
return v___x_107_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__8));
v___x_118_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__5);
v___x_119_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__9);
v___x_121_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__3);
v___x_122_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__10);
v___x_124_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__11);
v___x_126_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__12);
v___x_128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__13);
v___x_130_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj___closed__14);
return v___x_131_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_133_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil));
v___x_134_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append(v___x_133_, v___x_132_);
return v___x_134_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_136_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__0);
v___x_137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_138_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__1);
v___x_139_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0);
v___x_140_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
return v___x_140_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__2);
v___x_142_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil___closed__3);
return v___x_143_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2));
v___x_145_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isElem(v___x_144_);
return v___x_145_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1));
v___x_147_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_isList(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__1);
v___x_149_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__0);
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0);
v___x_152_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__2);
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1));
v___x_155_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2));
v___x_156_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(v___x_155_, v___x_154_);
return v___x_156_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_158_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__4);
v___x_159_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
v___x_161_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v1));
v___x_162_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append(v___x_161_, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__6);
v___x_164_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v2));
v___x_165_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons(v___x_164_, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__7);
v___x_167_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__5);
v___x_168_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_169_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__8);
v___x_170_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__3);
v___x_171_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
return v___x_171_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__9);
v___x_173_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__10);
v___x_175_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__11);
v___x_177_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons(void){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons___closed__12);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_listInductionSchema(lean_object* v_00_u03c6_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v_baseCase_182_; lean_object* v_phi__lifted1_183_; lean_object* v_phi__lifted2_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v_phi__t_187_; lean_object* v___x_188_; lean_object* v_phi__cons__ht_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_indStepBody_193_; lean_object* v___x_194_; lean_object* v_indStep_195_; lean_object* v___x_196_; lean_object* v_phi__l_197_; lean_object* v___x_198_; lean_object* v_conclusion_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil));
lean_inc(v_00_u03c6_179_);
v_baseCase_182_ = lp_FOL_substFormula(v___x_180_, v___x_181_, v_00_u03c6_179_);
v_phi__lifted1_183_ = lp_FOL_liftFormula(v___x_180_, v_00_u03c6_179_);
lean_inc(v_phi__lifted1_183_);
v_phi__lifted2_184_ = lp_FOL_liftFormula(v___x_180_, v_phi__lifted1_183_);
v___x_185_ = lean_unsigned_to_nat(2u);
v___x_186_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_v0));
lean_inc(v_phi__lifted2_184_);
v_phi__t_187_ = lp_FOL_substFormula(v___x_185_, v___x_186_, v_phi__lifted2_184_);
v___x_188_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__2);
v_phi__cons__ht_189_ = lp_FOL_substFormula(v___x_185_, v___x_188_, v_phi__lifted2_184_);
v___x_190_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint___closed__0);
v___x_191_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList___closed__1);
v___x_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v_phi__t_187_);
v_indStepBody_193_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_indStepBody_193_, 0, v___x_192_);
lean_ctor_set(v_indStepBody_193_, 1, v_phi__cons__ht_189_);
v___x_194_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_194_, 0, v_indStepBody_193_);
v_indStep_195_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_indStep_195_, 0, v___x_194_);
v___x_196_ = lean_unsigned_to_nat(1u);
v_phi__l_197_ = lp_FOL_substFormula(v___x_196_, v___x_186_, v_phi__lifted1_183_);
v___x_198_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_190_);
lean_ctor_set(v___x_198_, 1, v_phi__l_197_);
v_conclusion_199_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_conclusion_199_, 0, v___x_198_);
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v_baseCase_182_);
lean_ctor_set(v___x_200_, 1, v_indStep_195_);
v___x_201_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v_conclusion_199_);
return v___x_201_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_ListTheory(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Lists(uint8_t builtin) {
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
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_list__elem__disjoint);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__isList);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__isList);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_nil__ne__cons);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_cons__inj);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__nil);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_append__cons);
lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_ListTheory = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_ListTheory();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Lists_ListTheory);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
