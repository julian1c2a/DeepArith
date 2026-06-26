// Lean compiler output
// Module: DeepArithmetic.Syntax.Trees
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
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "emptyTree"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__1_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree___closed__1_value;
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "node"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsTree"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(lean_object*);
static const lean_string_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsElem"};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem___closed__0_value;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem(lean_object*);
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5___closed__0_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v6___closed__0 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v6___closed__0_value;
LEAN_EXPORT const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v6 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v6___closed__0_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__8 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__8_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__9 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__9_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3___closed__0_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0___closed__0_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__10 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__10_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__9_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__10_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__11 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__11_value;
static const lean_ctor_object lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__8_value),((lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__11_value)}};
static const lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__12 = (const lean_object*)&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__12_value;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19;
static lean_once_cell_t lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_treeInductionSchema(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_TreeTheory;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node(lean_object* v_h_7_, lean_object* v_l_8_, lean_object* v_r_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_10_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node___closed__0));
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_12_, 0, v_r_9_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v_l_8_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_14_, 0, v_h_7_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_10_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(lean_object* v_x_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_18_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree___closed__0));
v___x_19_ = lean_box(0);
v___x_20_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_20_, 0, v_x_17_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
v___x_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_18_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem(lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_24_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem___closed__0));
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
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0));
v___x_50_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0));
v___x_52_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__1);
v___x_54_ = lp_FOL_neg(v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__2);
v___x_56_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0);
v___x_57_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___x_55_);
return v___x_57_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__3);
v___x_59_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__4);
return v___x_60_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree));
v___x_62_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree(void){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree___closed__0);
return v___x_63_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2));
v___x_65_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1));
v___x_67_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0);
v___x_69_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__1);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__2);
v___x_72_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__0);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0));
v___x_75_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1));
v___x_76_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v2));
v___x_77_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node(v___x_76_, v___x_75_, v___x_74_);
return v___x_77_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4);
v___x_79_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_78_);
return v___x_79_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__5);
v___x_81_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3);
v___x_82_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__6);
v___x_84_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__7);
v___x_86_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__8);
v___x_88_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__9);
return v___x_89_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4);
v___x_91_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree));
v___x_92_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__0);
v___x_94_ = lp_FOL_neg(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__1);
v___x_96_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3);
v___x_97_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__2);
v___x_99_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__3);
v___x_101_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__4);
v___x_103_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node___closed__5);
return v___x_104_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5));
v___x_106_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isElem(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4));
v___x_108_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3));
v___x_110_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_isTree(v___x_109_);
return v___x_110_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__2);
v___x_112_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__1);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__3);
v___x_115_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__0);
v___x_116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3);
v___x_118_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__4);
v___x_119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_120_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v3));
v___x_121_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v4));
v___x_122_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v5));
v___x_123_ = lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node(v___x_122_, v___x_121_, v___x_120_);
return v___x_123_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4);
v___x_125_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__6);
v___x_126_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__12));
v___x_143_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__7);
v___x_144_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__13);
v___x_146_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__5);
v___x_147_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
lean_ctor_set(v___x_147_, 1, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__14);
v___x_149_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__15);
v___x_151_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__16);
v___x_153_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__17);
v___x_155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__18);
v___x_157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__19);
v___x_159_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj(void){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj___closed__20);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_treeInductionSchema(lean_object* v_00_u03c6_161_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v_baseCase_164_; lean_object* v_phi__lifted1_165_; lean_object* v___x_166_; lean_object* v_phi__lifted3_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v_phi__l_170_; lean_object* v___x_171_; lean_object* v_phi__r_172_; lean_object* v___x_173_; lean_object* v_phi__node_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v_indStepBody_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v_indStep_182_; lean_object* v___x_183_; lean_object* v_phi__t_184_; lean_object* v___x_185_; lean_object* v_conclusion_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree));
lean_inc(v_00_u03c6_161_);
v_baseCase_164_ = lp_FOL_substFormula(v___x_162_, v___x_163_, v_00_u03c6_161_);
v_phi__lifted1_165_ = lp_FOL_liftFormula(v___x_162_, v_00_u03c6_161_);
lean_inc(v_phi__lifted1_165_);
v___x_166_ = lp_FOL_liftFormula(v___x_162_, v_phi__lifted1_165_);
v_phi__lifted3_167_ = lp_FOL_liftFormula(v___x_162_, v___x_166_);
v___x_168_ = lean_unsigned_to_nat(3u);
v___x_169_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v1));
lean_inc_n(v_phi__lifted3_167_, 2);
v_phi__l_170_ = lp_FOL_substFormula(v___x_168_, v___x_169_, v_phi__lifted3_167_);
v___x_171_ = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_v0));
v_phi__r_172_ = lp_FOL_substFormula(v___x_168_, v___x_171_, v_phi__lifted3_167_);
v___x_173_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__4);
v_phi__node_174_ = lp_FOL_substFormula(v___x_168_, v___x_173_, v_phi__lifted3_167_);
v___x_175_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint___closed__0);
v___x_176_ = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree___closed__3);
v___x_177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_177_, 0, v_phi__l_170_);
lean_ctor_set(v___x_177_, 1, v_phi__r_172_);
v___x_178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v_indStepBody_179_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_indStepBody_179_, 0, v___x_178_);
lean_ctor_set(v_indStepBody_179_, 1, v_phi__node_174_);
v___x_180_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_180_, 0, v_indStepBody_179_);
v___x_181_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
v_indStep_182_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_indStep_182_, 0, v___x_181_);
v___x_183_ = lean_unsigned_to_nat(1u);
v_phi__t_184_ = lp_FOL_substFormula(v___x_183_, v___x_171_, v_phi__lifted1_165_);
v___x_185_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_175_);
lean_ctor_set(v___x_185_, 1, v_phi__t_184_);
v_conclusion_186_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_conclusion_186_, 0, v___x_185_);
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v_baseCase_164_);
lean_ctor_set(v___x_187_, 1, v_indStep_182_);
v___x_188_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v_conclusion_186_);
return v___x_188_;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_TreeTheory(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
return v___x_189_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Theory(uint8_t builtin);
lean_object* initialize_FOL_TheoryFramework_Instances_FOL(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(uint8_t builtin) {
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
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_tree__elem__disjoint);
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__isTree);
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__isTree);
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_emptyTree__ne__node);
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_node__inj);
lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_TreeTheory = _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_TreeTheory();
lean_mark_persistent(lp_DeepArithmetic_DeepArithmetic_Syntax_Trees_TreeTheory);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
