// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.Arithmetic
// Imports: public import Init public meta import Init public import FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL public import DeepArithmetic.LogicAbstraction.SetTheory
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
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(lean_object*, lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
lean_object* lp_FOL_liftTerm(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil;
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(lean_object*, lean_object*);
lean_object* lp_FOL_neg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__1_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat(lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mult"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "DeepArithmetic"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LogicAbstraction"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Arithmetic"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_+_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 166, 85, 226, 47, 109, 59, 223)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__5_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " +_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__7_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__8_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__10_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__8_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__12_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__12_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__13 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__13_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__13_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "n_add"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(62, 68, 143, 95, 32, 6, 101, 120)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(168, 122, 65, 135, 95, 92, 245, 21)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__10_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_*_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 102, 191, 167, 58, 106, 126, 254)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " *_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "n_mult"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 238, 69, 146, 183, 8, 43, 111)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 121, 184, 239, 240, 232, 94, 109)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mult__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mult__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_-_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 107, 50, 247, 178, 111, 203, 175)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " -_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "n_sub"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 86, 107, 3, 36, 160, 146, 88)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 89, 242, 36, 123, 168, 147, 12)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__sub__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__sub__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pred"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_LessThan(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_<_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 100, 179, 239, 148, 113, 59, 11)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " <_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "LessThan"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 114, 104, 47, 149, 158, 171, 141)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 213, 9, 23, 237, 234, 117, 145)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__LessThan__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__LessThan__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_/_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 32, 218, 48, 34, 153, 190, 181)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " /_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "n_div"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 193, 68, 197, 27, 195, 228, 224)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 173, 99, 186, 167, 51, 254, 64)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__div__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__div__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_%_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 82, 121, 21, 101, 3, 132, 232)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " %_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "n_mod"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 190, 25, 102, 224, 118, 204, 129)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 159, 240, 157, 198, 170, 123, 53)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 215, 224, 114, 208, 143, 232, 185)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mod__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mod__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "to_binary"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary(lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "to_base10"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList;
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2(void){
_start:
{
lean_object* v_S__lift_5_; lean_object* v_S_6_; lean_object* v___x_7_; 
v_S__lift_5_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__1));
v_S_6_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0));
v___x_7_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v_S_6_, v_S__lift_5_);
return v___x_7_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3(void){
_start:
{
lean_object* v_S_8_; lean_object* v___x_9_; 
v_S_8_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0));
v___x_9_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v_S_8_);
return v___x_9_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4(void){
_start:
{
lean_object* v_S__lift_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_S__lift_10_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__1));
v___x_11_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__3);
v___x_12_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_11_, v_S__lift_10_);
return v___x_12_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_step_15_; 
v___x_13_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__4);
v___x_14_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__2);
v_step_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_step_15_, 0, v___x_14_);
lean_ctor_set(v_step_15_, 1, v___x_13_);
return v_step_15_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6(void){
_start:
{
lean_object* v_step_16_; lean_object* v_forall__step_17_; 
v_step_16_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__5);
v_forall__step_17_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_forall__step_17_, 0, v_step_16_);
return v_forall__step_17_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7(void){
_start:
{
lean_object* v_S_18_; lean_object* v___x_19_; lean_object* v_base_20_; 
v_S_18_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0));
v___x_19_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v_base_20_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_19_, v_S_18_);
return v_base_20_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8(void){
_start:
{
lean_object* v_forall__step_21_; lean_object* v_base_22_; lean_object* v_cond_23_; 
v_forall__step_21_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__6);
v_base_22_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__7);
v_cond_23_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_cond_23_, 0, v_base_22_);
lean_ctor_set(v_cond_23_, 1, v_forall__step_21_);
return v_cond_23_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat(lean_object* v_x_24_){
_start:
{
lean_object* v___x_25_; lean_object* v_S_26_; lean_object* v_cond_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_25_ = lean_unsigned_to_nat(0u);
v_S_26_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__0));
v_cond_27_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_is__nat___closed__8);
v___x_28_ = lp_FOL_liftTerm(v___x_25_, v_x_24_);
v___x_29_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_28_, v_S_26_);
v___x_30_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_30_, 0, v_cond_27_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(lean_object* v_a_33_, lean_object* v_b_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_35_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add___closed__0));
v___x_36_ = lean_box(0);
v___x_37_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_37_, 0, v_b_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v_a_33_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_35_);
lean_ctor_set(v___x_39_, 1, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_43_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult___closed__0));
v___x_44_ = lean_box(0);
v___x_45_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_45_, 0, v_b_42_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_46_, 0, v_a_41_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_43_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub(lean_object* v_a_49_, lean_object* v_b_50_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_51_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub___closed__0));
v___x_52_ = lean_box(0);
v___x_53_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_53_, 0, v_b_50_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_54_, 0, v_a_49_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_51_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__5));
v___x_98_ = l_String_toRawSubstring_x27(v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1(lean_object* v_x_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4));
lean_inc(v_x_115_);
v___x_119_ = l_Lean_Syntax_isOfKind(v_x_115_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_x_115_);
v___x_120_ = lean_box(1);
v___x_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v_a_117_);
return v___x_121_;
}
else
{
lean_object* v_quotContext_122_; lean_object* v_currMacroScope_123_; lean_object* v_ref_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v_quotContext_122_ = lean_ctor_get(v_a_116_, 1);
v_currMacroScope_123_ = lean_ctor_get(v_a_116_, 2);
v_ref_124_ = lean_ctor_get(v_a_116_, 5);
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = l_Lean_Syntax_getArg(v_x_115_, v___x_125_);
v___x_127_ = lean_unsigned_to_nat(2u);
v___x_128_ = l_Lean_Syntax_getArg(v_x_115_, v___x_127_);
lean_dec(v_x_115_);
v___x_129_ = 0;
v___x_130_ = l_Lean_SourceInfo_fromRef(v_ref_124_, v___x_129_);
v___x_131_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_132_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__6);
v___x_133_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__7));
lean_inc(v_currMacroScope_123_);
lean_inc(v_quotContext_122_);
v___x_134_ = l_Lean_addMacroScope(v_quotContext_122_, v___x_133_, v_currMacroScope_123_);
v___x_135_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__10));
lean_inc_n(v___x_130_, 2);
v___x_136_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_136_, 0, v___x_130_);
lean_ctor_set(v___x_136_, 1, v___x_132_);
lean_ctor_set(v___x_136_, 2, v___x_134_);
lean_ctor_set(v___x_136_, 3, v___x_135_);
v___x_137_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_138_ = l_Lean_Syntax_node2(v___x_130_, v___x_137_, v___x_126_, v___x_128_);
v___x_139_ = l_Lean_Syntax_node2(v___x_130_, v___x_131_, v___x_136_, v___x_138_);
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v_a_117_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___boxed(lean_object* v_x_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1(v_x_141_, v_a_142_, v_a_143_);
lean_dec_ref(v_a_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1(lean_object* v_x_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_148_);
v___x_152_ = l_Lean_Syntax_isOfKind(v_x_148_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; 
lean_dec(v_x_148_);
v___x_153_ = lean_box(0);
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v_a_150_);
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = l_Lean_Syntax_getArg(v_x_148_, v___x_155_);
v___x_157_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_156_);
v___x_158_ = l_Lean_Syntax_isOfKind(v___x_156_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; 
lean_dec(v___x_156_);
lean_dec(v_x_148_);
v___x_159_ = lean_box(0);
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v_a_150_);
return v___x_160_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = l_Lean_Syntax_getArg(v_x_148_, v___x_161_);
lean_dec(v_x_148_);
v___x_163_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_162_);
v___x_164_ = l_Lean_Syntax_matchesNull(v___x_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec(v___x_162_);
lean_dec(v___x_156_);
v___x_165_ = lean_box(0);
v___x_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v_a_150_);
return v___x_166_;
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_ref_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_167_ = l_Lean_Syntax_getArg(v___x_162_, v___x_155_);
v___x_168_ = l_Lean_Syntax_getArg(v___x_162_, v___x_161_);
lean_dec(v___x_162_);
v_ref_169_ = l_Lean_replaceRef(v___x_156_, v_a_149_);
lean_dec(v___x_156_);
v___x_170_ = 0;
v___x_171_ = l_Lean_SourceInfo_fromRef(v_ref_169_, v___x_170_);
lean_dec(v_ref_169_);
v___x_172_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__4));
v___x_173_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2b__s___00__closed__7));
lean_inc(v___x_171_);
v___x_174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_171_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = l_Lean_Syntax_node3(v___x_171_, v___x_172_, v___x_167_, v___x_174_, v___x_168_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v_a_150_);
return v___x_176_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___boxed(lean_object* v_x_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1(v_x_177_, v_a_178_, v_a_179_);
lean_dec(v_a_178_);
return v_res_180_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__0));
v___x_202_ = l_String_toRawSubstring_x27(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1(lean_object* v_x_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1));
lean_inc(v_x_216_);
v___x_220_ = l_Lean_Syntax_isOfKind(v_x_216_, v___x_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_222_; 
lean_dec(v_x_216_);
v___x_221_ = lean_box(1);
v___x_222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_a_218_);
return v___x_222_;
}
else
{
lean_object* v_quotContext_223_; lean_object* v_currMacroScope_224_; lean_object* v_ref_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_quotContext_223_ = lean_ctor_get(v_a_217_, 1);
v_currMacroScope_224_ = lean_ctor_get(v_a_217_, 2);
v_ref_225_ = lean_ctor_get(v_a_217_, 5);
v___x_226_ = lean_unsigned_to_nat(0u);
v___x_227_ = l_Lean_Syntax_getArg(v_x_216_, v___x_226_);
v___x_228_ = lean_unsigned_to_nat(2u);
v___x_229_ = l_Lean_Syntax_getArg(v_x_216_, v___x_228_);
lean_dec(v_x_216_);
v___x_230_ = 0;
v___x_231_ = l_Lean_SourceInfo_fromRef(v_ref_225_, v___x_230_);
v___x_232_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_233_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__1);
v___x_234_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__2));
lean_inc(v_currMacroScope_224_);
lean_inc(v_quotContext_223_);
v___x_235_ = l_Lean_addMacroScope(v_quotContext_223_, v___x_234_, v_currMacroScope_224_);
v___x_236_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___closed__5));
lean_inc_n(v___x_231_, 2);
v___x_237_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_237_, 0, v___x_231_);
lean_ctor_set(v___x_237_, 1, v___x_233_);
lean_ctor_set(v___x_237_, 2, v___x_235_);
lean_ctor_set(v___x_237_, 3, v___x_236_);
v___x_238_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_239_ = l_Lean_Syntax_node2(v___x_231_, v___x_238_, v___x_227_, v___x_229_);
v___x_240_ = l_Lean_Syntax_node2(v___x_231_, v___x_232_, v___x_237_, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v_a_218_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1___boxed(lean_object* v_x_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2a__s____1(v_x_242_, v_a_243_, v_a_244_);
lean_dec_ref(v_a_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mult__1(lean_object* v_x_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_246_);
v___x_250_ = l_Lean_Syntax_isOfKind(v_x_246_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec(v_x_246_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_a_248_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = l_Lean_Syntax_getArg(v_x_246_, v___x_253_);
v___x_255_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_254_);
v___x_256_ = l_Lean_Syntax_isOfKind(v___x_254_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec(v___x_254_);
lean_dec(v_x_246_);
v___x_257_ = lean_box(0);
v___x_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v_a_248_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = l_Lean_Syntax_getArg(v_x_246_, v___x_259_);
lean_dec(v_x_246_);
v___x_261_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_260_);
v___x_262_ = l_Lean_Syntax_matchesNull(v___x_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_260_);
lean_dec(v___x_254_);
v___x_263_ = lean_box(0);
v___x_264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v_a_248_);
return v___x_264_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_ref_267_; uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_265_ = l_Lean_Syntax_getArg(v___x_260_, v___x_253_);
v___x_266_ = l_Lean_Syntax_getArg(v___x_260_, v___x_259_);
lean_dec(v___x_260_);
v_ref_267_ = l_Lean_replaceRef(v___x_254_, v_a_247_);
lean_dec(v___x_254_);
v___x_268_ = 0;
v___x_269_ = l_Lean_SourceInfo_fromRef(v_ref_267_, v___x_268_);
lean_dec(v_ref_267_);
v___x_270_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__1));
v___x_271_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2a__s___00__closed__2));
lean_inc(v___x_269_);
v___x_272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_269_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_Lean_Syntax_node3(v___x_269_, v___x_270_, v___x_265_, v___x_272_, v___x_266_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v_a_248_);
return v___x_274_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mult__1___boxed(lean_object* v_x_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mult__1(v_x_275_, v_a_276_, v_a_277_);
lean_dec(v_a_276_);
return v_res_278_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__0));
v___x_300_ = l_String_toRawSubstring_x27(v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1(lean_object* v_x_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1));
lean_inc(v_x_314_);
v___x_318_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_x_314_);
v___x_319_ = lean_box(1);
v___x_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v_a_316_);
return v___x_320_;
}
else
{
lean_object* v_quotContext_321_; lean_object* v_currMacroScope_322_; lean_object* v_ref_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_quotContext_321_ = lean_ctor_get(v_a_315_, 1);
v_currMacroScope_322_ = lean_ctor_get(v_a_315_, 2);
v_ref_323_ = lean_ctor_get(v_a_315_, 5);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = l_Lean_Syntax_getArg(v_x_314_, v___x_324_);
v___x_326_ = lean_unsigned_to_nat(2u);
v___x_327_ = l_Lean_Syntax_getArg(v_x_314_, v___x_326_);
lean_dec(v_x_314_);
v___x_328_ = 0;
v___x_329_ = l_Lean_SourceInfo_fromRef(v_ref_323_, v___x_328_);
v___x_330_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_331_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__1);
v___x_332_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__2));
lean_inc(v_currMacroScope_322_);
lean_inc(v_quotContext_321_);
v___x_333_ = l_Lean_addMacroScope(v_quotContext_321_, v___x_332_, v_currMacroScope_322_);
v___x_334_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___closed__5));
lean_inc_n(v___x_329_, 2);
v___x_335_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_335_, 0, v___x_329_);
lean_ctor_set(v___x_335_, 1, v___x_331_);
lean_ctor_set(v___x_335_, 2, v___x_333_);
lean_ctor_set(v___x_335_, 3, v___x_334_);
v___x_336_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_337_ = l_Lean_Syntax_node2(v___x_329_, v___x_336_, v___x_325_, v___x_327_);
v___x_338_ = l_Lean_Syntax_node2(v___x_329_, v___x_330_, v___x_335_, v___x_337_);
v___x_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v_a_316_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1___boxed(lean_object* v_x_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2d__s____1(v_x_340_, v_a_341_, v_a_342_);
lean_dec_ref(v_a_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__sub__1(lean_object* v_x_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_344_);
v___x_348_ = l_Lean_Syntax_isOfKind(v_x_344_, v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v_x_344_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v_a_346_);
return v___x_350_;
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = l_Lean_Syntax_getArg(v_x_344_, v___x_351_);
v___x_353_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_352_);
v___x_354_ = l_Lean_Syntax_isOfKind(v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec(v___x_352_);
lean_dec(v_x_344_);
v___x_355_ = lean_box(0);
v___x_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v_a_346_);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_357_ = lean_unsigned_to_nat(1u);
v___x_358_ = l_Lean_Syntax_getArg(v_x_344_, v___x_357_);
lean_dec(v_x_344_);
v___x_359_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_358_);
v___x_360_ = l_Lean_Syntax_matchesNull(v___x_358_, v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v___x_358_);
lean_dec(v___x_352_);
v___x_361_ = lean_box(0);
v___x_362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
lean_ctor_set(v___x_362_, 1, v_a_346_);
return v___x_362_;
}
else
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_ref_365_; uint8_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_363_ = l_Lean_Syntax_getArg(v___x_358_, v___x_351_);
v___x_364_ = l_Lean_Syntax_getArg(v___x_358_, v___x_357_);
lean_dec(v___x_358_);
v_ref_365_ = l_Lean_replaceRef(v___x_352_, v_a_345_);
lean_dec(v___x_352_);
v___x_366_ = 0;
v___x_367_ = l_Lean_SourceInfo_fromRef(v_ref_365_, v___x_366_);
lean_dec(v_ref_365_);
v___x_368_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__1));
v___x_369_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2d__s___00__closed__2));
lean_inc(v___x_367_);
v___x_370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_367_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = l_Lean_Syntax_node3(v___x_367_, v___x_368_, v___x_363_, v___x_370_, v___x_364_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_a_346_);
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__sub__1___boxed(lean_object* v_x_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__sub__1(v_x_373_, v_a_374_, v_a_375_);
lean_dec(v_a_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred(lean_object* v_a_378_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred___closed__0));
v___x_380_ = lean_box(0);
v___x_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_381_, 0, v_a_378_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_379_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_384_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_386_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__0);
v___x_387_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v___x_385_);
return v___x_387_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero(void){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero___closed__1);
return v___x_388_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_390_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0);
v___x_392_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_394_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__1);
v___x_395_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__2);
v___x_397_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ(void){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__3);
return v___x_398_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_400_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_401_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_402_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_403_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__0);
v___x_404_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__1);
v___x_406_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero___closed__2);
return v___x_407_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_408_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0);
v___x_409_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_410_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_409_, v___x_408_);
return v___x_410_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_412_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_413_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_412_, v___x_411_);
return v___x_413_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__1);
v___x_415_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_414_);
return v___x_415_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__2);
v___x_417_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__0);
v___x_418_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v___x_416_);
return v___x_418_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__3);
v___x_420_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__4);
v___x_422_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ(void){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ___closed__5);
return v___x_423_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_425_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_426_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(v___x_425_, v___x_424_);
return v___x_426_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_428_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__0);
v___x_429_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___x_427_);
return v___x_429_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__1);
v___x_431_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero(void){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero___closed__2);
return v___x_432_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0(void){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0);
v___x_434_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_435_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(v___x_434_, v___x_433_);
return v___x_435_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_437_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_438_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(v___x_437_, v___x_436_);
return v___x_438_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_440_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__1);
v___x_441_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_440_, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__2);
v___x_443_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__0);
v___x_444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
return v___x_444_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__3);
v___x_446_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__4);
v___x_448_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ___closed__5);
return v___x_449_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_451_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_452_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub(v___x_451_, v___x_450_);
return v___x_452_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_454_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__0);
v___x_455_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__1);
v___x_457_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero(void){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero___closed__2);
return v___x_458_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_459_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0);
v___x_460_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_461_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub(v___x_460_, v___x_459_);
return v___x_461_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_462_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_463_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_464_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__sub(v___x_463_, v___x_462_);
return v___x_464_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__1);
v___x_466_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__pred(v___x_465_);
return v___x_466_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_467_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__2);
v___x_468_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__0);
v___x_469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v___x_467_);
return v___x_469_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__3);
v___x_471_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__4);
v___x_473_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ(void){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ___closed__5);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_LessThan(lean_object* v_a_475_, lean_object* v_b_476_){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lp_FOL_liftTerm(v___x_477_, v_a_475_);
v___x_479_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ___closed__0);
v___x_480_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_478_, v___x_479_);
v___x_481_ = lp_FOL_liftTerm(v___x_477_, v_b_476_);
v___x_482_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__0));
v___x_505_ = l_String_toRawSubstring_x27(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1(lean_object* v_x_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1));
lean_inc(v_x_519_);
v___x_523_ = l_Lean_Syntax_isOfKind(v_x_519_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v_x_519_);
v___x_524_ = lean_box(1);
v___x_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
lean_ctor_set(v___x_525_, 1, v_a_521_);
return v___x_525_;
}
else
{
lean_object* v_quotContext_526_; lean_object* v_currMacroScope_527_; lean_object* v_ref_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_quotContext_526_ = lean_ctor_get(v_a_520_, 1);
v_currMacroScope_527_ = lean_ctor_get(v_a_520_, 2);
v_ref_528_ = lean_ctor_get(v_a_520_, 5);
v___x_529_ = lean_unsigned_to_nat(0u);
v___x_530_ = l_Lean_Syntax_getArg(v_x_519_, v___x_529_);
v___x_531_ = lean_unsigned_to_nat(2u);
v___x_532_ = l_Lean_Syntax_getArg(v_x_519_, v___x_531_);
lean_dec(v_x_519_);
v___x_533_ = 0;
v___x_534_ = l_Lean_SourceInfo_fromRef(v_ref_528_, v___x_533_);
v___x_535_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_536_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__1);
v___x_537_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__2));
lean_inc(v_currMacroScope_527_);
lean_inc(v_quotContext_526_);
v___x_538_ = l_Lean_addMacroScope(v_quotContext_526_, v___x_537_, v_currMacroScope_527_);
v___x_539_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___closed__5));
lean_inc_n(v___x_534_, 2);
v___x_540_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_540_, 0, v___x_534_);
lean_ctor_set(v___x_540_, 1, v___x_536_);
lean_ctor_set(v___x_540_, 2, v___x_538_);
lean_ctor_set(v___x_540_, 3, v___x_539_);
v___x_541_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_542_ = l_Lean_Syntax_node2(v___x_534_, v___x_541_, v___x_530_, v___x_532_);
v___x_543_ = l_Lean_Syntax_node2(v___x_534_, v___x_535_, v___x_540_, v___x_542_);
v___x_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
lean_ctor_set(v___x_544_, 1, v_a_521_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1___boxed(lean_object* v_x_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x3c__s____1(v_x_545_, v_a_546_, v_a_547_);
lean_dec_ref(v_a_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__LessThan__1(lean_object* v_x_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_549_);
v___x_553_ = l_Lean_Syntax_isOfKind(v_x_549_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec(v_x_549_);
v___x_554_ = lean_box(0);
v___x_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v_a_551_);
return v___x_555_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = l_Lean_Syntax_getArg(v_x_549_, v___x_556_);
v___x_558_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_557_);
v___x_559_ = l_Lean_Syntax_isOfKind(v___x_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; 
lean_dec(v___x_557_);
lean_dec(v_x_549_);
v___x_560_ = lean_box(0);
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v_a_551_);
return v___x_561_;
}
else
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = l_Lean_Syntax_getArg(v_x_549_, v___x_562_);
lean_dec(v_x_549_);
v___x_564_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_563_);
v___x_565_ = l_Lean_Syntax_matchesNull(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v___x_563_);
lean_dec(v___x_557_);
v___x_566_ = lean_box(0);
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_a_551_);
return v___x_567_;
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_ref_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_568_ = l_Lean_Syntax_getArg(v___x_563_, v___x_556_);
v___x_569_ = l_Lean_Syntax_getArg(v___x_563_, v___x_562_);
lean_dec(v___x_563_);
v_ref_570_ = l_Lean_replaceRef(v___x_557_, v_a_550_);
lean_dec(v___x_557_);
v___x_571_ = 0;
v___x_572_ = l_Lean_SourceInfo_fromRef(v_ref_570_, v___x_571_);
lean_dec(v_ref_570_);
v___x_573_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__1));
v___x_574_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x3c__s___00__closed__2));
lean_inc(v___x_572_);
v___x_575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_572_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = l_Lean_Syntax_node3(v___x_572_, v___x_573_, v___x_568_, v___x_575_, v___x_569_);
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
lean_ctor_set(v___x_577_, 1, v_a_551_);
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__LessThan__1___boxed(lean_object* v_x_578_, lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__LessThan__1(v_x_578_, v_a_579_, v_a_580_);
lean_dec(v_a_579_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div(lean_object* v_a_583_, lean_object* v_b_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_585_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div___closed__0));
v___x_586_ = lean_box(0);
v___x_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_587_, 0, v_b_584_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v_a_583_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_585_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod(lean_object* v_a_591_, lean_object* v_b_592_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_593_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod___closed__0));
v___x_594_ = lean_box(0);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v_b_592_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_596_, 0, v_a_591_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_593_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__0));
v___x_619_ = l_String_toRawSubstring_x27(v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1(lean_object* v_x_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_636_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1));
lean_inc(v_x_633_);
v___x_637_ = l_Lean_Syntax_isOfKind(v_x_633_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; 
lean_dec(v_x_633_);
v___x_638_ = lean_box(1);
v___x_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v_a_635_);
return v___x_639_;
}
else
{
lean_object* v_quotContext_640_; lean_object* v_currMacroScope_641_; lean_object* v_ref_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_quotContext_640_ = lean_ctor_get(v_a_634_, 1);
v_currMacroScope_641_ = lean_ctor_get(v_a_634_, 2);
v_ref_642_ = lean_ctor_get(v_a_634_, 5);
v___x_643_ = lean_unsigned_to_nat(0u);
v___x_644_ = l_Lean_Syntax_getArg(v_x_633_, v___x_643_);
v___x_645_ = lean_unsigned_to_nat(2u);
v___x_646_ = l_Lean_Syntax_getArg(v_x_633_, v___x_645_);
lean_dec(v_x_633_);
v___x_647_ = 0;
v___x_648_ = l_Lean_SourceInfo_fromRef(v_ref_642_, v___x_647_);
v___x_649_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_650_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__1);
v___x_651_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__2));
lean_inc(v_currMacroScope_641_);
lean_inc(v_quotContext_640_);
v___x_652_ = l_Lean_addMacroScope(v_quotContext_640_, v___x_651_, v_currMacroScope_641_);
v___x_653_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___closed__5));
lean_inc_n(v___x_648_, 2);
v___x_654_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_654_, 0, v___x_648_);
lean_ctor_set(v___x_654_, 1, v___x_650_);
lean_ctor_set(v___x_654_, 2, v___x_652_);
lean_ctor_set(v___x_654_, 3, v___x_653_);
v___x_655_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_656_ = l_Lean_Syntax_node2(v___x_648_, v___x_655_, v___x_644_, v___x_646_);
v___x_657_ = l_Lean_Syntax_node2(v___x_648_, v___x_649_, v___x_654_, v___x_656_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v_a_635_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1___boxed(lean_object* v_x_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2f__s____1(v_x_659_, v_a_660_, v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__div__1(lean_object* v_x_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_666_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_663_);
v___x_667_ = l_Lean_Syntax_isOfKind(v_x_663_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; 
lean_dec(v_x_663_);
v___x_668_ = lean_box(0);
v___x_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v_a_665_);
return v___x_669_;
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = l_Lean_Syntax_getArg(v_x_663_, v___x_670_);
v___x_672_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_671_);
v___x_673_ = l_Lean_Syntax_isOfKind(v___x_671_, v___x_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v___x_671_);
lean_dec(v_x_663_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v_a_665_);
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_676_ = lean_unsigned_to_nat(1u);
v___x_677_ = l_Lean_Syntax_getArg(v_x_663_, v___x_676_);
lean_dec(v_x_663_);
v___x_678_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_677_);
v___x_679_ = l_Lean_Syntax_matchesNull(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v___x_677_);
lean_dec(v___x_671_);
v___x_680_ = lean_box(0);
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v_a_665_);
return v___x_681_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v_ref_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_682_ = l_Lean_Syntax_getArg(v___x_677_, v___x_670_);
v___x_683_ = l_Lean_Syntax_getArg(v___x_677_, v___x_676_);
lean_dec(v___x_677_);
v_ref_684_ = l_Lean_replaceRef(v___x_671_, v_a_664_);
lean_dec(v___x_671_);
v___x_685_ = 0;
v___x_686_ = l_Lean_SourceInfo_fromRef(v_ref_684_, v___x_685_);
lean_dec(v_ref_684_);
v___x_687_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__1));
v___x_688_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x2f__s___00__closed__2));
lean_inc(v___x_686_);
v___x_689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_686_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = l_Lean_Syntax_node3(v___x_686_, v___x_687_, v___x_682_, v___x_689_, v___x_683_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v_a_665_);
return v___x_691_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__div__1___boxed(lean_object* v_x_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__div__1(v_x_692_, v_a_693_, v_a_694_);
lean_dec(v_a_693_);
return v_res_695_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__0));
v___x_717_ = l_String_toRawSubstring_x27(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1(lean_object* v_x_731_, lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_734_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1));
lean_inc(v_x_731_);
v___x_735_ = l_Lean_Syntax_isOfKind(v_x_731_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec(v_x_731_);
v___x_736_ = lean_box(1);
v___x_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v_a_733_);
return v___x_737_;
}
else
{
lean_object* v_quotContext_738_; lean_object* v_currMacroScope_739_; lean_object* v_ref_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; uint8_t v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v_quotContext_738_ = lean_ctor_get(v_a_732_, 1);
v_currMacroScope_739_ = lean_ctor_get(v_a_732_, 2);
v_ref_740_ = lean_ctor_get(v_a_732_, 5);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = l_Lean_Syntax_getArg(v_x_731_, v___x_741_);
v___x_743_ = lean_unsigned_to_nat(2u);
v___x_744_ = l_Lean_Syntax_getArg(v_x_731_, v___x_743_);
lean_dec(v_x_731_);
v___x_745_ = 0;
v___x_746_ = l_Lean_SourceInfo_fromRef(v_ref_740_, v___x_745_);
v___x_747_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
v___x_748_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__1);
v___x_749_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__2));
lean_inc(v_currMacroScope_739_);
lean_inc(v_quotContext_738_);
v___x_750_ = l_Lean_addMacroScope(v_quotContext_738_, v___x_749_, v_currMacroScope_739_);
v___x_751_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___closed__5));
lean_inc_n(v___x_746_, 2);
v___x_752_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_752_, 0, v___x_746_);
lean_ctor_set(v___x_752_, 1, v___x_748_);
lean_ctor_set(v___x_752_, 2, v___x_750_);
lean_ctor_set(v___x_752_, 3, v___x_751_);
v___x_753_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__12));
v___x_754_ = l_Lean_Syntax_node2(v___x_746_, v___x_753_, v___x_742_, v___x_744_);
v___x_755_ = l_Lean_Syntax_node2(v___x_746_, v___x_747_, v___x_752_, v___x_754_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
lean_ctor_set(v___x_756_, 1, v_a_733_);
return v___x_756_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1___boxed(lean_object* v_x_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x25__s____1(v_x_757_, v_a_758_, v_a_759_);
lean_dec_ref(v_a_758_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mod__1(lean_object* v_x_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______macroRules__DeepArithmetic__LogicAbstraction__Arithmetic__term___x2b__s____1___closed__4));
lean_inc(v_x_761_);
v___x_765_ = l_Lean_Syntax_isOfKind(v_x_761_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_x_761_);
v___x_766_ = lean_box(0);
v___x_767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
lean_ctor_set(v___x_767_, 1, v_a_763_);
return v___x_767_;
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = l_Lean_Syntax_getArg(v_x_761_, v___x_768_);
v___x_770_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__add__1___closed__1));
lean_inc(v___x_769_);
v___x_771_ = l_Lean_Syntax_isOfKind(v___x_769_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; lean_object* v___x_773_; 
lean_dec(v___x_769_);
lean_dec(v_x_761_);
v___x_772_ = lean_box(0);
v___x_773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
lean_ctor_set(v___x_773_, 1, v_a_763_);
return v___x_773_;
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_774_ = lean_unsigned_to_nat(1u);
v___x_775_ = l_Lean_Syntax_getArg(v_x_761_, v___x_774_);
lean_dec(v_x_761_);
v___x_776_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_775_);
v___x_777_ = l_Lean_Syntax_matchesNull(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; 
lean_dec(v___x_775_);
lean_dec(v___x_769_);
v___x_778_ = lean_box(0);
v___x_779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v_a_763_);
return v___x_779_;
}
else
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_ref_782_; uint8_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_780_ = l_Lean_Syntax_getArg(v___x_775_, v___x_768_);
v___x_781_ = l_Lean_Syntax_getArg(v___x_775_, v___x_774_);
lean_dec(v___x_775_);
v_ref_782_ = l_Lean_replaceRef(v___x_769_, v_a_762_);
lean_dec(v___x_769_);
v___x_783_ = 0;
v___x_784_ = l_Lean_SourceInfo_fromRef(v_ref_782_, v___x_783_);
lean_dec(v_ref_782_);
v___x_785_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__1));
v___x_786_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_term___x25__s___00__closed__2));
lean_inc(v___x_784_);
v___x_787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_784_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = l_Lean_Syntax_node3(v___x_784_, v___x_785_, v___x_780_, v___x_787_, v___x_781_);
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
lean_ctor_set(v___x_789_, 1, v_a_763_);
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mod__1___boxed(lean_object* v_x_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic___aux__DeepArithmetic__LogicAbstraction__Arithmetic______unexpand__DeepArithmetic__LogicAbstraction__Arithmetic__n__mod__1(v_x_790_, v_a_791_, v_a_792_);
lean_dec(v_a_791_);
return v_res_793_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_795_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_796_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
lean_ctor_set(v___x_796_, 1, v___x_794_);
return v___x_796_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1(void){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__0);
v___x_798_ = lp_FOL_neg(v___x_797_);
return v___x_798_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lp_FOL_liftTerm(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_803_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2);
v___x_804_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div(v___x_803_, v___x_802_);
return v___x_804_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_805_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__3);
v___x_806_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_807_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mult(v___x_806_, v___x_805_);
return v___x_807_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_809_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2);
v___x_810_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod(v___x_809_, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5);
v___x_812_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__4);
v___x_813_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__add(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7(void){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_814_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__6);
v___x_815_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__2);
v___x_816_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___x_814_);
return v___x_816_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_818_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__5);
v___x_819_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_LessThan(v___x_818_, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__8);
v___x_821_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__7);
v___x_822_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v___x_820_);
return v___x_822_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10(void){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_823_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__9);
v___x_824_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__1);
v___x_825_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
lean_ctor_set(v___x_825_, 1, v___x_823_);
return v___x_825_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__10);
v___x_827_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__11);
v___x_829_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div(void){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div___closed__12);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary(lean_object* v_a_832_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary___closed__0));
v___x_834_ = lean_box(0);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v_a_832_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_833_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10(lean_object* v_a_838_){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_839_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10___closed__0));
v___x_840_ = lean_box(0);
v___x_841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_841_, 0, v_a_838_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_839_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
v___x_844_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__0);
v___x_846_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1);
return v___x_847_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two___closed__1);
v___x_849_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__0);
v___x_851_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__1);
v___x_853_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_852_);
return v___x_853_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__2);
v___x_855_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__3);
v___x_857_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__4);
v___x_859_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__5);
v___x_861_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_860_);
return v___x_861_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__6);
v___x_863_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_862_);
return v___x_863_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten(void){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten___closed__7);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(lean_object* v_l1_866_, lean_object* v_l2_867_){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_868_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append___closed__0));
v___x_869_ = lean_box(0);
v___x_870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_870_, 0, v_l2_867_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
v___x_871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_871_, 0, v_l1_866_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_868_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
return v___x_872_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_874_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil;
v___x_875_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(v___x_874_, v___x_873_);
return v___x_875_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_877_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__0);
v___x_878_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
lean_ctor_set(v___x_878_, 1, v___x_876_);
return v___x_878_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__1);
v___x_880_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil(void){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil___closed__2);
return v___x_881_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_882_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_883_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_884_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_883_, v___x_882_);
return v___x_884_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_885_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z;
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lp_FOL_liftTerm(v___x_886_, v___x_885_);
return v___x_887_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_888_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__1);
v___x_889_ = lean_unsigned_to_nat(0u);
v___x_890_ = lp_FOL_liftTerm(v___x_889_, v___x_888_);
return v___x_890_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_891_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2);
v___x_892_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__0);
v___x_893_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(v___x_892_, v___x_891_);
return v___x_893_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_894_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__2);
v___x_895_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y;
v___x_896_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(v___x_895_, v___x_894_);
return v___x_896_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__4);
v___x_898_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_899_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_898_, v___x_897_);
return v___x_899_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__5);
v___x_901_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__3);
v___x_902_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___x_900_);
return v___x_902_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__6);
v___x_904_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__7);
v___x_906_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__8);
v___x_908_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
return v___x_908_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons(void){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons___closed__9);
return v___x_909_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_910_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two;
v___x_911_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_912_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_LessThan(v___x_911_, v___x_910_);
return v___x_912_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_914_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary(v___x_913_);
return v___x_914_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil;
v___x_916_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_917_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_916_, v___x_915_);
return v___x_917_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2);
v___x_919_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1);
v___x_920_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v___x_918_);
return v___x_920_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_921_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__3);
v___x_922_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0);
v___x_923_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v___x_921_);
return v___x_923_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__4);
v___x_925_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_925_, 0, v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base(void){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__5);
return v___x_926_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__0);
v___x_928_ = lp_FOL_neg(v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1(void){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_929_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two;
v___x_930_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_931_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div(v___x_930_, v___x_929_);
return v___x_931_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2(void){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__1);
v___x_933_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__binary(v___x_932_);
return v___x_933_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_934_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two;
v___x_935_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_936_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod(v___x_935_, v___x_934_);
return v___x_936_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_937_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil;
v___x_938_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__3);
v___x_939_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_938_, v___x_937_);
return v___x_939_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_940_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__4);
v___x_941_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__2);
v___x_942_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(v___x_941_, v___x_940_);
return v___x_942_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_943_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__5);
v___x_944_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__1);
v___x_945_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
lean_ctor_set(v___x_945_, 1, v___x_943_);
return v___x_945_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__6);
v___x_947_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__0);
v___x_948_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_947_);
lean_ctor_set(v___x_948_, 1, v___x_946_);
return v___x_948_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__7);
v___x_950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec(void){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec___closed__8);
return v___x_951_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_952_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten;
v___x_953_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_954_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_LessThan(v___x_953_, v___x_952_);
return v___x_954_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_956_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10(v___x_955_);
return v___x_956_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base___closed__2);
v___x_958_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1);
v___x_959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_957_);
return v___x_959_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__2);
v___x_961_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0);
v___x_962_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
lean_ctor_set(v___x_962_, 1, v___x_960_);
return v___x_962_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__3);
v___x_964_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base(void){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__4);
return v___x_965_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__0);
v___x_967_ = lp_FOL_neg(v___x_966_);
return v___x_967_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten;
v___x_969_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_970_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__div(v___x_969_, v___x_968_);
return v___x_970_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__1);
v___x_972_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_to__base10(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_973_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten;
v___x_974_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x;
v___x_975_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__mod(v___x_974_, v___x_973_);
return v___x_975_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_976_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil;
v___x_977_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__3);
v___x_978_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_977_, v___x_976_);
return v___x_978_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_979_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__4);
v___x_980_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__2);
v___x_981_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_l__append(v___x_980_, v___x_979_);
return v___x_981_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__5);
v___x_983_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base___closed__1);
v___x_984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
return v___x_984_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_985_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__6);
v___x_986_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__0);
v___x_987_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_985_);
return v___x_987_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__7);
v___x_989_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec(void){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec___closed__8);
return v___x_990_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = lean_box(0);
v___x_992_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec;
v___x_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___x_991_);
return v___x_993_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__0);
v___x_995_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base;
v___x_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_994_);
return v___x_996_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__1);
v___x_998_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec;
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_997_);
return v___x_999_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__2);
v___x_1001_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base;
v___x_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v___x_1000_);
return v___x_1002_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__3);
v___x_1004_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons;
v___x_1005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_1003_);
return v___x_1005_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__4);
v___x_1007_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil;
v___x_1008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__5);
v___x_1010_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div;
v___x_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set(v___x_1011_, 1, v___x_1009_);
return v___x_1011_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__6);
v___x_1013_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ;
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__7);
v___x_1016_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero;
v___x_1017_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_1015_);
return v___x_1017_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__8);
v___x_1019_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ;
v___x_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
lean_ctor_set(v___x_1020_, 1, v___x_1018_);
return v___x_1020_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1021_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__9);
v___x_1022_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero;
v___x_1023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
return v___x_1023_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__10);
v___x_1025_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ;
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
lean_ctor_set(v___x_1026_, 1, v___x_1024_);
return v___x_1026_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1027_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__11);
v___x_1028_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero;
v___x_1029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1027_);
return v___x_1029_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__12);
v___x_1031_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ;
v___x_1032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
lean_ctor_set(v___x_1032_, 1, v___x_1030_);
return v___x_1032_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__13);
v___x_1034_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero;
v___x_1035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
lean_ctor_set(v___x_1035_, 1, v___x_1033_);
return v___x_1035_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList(void){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList___closed__14);
return v___x_1036_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic(uint8_t builtin) {
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
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__pred__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__add__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__mult__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__zero);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__sub__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__euclidean__div);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__two);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_n__ten);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__nil);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__append__cons);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__base);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__binary__rec);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__base);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ax__to__base10__rec);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_Arithmetic_ArithmeticAxiomsList);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
