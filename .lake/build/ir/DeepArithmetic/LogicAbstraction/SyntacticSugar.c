// Lean compiler output
// Module: DeepArithmetic.LogicAbstraction.SyntacticSugar
// Imports: public import Init public meta import Init public import FOL public import DeepArithmetic.LogicAbstraction.SetTheory
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(lean_object*, lean_object*);
lean_object* lp_FOL_iff(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(lean_object*);
lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_t__singleton(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_K__pair(lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "DeepArithmetic"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LogicAbstraction"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "SyntacticSugar"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 9, .m_data = "term⟪_,_⟫"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 171, 60, 97, 183, 31, 169, 254)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 86, 119, 212, 236, 2, 224, 62)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__5_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟪"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__7_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__8_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__9_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__10_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__8_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__12_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__14 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__14_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__12_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__14_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__15 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__15_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__15_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__16 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__16_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟫"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__17 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__17_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__17_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__18 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__18_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__16_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__18_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__19 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__19_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__19_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__20 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__20_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__20_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__0_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__2_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "t_tup"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(134, 217, 175, 36, 101, 73, 7, 122)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__7_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SetTheory"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__8_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(50, 111, 234, 102, 173, 34, 135, 10)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__10_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__11_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__12_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__13 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__13_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__1_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 9, .m_data = "term⟦_,_⟧"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 171, 60, 97, 183, 31, 169, 254)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 249, 149, 228, 200, 207, 73, 175)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟦"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__2_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__3_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__4_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__14_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__5_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__5_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__6_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟧"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__7_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__7_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__8_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__6_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__8_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__9_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__10_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__10_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "l_cons"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 41, 138, 241, 150, 174, 146, 12)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__2_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 118, 219, 71, 89, 188, 205, 67)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_0),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 156, 80, 30, 207, 235, 186, 204)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_1),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(191, 82, 6, 57, 160, 26, 25, 61)}};
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value_aux_2),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 236, 86, 80, 88, 16, 17, 95)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__4_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__5_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__l__cons__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__l__cons__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat___boxed(lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_t__singleton(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
lean_inc_ref(v_a_1_);
v___x_2_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(v_a_1_, v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_K__pair(lean_object* v_a_3_, lean_object* v_b_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
lean_inc_ref_n(v_a_3_, 2);
v___x_5_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(v_a_3_, v_a_3_);
v___x_6_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(v_a_3_, v_b_4_);
v___x_7_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_t__pair(v___x_5_, v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__5));
v___x_67_ = l_String_toRawSubstring_x27(v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1(lean_object* v_x_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4));
lean_inc(v_x_85_);
v___x_89_ = l_Lean_Syntax_isOfKind(v_x_85_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v_x_85_);
v___x_90_ = lean_box(1);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_a_87_);
return v___x_91_;
}
else
{
lean_object* v_quotContext_92_; lean_object* v_currMacroScope_93_; lean_object* v_ref_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_quotContext_92_ = lean_ctor_get(v_a_86_, 1);
v_currMacroScope_93_ = lean_ctor_get(v_a_86_, 2);
v_ref_94_ = lean_ctor_get(v_a_86_, 5);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_x_85_, v___x_95_);
v___x_97_ = lean_unsigned_to_nat(3u);
v___x_98_ = l_Lean_Syntax_getArg(v_x_85_, v___x_97_);
lean_dec(v_x_85_);
v___x_99_ = 0;
v___x_100_ = l_Lean_SourceInfo_fromRef(v_ref_94_, v___x_99_);
v___x_101_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4));
v___x_102_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__6);
v___x_103_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__7));
lean_inc(v_currMacroScope_93_);
lean_inc(v_quotContext_92_);
v___x_104_ = l_Lean_addMacroScope(v_quotContext_92_, v___x_103_, v_currMacroScope_93_);
v___x_105_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__11));
lean_inc_n(v___x_100_, 2);
v___x_106_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_106_, 0, v___x_100_);
lean_ctor_set(v___x_106_, 1, v___x_102_);
lean_ctor_set(v___x_106_, 2, v___x_104_);
lean_ctor_set(v___x_106_, 3, v___x_105_);
v___x_107_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__13));
v___x_108_ = l_Lean_Syntax_node2(v___x_100_, v___x_107_, v___x_96_, v___x_98_);
v___x_109_ = l_Lean_Syntax_node2(v___x_100_, v___x_101_, v___x_106_, v___x_108_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v_a_87_);
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___boxed(lean_object* v_x_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1(v_x_111_, v_a_112_, v_a_113_);
lean_dec_ref(v_a_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1(lean_object* v_x_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4));
lean_inc(v_x_118_);
v___x_122_ = l_Lean_Syntax_isOfKind(v_x_118_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; 
lean_dec(v_x_118_);
v___x_123_ = lean_box(0);
v___x_124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v_a_120_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = l_Lean_Syntax_getArg(v_x_118_, v___x_125_);
v___x_127_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__1));
lean_inc(v___x_126_);
v___x_128_ = l_Lean_Syntax_isOfKind(v___x_126_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
lean_dec(v___x_126_);
lean_dec(v_x_118_);
v___x_129_ = lean_box(0);
v___x_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v_a_120_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = l_Lean_Syntax_getArg(v_x_118_, v___x_131_);
lean_dec(v_x_118_);
v___x_133_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_132_);
v___x_134_ = l_Lean_Syntax_matchesNull(v___x_132_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec(v___x_132_);
lean_dec(v___x_126_);
v___x_135_ = lean_box(0);
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_a_120_);
return v___x_136_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v_ref_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_137_ = l_Lean_Syntax_getArg(v___x_132_, v___x_125_);
v___x_138_ = l_Lean_Syntax_getArg(v___x_132_, v___x_131_);
lean_dec(v___x_132_);
v_ref_139_ = l_Lean_replaceRef(v___x_126_, v_a_119_);
lean_dec(v___x_126_);
v___x_140_ = 0;
v___x_141_ = l_Lean_SourceInfo_fromRef(v_ref_139_, v___x_140_);
lean_dec(v_ref_139_);
v___x_142_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__4));
v___x_143_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__7));
lean_inc_n(v___x_141_, 3);
v___x_144_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_141_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13));
v___x_146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_141_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__17));
v___x_148_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_141_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = l_Lean_Syntax_node5(v___x_141_, v___x_142_, v___x_144_, v___x_137_, v___x_146_, v___x_138_, v___x_148_);
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v_a_120_);
return v___x_150_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___boxed(lean_object* v_x_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1(v_x_151_, v_a_152_, v_a_153_);
lean_dec(v_a_152_);
return v_res_154_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__0));
v___x_190_ = l_String_toRawSubstring_x27(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1(lean_object* v_x_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1));
lean_inc(v_x_204_);
v___x_208_ = l_Lean_Syntax_isOfKind(v_x_204_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
lean_dec(v_x_204_);
v___x_209_ = lean_box(1);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v_a_206_);
return v___x_210_;
}
else
{
lean_object* v_quotContext_211_; lean_object* v_currMacroScope_212_; lean_object* v_ref_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_quotContext_211_ = lean_ctor_get(v_a_205_, 1);
v_currMacroScope_212_ = lean_ctor_get(v_a_205_, 2);
v_ref_213_ = lean_ctor_get(v_a_205_, 5);
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = l_Lean_Syntax_getArg(v_x_204_, v___x_214_);
v___x_216_ = lean_unsigned_to_nat(3u);
v___x_217_ = l_Lean_Syntax_getArg(v_x_204_, v___x_216_);
lean_dec(v_x_204_);
v___x_218_ = 0;
v___x_219_ = l_Lean_SourceInfo_fromRef(v_ref_213_, v___x_218_);
v___x_220_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4));
v___x_221_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1, &lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__1);
v___x_222_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__2));
lean_inc(v_currMacroScope_212_);
lean_inc(v_quotContext_211_);
v___x_223_ = l_Lean_addMacroScope(v_quotContext_211_, v___x_222_, v_currMacroScope_212_);
v___x_224_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___closed__5));
lean_inc_n(v___x_219_, 2);
v___x_225_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_225_, 0, v___x_219_);
lean_ctor_set(v___x_225_, 1, v___x_221_);
lean_ctor_set(v___x_225_, 2, v___x_223_);
lean_ctor_set(v___x_225_, 3, v___x_224_);
v___x_226_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__13));
v___x_227_ = l_Lean_Syntax_node2(v___x_219_, v___x_226_, v___x_215_, v___x_217_);
v___x_228_ = l_Lean_Syntax_node2(v___x_219_, v___x_220_, v___x_225_, v___x_227_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v_a_206_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1___boxed(lean_object* v_x_230_, lean_object* v_a_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27e6___x2c___u27e7__1(v_x_230_, v_a_231_, v_a_232_);
lean_dec_ref(v_a_231_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__l__cons__1(lean_object* v_x_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______macroRules__DeepArithmetic__LogicAbstraction__SyntacticSugar__term_u27ea___x2c___u27eb__1___closed__4));
lean_inc(v_x_234_);
v___x_238_ = l_Lean_Syntax_isOfKind(v_x_234_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec(v_x_234_);
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v_a_236_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = l_Lean_Syntax_getArg(v_x_234_, v___x_241_);
v___x_243_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__t__tup__1___closed__1));
lean_inc(v___x_242_);
v___x_244_ = l_Lean_Syntax_isOfKind(v___x_242_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
lean_dec(v___x_242_);
lean_dec(v_x_234_);
v___x_245_ = lean_box(0);
v___x_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v_a_236_);
return v___x_246_;
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_247_ = lean_unsigned_to_nat(1u);
v___x_248_ = l_Lean_Syntax_getArg(v_x_234_, v___x_247_);
lean_dec(v_x_234_);
v___x_249_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_248_);
v___x_250_ = l_Lean_Syntax_matchesNull(v___x_248_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec(v___x_248_);
lean_dec(v___x_242_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_a_236_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v_ref_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_253_ = l_Lean_Syntax_getArg(v___x_248_, v___x_241_);
v___x_254_ = l_Lean_Syntax_getArg(v___x_248_, v___x_247_);
lean_dec(v___x_248_);
v_ref_255_ = l_Lean_replaceRef(v___x_242_, v_a_235_);
lean_dec(v___x_242_);
v___x_256_ = 0;
v___x_257_ = l_Lean_SourceInfo_fromRef(v_ref_255_, v___x_256_);
lean_dec(v_ref_255_);
v___x_258_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__1));
v___x_259_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__2));
lean_inc_n(v___x_257_, 3);
v___x_260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_257_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27ea___x2c___u27eb___closed__13));
v___x_262_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_257_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_term_u27e6___x2c___u27e7___closed__7));
v___x_264_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_257_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = l_Lean_Syntax_node5(v___x_257_, v___x_258_, v___x_260_, v___x_253_, v___x_262_, v___x_254_, v___x_264_);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_a_236_);
return v___x_266_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__l__cons__1___boxed(lean_object* v_x_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar___aux__DeepArithmetic__LogicAbstraction__SyntacticSugar______unexpand__DeepArithmetic__LogicAbstraction__SetTheory__l__cons__1(v_x_267_, v_a_268_, v_a_269_);
lean_dec(v_a_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat(lean_object* v_x_271_){
_start:
{
lean_object* v_zero_272_; uint8_t v_isZero_273_; 
v_zero_272_ = lean_unsigned_to_nat(0u);
v_isZero_273_ = lean_nat_dec_eq(v_x_271_, v_zero_272_);
if (v_isZero_273_ == 1)
{
lean_object* v___x_274_; 
v___x_274_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__zero;
return v___x_274_;
}
else
{
lean_object* v_one_275_; lean_object* v_n_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_one_275_ = lean_unsigned_to_nat(1u);
v_n_276_ = lean_nat_sub(v_x_271_, v_one_275_);
v___x_277_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat(v_n_276_);
lean_dec(v_n_276_);
v___x_278_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_n__succ(v___x_277_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat___boxed(lean_object* v_x_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_inject__nat(v_x_279_);
lean_dec(v_x_279_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg(lean_object* v_A_283_, lean_object* v_P_284_, lean_object* v_Z_285_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_286_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg___closed__0));
v___x_287_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_286_, v_Z_285_);
v___x_288_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory_In(v___x_286_, v_A_283_);
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v_P_284_);
v___x_290_ = lp_FOL_iff(v___x_287_, v___x_289_);
v___x_291_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula(lean_object* v_varIdx_292_, lean_object* v_A_293_, lean_object* v_P_294_, lean_object* v_Z_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___redArg(v_A_293_, v_P_294_, v_Z_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula___boxed(lean_object* v_varIdx_297_, lean_object* v_A_298_, lean_object* v_P_299_, lean_object* v_Z_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = lp_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar_set__comprehension__formula(v_varIdx_297_, v_A_298_, v_P_299_, v_Z_300_);
lean_dec(v_varIdx_297_);
return v_res_301_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SyntacticSugar(uint8_t builtin) {
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
res = initialize_DeepArithmetic_DeepArithmetic_LogicAbstraction_SetTheory(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
