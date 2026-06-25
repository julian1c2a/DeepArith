// Lean compiler output
// Module: DeepArithmetic.Syntax.Peano
// Imports: public import Init public import FOL.FOL public import TheoryFramework.Theory public import TheoryFramework.Instances.FOL
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
lean_object* lp_FOL_neg(lean_object*);
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
lean_object* lp_FOL_substFormula(lean_object*, lean_object*, lean_object*);
lean_object* lp_FOL_liftFormula(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_inductionSchema(lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory;
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ___closed__0));
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
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x));
x_2 = lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
x_2 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero));
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__1);
x_2 = lp_FOL_neg(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__2);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__3);
return x_1;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_y));
x_2 = lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ(x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__2));
x_2 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__1);
x_3 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__3);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__4);
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_succ__inj___closed__5);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_inductionSchema(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero));
lean_inc(x_1);
x_4 = lp_FOL_substFormula(x_2, x_3, x_1);
x_5 = lp_FOL_liftFormula(x_2, x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = ((lean_object*)(lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_x));
lean_inc(x_5);
x_8 = lp_FOL_substFormula(x_6, x_7, x_5);
x_9 = lean_obj_once(&lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0, &lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0_once, _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_zero__ne__succ___closed__0);
x_10 = lp_FOL_substFormula(x_6, x_9, x_5);
lean_inc(x_8);
x_11 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_8);
x_14 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
static lean_object* _init_lp_DeepArithmetic_DeepArithmetic_Syntax_Peano_PeanoTheory(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
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
