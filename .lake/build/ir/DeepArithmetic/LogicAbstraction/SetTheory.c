// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.SetTheory
// Imports: public import Init public meta import Init public import FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_FOL_liftTerm(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_FOL_neg(lean_object*);
lean_object* lp_FOL_iff(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_FOL_liftFormula(lean_object*, lean_object*);
lean_object* lp_FOL_substFormula(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "DeepArithmetic"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LogicAbstraction"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SetTheory"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∈_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(224, 162, 122, 47, 245, 211, 174, 2)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__5_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__6_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " ∈_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__7_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__8_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__10_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__8_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__12_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__12_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__13 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__13_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__13_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "In"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(224, 207, 68, 212, 254, 87, 139, 64)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 58, 94, 56, 254, 168, 88, 22)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__10_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__12_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__1_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_Subset(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_⊆_s_"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(68, 157, 245, 10, 148, 53, 224, 154)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " ⊆_s "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__4_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s__ = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__5_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Subset"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 82, 82, 84, 163, 206, 185, 124)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 180, 169, 211, 128, 174, 56, 215)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__Subset__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__Subset__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pair"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "union"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "empty"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty___closed__1_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "n_zero"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "n_succ"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__3_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tup"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "l_nil"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "l_cons"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(lean_object*, lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction(lean_object*);
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_SetTheoryAxioms;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(lean_object* v_t1_14_, lean_object* v_t2_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_16_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In___closed__0));
v___x_17_ = lean_box(0);
v___x_18_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_18_, 0, v_t2_15_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___x_19_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_19_, 0, v_t1_14_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_20_, 0, v___x_16_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__5));
v___x_63_ = l_String_toRawSubstring_x27(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1(lean_object* v_x_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4));
lean_inc(v_x_80_);
v___x_84_ = l_Lean_Syntax_isOfKind(v_x_80_, v___x_83_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec(v_x_80_);
v___x_85_ = lean_box(1);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v_a_82_);
return v___x_86_;
}
else
{
lean_object* v_quotContext_87_; lean_object* v_currMacroScope_88_; lean_object* v_ref_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_quotContext_87_ = lean_ctor_get(v_a_81_, 1);
v_currMacroScope_88_ = lean_ctor_get(v_a_81_, 2);
v_ref_89_ = lean_ctor_get(v_a_81_, 5);
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = l_Lean_Syntax_getArg(v_x_80_, v___x_90_);
v___x_92_ = lean_unsigned_to_nat(2u);
v___x_93_ = l_Lean_Syntax_getArg(v_x_80_, v___x_92_);
lean_dec(v_x_80_);
v___x_94_ = 0;
v___x_95_ = l_Lean_SourceInfo_fromRef(v_ref_89_, v___x_94_);
v___x_96_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4));
v___x_97_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__6);
v___x_98_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__7));
lean_inc(v_currMacroScope_88_);
lean_inc(v_quotContext_87_);
v___x_99_ = l_Lean_addMacroScope(v_quotContext_87_, v___x_98_, v_currMacroScope_88_);
v___x_100_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__10));
lean_inc_n(v___x_95_, 2);
v___x_101_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_101_, 0, v___x_95_);
lean_ctor_set(v___x_101_, 1, v___x_97_);
lean_ctor_set(v___x_101_, 2, v___x_99_);
lean_ctor_set(v___x_101_, 3, v___x_100_);
v___x_102_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__12));
v___x_103_ = l_Lean_Syntax_node2(v___x_95_, v___x_102_, v___x_91_, v___x_93_);
v___x_104_ = l_Lean_Syntax_node2(v___x_95_, v___x_96_, v___x_101_, v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v_a_82_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___boxed(lean_object* v_x_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1(v_x_106_, v_a_107_, v_a_108_);
lean_dec_ref(v_a_107_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1(lean_object* v_x_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4));
lean_inc(v_x_113_);
v___x_117_ = l_Lean_Syntax_isOfKind(v_x_113_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec(v_x_113_);
v___x_118_ = lean_box(0);
v___x_119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v_a_115_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_120_ = lean_unsigned_to_nat(0u);
v___x_121_ = l_Lean_Syntax_getArg(v_x_113_, v___x_120_);
v___x_122_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__1));
lean_inc(v___x_121_);
v___x_123_ = l_Lean_Syntax_isOfKind(v___x_121_, v___x_122_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; 
lean_dec(v___x_121_);
lean_dec(v_x_113_);
v___x_124_ = lean_box(0);
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v_a_115_);
return v___x_125_;
}
else
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = l_Lean_Syntax_getArg(v_x_113_, v___x_126_);
lean_dec(v_x_113_);
v___x_128_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_127_);
v___x_129_ = l_Lean_Syntax_matchesNull(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_dec(v___x_127_);
lean_dec(v___x_121_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v_a_115_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v_ref_134_; uint8_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_132_ = l_Lean_Syntax_getArg(v___x_127_, v___x_120_);
v___x_133_ = l_Lean_Syntax_getArg(v___x_127_, v___x_126_);
lean_dec(v___x_127_);
v_ref_134_ = l_Lean_replaceRef(v___x_121_, v_a_114_);
lean_dec(v___x_121_);
v___x_135_ = 0;
v___x_136_ = l_Lean_SourceInfo_fromRef(v_ref_134_, v___x_135_);
lean_dec(v_ref_134_);
v___x_137_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__4));
v___x_138_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2208__s___00__closed__7));
lean_inc(v___x_136_);
v___x_139_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_136_);
lean_ctor_set(v___x_139_, 1, v___x_138_);
v___x_140_ = l_Lean_Syntax_node3(v___x_136_, v___x_137_, v___x_132_, v___x_139_, v___x_133_);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_a_115_);
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___boxed(lean_object* v_x_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1(v_x_142_, v_a_143_, v_a_144_);
lean_dec(v_a_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_Subset(lean_object* v_t1_146_, lean_object* v_t2_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_148_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lp_FOL_liftTerm(v___x_149_, v_t1_146_);
v___x_151_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_148_, v___x_150_);
v___x_152_ = lp_FOL_liftTerm(v___x_149_, v_t2_147_);
v___x_153_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_148_, v___x_152_);
v___x_154_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_151_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__0));
v___x_177_ = l_String_toRawSubstring_x27(v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1(lean_object* v_x_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1));
lean_inc(v_x_191_);
v___x_195_ = l_Lean_Syntax_isOfKind(v_x_191_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec(v_x_191_);
v___x_196_ = lean_box(1);
v___x_197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set(v___x_197_, 1, v_a_193_);
return v___x_197_;
}
else
{
lean_object* v_quotContext_198_; lean_object* v_currMacroScope_199_; lean_object* v_ref_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_quotContext_198_ = lean_ctor_get(v_a_192_, 1);
v_currMacroScope_199_ = lean_ctor_get(v_a_192_, 2);
v_ref_200_ = lean_ctor_get(v_a_192_, 5);
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = l_Lean_Syntax_getArg(v_x_191_, v___x_201_);
v___x_203_ = lean_unsigned_to_nat(2u);
v___x_204_ = l_Lean_Syntax_getArg(v_x_191_, v___x_203_);
lean_dec(v_x_191_);
v___x_205_ = 0;
v___x_206_ = l_Lean_SourceInfo_fromRef(v_ref_200_, v___x_205_);
v___x_207_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4));
v___x_208_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__1);
v___x_209_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__2));
lean_inc(v_currMacroScope_199_);
lean_inc(v_quotContext_198_);
v___x_210_ = l_Lean_addMacroScope(v_quotContext_198_, v___x_209_, v_currMacroScope_199_);
v___x_211_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___closed__5));
lean_inc_n(v___x_206_, 2);
v___x_212_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_212_, 0, v___x_206_);
lean_ctor_set(v___x_212_, 1, v___x_208_);
lean_ctor_set(v___x_212_, 2, v___x_210_);
lean_ctor_set(v___x_212_, 3, v___x_211_);
v___x_213_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__12));
v___x_214_ = l_Lean_Syntax_node2(v___x_206_, v___x_213_, v___x_202_, v___x_204_);
v___x_215_ = l_Lean_Syntax_node2(v___x_206_, v___x_207_, v___x_212_, v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v_a_193_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1___boxed(lean_object* v_x_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2286__s____1(v_x_217_, v_a_218_, v_a_219_);
lean_dec_ref(v_a_218_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__Subset__1(lean_object* v_x_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______macroRules__DeepArithmetic__LogicAbstraction__SetTheory__term___u2208__s____1___closed__4));
lean_inc(v_x_221_);
v___x_225_ = l_Lean_Syntax_isOfKind(v_x_221_, v___x_224_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec(v_x_221_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v_a_223_);
return v___x_227_;
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = l_Lean_Syntax_getArg(v_x_221_, v___x_228_);
v___x_230_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__In__1___closed__1));
lean_inc(v___x_229_);
v___x_231_ = l_Lean_Syntax_isOfKind(v___x_229_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec(v___x_229_);
lean_dec(v_x_221_);
v___x_232_ = lean_box(0);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v_a_223_);
return v___x_233_;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_234_ = lean_unsigned_to_nat(1u);
v___x_235_ = l_Lean_Syntax_getArg(v_x_221_, v___x_234_);
lean_dec(v_x_221_);
v___x_236_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_235_);
v___x_237_ = l_Lean_Syntax_matchesNull(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v___x_235_);
lean_dec(v___x_229_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v_a_223_);
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_ref_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_240_ = l_Lean_Syntax_getArg(v___x_235_, v___x_228_);
v___x_241_ = l_Lean_Syntax_getArg(v___x_235_, v___x_234_);
lean_dec(v___x_235_);
v_ref_242_ = l_Lean_replaceRef(v___x_229_, v_a_222_);
lean_dec(v___x_229_);
v___x_243_ = 0;
v___x_244_ = l_Lean_SourceInfo_fromRef(v_ref_242_, v___x_243_);
lean_dec(v_ref_242_);
v___x_245_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__1));
v___x_246_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_term___u2286__s___00__closed__2));
lean_inc(v___x_244_);
v___x_247_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_244_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = l_Lean_Syntax_node3(v___x_244_, v___x_245_, v___x_240_, v___x_247_, v___x_241_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v_a_223_);
return v___x_249_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__Subset__1___boxed(lean_object* v_x_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory___aux__DeepArithmetic__LogicAbstraction__SetTheory______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__Subset__1(v_x_250_, v_a_251_, v_a_252_);
lean_dec(v_a_251_);
return v_res_253_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z));
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lp_FOL_liftTerm(v___x_255_, v___x_254_);
return v___x_256_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0);
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lp_FOL_liftTerm(v___x_258_, v___x_257_);
return v___x_259_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_261_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_262_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_261_, v___x_260_);
return v___x_262_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w));
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lp_FOL_liftTerm(v___x_264_, v___x_263_);
return v___x_265_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lp_FOL_liftTerm(v___x_267_, v___x_266_);
return v___x_268_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_269_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4);
v___x_270_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_271_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_270_, v___x_269_);
return v___x_271_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__5);
v___x_273_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__2);
v___x_274_ = lp_FOL_iff(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__6);
v___x_276_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__3);
v___x_278_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0);
v___x_279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__8);
v___x_281_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__7);
v___x_282_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___x_280_);
return v___x_282_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__9);
v___x_284_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__10);
v___x_286_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__11);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(lean_object* v_a_289_, lean_object* v_b_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair___closed__0));
v___x_292_ = lean_box(0);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v_b_290_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v_a_289_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_291_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4);
v___x_297_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_298_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__0);
v___x_300_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_301_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_303_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_304_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
return v___x_304_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__4);
v___x_306_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__3);
v___x_309_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__2);
v___x_310_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
lean_ctor_set(v___x_310_, 1, v___x_308_);
return v___x_310_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__4);
v___x_312_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__1);
v___x_313_ = lp_FOL_iff(v___x_312_, v___x_311_);
return v___x_313_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__5);
v___x_315_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__6);
v___x_317_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__7);
v___x_319_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair(void){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair___closed__8);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union(lean_object* v_a_322_){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_323_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union___closed__0));
v___x_324_ = lean_box(0);
v___x_325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_325_, 0, v_a_322_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_323_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
return v___x_326_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__0);
v___x_328_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__union(v___x_327_);
return v___x_328_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1(void){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__0);
v___x_330_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_331_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_330_, v___x_329_);
return v___x_331_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lp_FOL_liftTerm(v___x_333_, v___x_332_);
return v___x_334_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_336_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__2);
v___x_337_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_336_, v___x_335_);
return v___x_337_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_339_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_340_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_339_, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5(void){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__4);
v___x_342_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__3);
v___x_343_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
return v___x_343_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__5);
v___x_345_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__6);
v___x_347_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__1);
v___x_348_ = lp_FOL_iff(v___x_347_, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__7);
v___x_350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__8);
v___x_352_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union(void){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union___closed__9);
return v___x_353_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__empty));
v___x_360_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_361_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_360_, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__0);
v___x_363_ = lp_FOL_neg(v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__1);
v___x_365_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty(void){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty___closed__2);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(lean_object* v_n_373_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ___closed__0));
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v_n_373_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_374_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero));
v___x_379_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_380_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_379_, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__0);
v___x_382_ = lp_FOL_neg(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__1);
v___x_384_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in(void){
_start:
{
lean_object* v___x_385_; 
v___x_385_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in___closed__2);
return v___x_385_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_387_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_386_);
return v___x_387_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_388_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__0);
v___x_389_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_390_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_389_, v___x_388_);
return v___x_390_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_392_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_393_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_392_, v___x_391_);
return v___x_393_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__3));
v___x_398_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__2);
v___x_399_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v___x_397_);
return v___x_399_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__4);
v___x_401_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__1);
v___x_402_ = lp_FOL_iff(v___x_401_, v___x_400_);
return v___x_402_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__5);
v___x_404_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__6);
v___x_406_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in___closed__7);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(lean_object* v_a_409_, lean_object* v_b_410_){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_411_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup___closed__0));
v___x_412_ = lean_box(0);
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v_b_410_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_414_, 0, v_a_409_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_411_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(lean_object* v_h_422_, lean_object* v_t_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_424_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons___closed__0));
v___x_425_ = lean_box(0);
v___x_426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_426_, 0, v_t_423_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_427_, 0, v_h_422_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_424_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_430_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z));
v___x_432_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_433_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_432_, v___x_431_);
return v___x_433_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__1);
v___x_435_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0);
v___x_436_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
lean_ctor_set(v___x_436_, 1, v___x_434_);
return v___x_436_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__2);
v___x_438_ = lp_FOL_neg(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__3);
v___x_440_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__4);
v___x_442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
return v___x_442_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__5);
v___x_444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
return v___x_444_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup(void){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__6);
return v___x_445_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z));
v___x_447_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_448_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_447_, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__0);
v___x_450_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0);
v___x_451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__1);
v___x_453_ = lp_FOL_neg(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__2);
v___x_455_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__3);
v___x_457_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__4);
v___x_459_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list(void){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list___closed__5);
return v___x_460_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_462_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_463_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_462_, v___x_461_);
return v___x_463_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_w));
v___x_465_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_z));
v___x_466_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__cons(v___x_465_, v___x_464_);
return v___x_466_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_467_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__1);
v___x_468_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__0);
v___x_469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v___x_467_);
return v___x_469_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__2);
v___x_471_ = lp_FOL_neg(v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__3);
v___x_473_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__4);
v___x_475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__5);
v___x_477_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__6);
v___x_479_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list(void){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list___closed__7);
return v___x_480_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup___closed__0);
v___x_482_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_l__nil));
v___x_483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__0);
v___x_485_ = lp_FOL_neg(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__1);
v___x_487_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ(void){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ___closed__2);
return v___x_488_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y));
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lp_FOL_liftTerm(v___x_490_, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_493_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0);
v___x_494_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_493_, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__1);
v___x_496_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_497_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_496_, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__0);
v___x_499_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality___closed__1);
v___x_500_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x));
v___x_502_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__3);
v___x_503_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__tup(v___x_502_, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__4);
v___x_505_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__2);
v___x_506_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v___x_504_);
return v___x_506_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__5);
v___x_508_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__6);
v___x_510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__7);
v___x_512_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc(void){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc___closed__8);
return v___x_513_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_514_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0));
v___x_515_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_x___closed__0));
v___x_516_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_515_, v___x_514_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction(lean_object* v_P_517_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v_Px_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v_inner__forall_524_; lean_object* v___x_525_; lean_object* v_outer__forall_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_y___closed__0));
lean_inc_n(v_P_517_, 2);
v___x_520_ = lp_FOL_liftFormula(v___x_518_, v_P_517_);
v_Px_521_ = lp_FOL_substFormula(v___x_518_, v___x_519_, v___x_520_);
v___x_522_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__epsilon__induction___closed__0);
v___x_523_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
lean_ctor_set(v___x_523_, 1, v_P_517_);
v_inner__forall_524_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_inner__forall_524_, 0, v___x_523_);
v___x_525_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_525_, 0, v_inner__forall_524_);
lean_ctor_set(v___x_525_, 1, v_Px_521_);
v_outer__forall_526_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_outer__forall_526_, 0, v___x_525_);
v___x_527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_527_, 0, v_P_517_);
v___x_528_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_528_, 0, v_outer__forall_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
return v___x_528_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_box(0);
v___x_530_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc;
v___x_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
lean_ctor_set(v___x_531_, 1, v___x_529_);
return v___x_531_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__0);
v___x_533_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ;
v___x_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__1);
v___x_536_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list;
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
return v___x_537_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_538_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__2);
v___x_539_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list;
v___x_540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set(v___x_540_, 1, v___x_538_);
return v___x_540_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__3);
v___x_542_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup;
v___x_543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v___x_541_);
return v___x_543_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_544_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__4);
v___x_545_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in;
v___x_546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
lean_ctor_set(v___x_546_, 1, v___x_544_);
return v___x_546_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__5);
v___x_548_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in;
v___x_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
lean_ctor_set(v___x_549_, 1, v___x_547_);
return v___x_549_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__6);
v___x_551_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty;
v___x_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___x_550_);
return v___x_552_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_553_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__7);
v___x_554_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union;
v___x_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___x_553_);
return v___x_555_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__8);
v___x_557_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair;
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
return v___x_558_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_559_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__9);
v___x_560_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality;
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v___x_559_);
return v___x_561_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList(void){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList___closed__10);
return v___x_562_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_SetTheoryAxioms(void){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
return v___x_563_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin) {
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
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__extensionality);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__pair);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__union);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__empty);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__zero__in);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__succ__in);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__tup);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nat__neq__list);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__neq__list);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__nil__neq__succ);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_ax__tup__assoc);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_BaseAxiomsList);
lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_SetTheoryAxioms = _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_SetTheoryAxioms();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_SetTheoryAxioms);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
