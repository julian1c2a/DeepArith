// Lean compiler output
// Module: DeepArithmetic.Semantics.Trees.Connection
// Imports: public import Init public meta import Init public import FOL.FOL public import DeepArithmetic.Syntax.Trees public import DeepArithmetic.Semantics.Trees.System public import DeepArithmetic.Semantics.ManySorted
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
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___redArg(lean_object* v_args_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_){
_start:
{
if (lean_obj_tag(v_args_1_) == 1)
{
lean_object* v_head_4_; 
v_head_4_ = lean_ctor_get(v_args_1_, 0);
if (lean_obj_tag(v_head_4_) == 0)
{
lean_object* v_tail_5_; 
v_tail_5_ = lean_ctor_get(v_args_1_, 1);
if (lean_obj_tag(v_tail_5_) == 1)
{
lean_object* v_head_6_; 
v_head_6_ = lean_ctor_get(v_tail_5_, 0);
if (lean_obj_tag(v_head_6_) == 1)
{
lean_object* v_tail_7_; 
v_tail_7_ = lean_ctor_get(v_tail_5_, 1);
if (lean_obj_tag(v_tail_7_) == 1)
{
lean_object* v_head_8_; 
v_head_8_ = lean_ctor_get(v_tail_7_, 0);
if (lean_obj_tag(v_head_8_) == 1)
{
lean_object* v_tail_9_; 
v_tail_9_ = lean_ctor_get(v_tail_7_, 1);
if (lean_obj_tag(v_tail_9_) == 0)
{
lean_object* v_val_10_; lean_object* v_val_11_; lean_object* v_val_12_; lean_object* v___x_13_; 
lean_inc_ref(v_head_8_);
lean_inc_ref(v_head_6_);
lean_inc_ref(v_head_4_);
lean_dec_ref_known(v_args_1_, 2);
lean_dec(v_h__2_3_);
v_val_10_ = lean_ctor_get(v_head_4_, 0);
lean_inc(v_val_10_);
lean_dec_ref_known(v_head_4_, 1);
v_val_11_ = lean_ctor_get(v_head_6_, 0);
lean_inc(v_val_11_);
lean_dec_ref_known(v_head_6_, 1);
v_val_12_ = lean_ctor_get(v_head_8_, 0);
lean_inc(v_val_12_);
lean_dec_ref_known(v_head_8_, 1);
v___x_13_ = lean_apply_3(v_h__1_2_, v_val_10_, v_val_11_, v_val_12_);
return v___x_13_;
}
else
{
lean_object* v___x_14_; 
lean_dec(v_h__1_2_);
v___x_14_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_14_;
}
}
else
{
lean_object* v___x_15_; 
lean_dec(v_h__1_2_);
v___x_15_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_15_;
}
}
else
{
lean_object* v___x_16_; 
lean_dec(v_h__1_2_);
v___x_16_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_16_;
}
}
else
{
lean_object* v___x_17_; 
lean_dec(v_h__1_2_);
v___x_17_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_17_;
}
}
else
{
lean_object* v___x_18_; 
lean_dec(v_h__1_2_);
v___x_18_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_18_;
}
}
else
{
lean_object* v___x_19_; 
lean_dec(v_h__1_2_);
v___x_19_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_19_;
}
}
else
{
lean_object* v___x_20_; 
lean_dec(v_h__1_2_);
v___x_20_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(lean_object* v_A_21_, lean_object* v_S_22_, lean_object* v_motive_23_, lean_object* v_args_24_, lean_object* v_h__1_25_, lean_object* v_h__2_26_){
_start:
{
if (lean_obj_tag(v_args_24_) == 1)
{
lean_object* v_head_27_; 
v_head_27_ = lean_ctor_get(v_args_24_, 0);
if (lean_obj_tag(v_head_27_) == 0)
{
lean_object* v_tail_28_; 
v_tail_28_ = lean_ctor_get(v_args_24_, 1);
if (lean_obj_tag(v_tail_28_) == 1)
{
lean_object* v_head_29_; 
v_head_29_ = lean_ctor_get(v_tail_28_, 0);
if (lean_obj_tag(v_head_29_) == 1)
{
lean_object* v_tail_30_; 
v_tail_30_ = lean_ctor_get(v_tail_28_, 1);
if (lean_obj_tag(v_tail_30_) == 1)
{
lean_object* v_head_31_; 
v_head_31_ = lean_ctor_get(v_tail_30_, 0);
if (lean_obj_tag(v_head_31_) == 1)
{
lean_object* v_tail_32_; 
v_tail_32_ = lean_ctor_get(v_tail_30_, 1);
if (lean_obj_tag(v_tail_32_) == 0)
{
lean_object* v_val_33_; lean_object* v_val_34_; lean_object* v_val_35_; lean_object* v___x_36_; 
lean_inc_ref(v_head_31_);
lean_inc_ref(v_head_29_);
lean_inc_ref(v_head_27_);
lean_dec_ref_known(v_args_24_, 2);
lean_dec(v_h__2_26_);
v_val_33_ = lean_ctor_get(v_head_27_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v_head_27_, 1);
v_val_34_ = lean_ctor_get(v_head_29_, 0);
lean_inc(v_val_34_);
lean_dec_ref_known(v_head_29_, 1);
v_val_35_ = lean_ctor_get(v_head_31_, 0);
lean_inc(v_val_35_);
lean_dec_ref_known(v_head_31_, 1);
v___x_36_ = lean_apply_3(v_h__1_25_, v_val_33_, v_val_34_, v_val_35_);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
lean_dec(v_h__1_25_);
v___x_37_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_37_;
}
}
else
{
lean_object* v___x_38_; 
lean_dec(v_h__1_25_);
v___x_38_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_38_;
}
}
else
{
lean_object* v___x_39_; 
lean_dec(v_h__1_25_);
v___x_39_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_39_;
}
}
else
{
lean_object* v___x_40_; 
lean_dec(v_h__1_25_);
v___x_40_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_40_;
}
}
else
{
lean_object* v___x_41_; 
lean_dec(v_h__1_25_);
v___x_41_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_41_;
}
}
else
{
lean_object* v___x_42_; 
lean_dec(v_h__1_25_);
v___x_42_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_42_;
}
}
else
{
lean_object* v___x_43_; 
lean_dec(v_h__1_25_);
v___x_43_ = lean_apply_2(v_h__2_26_, v_args_24_, lean_box(0));
return v___x_43_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter___boxed(lean_object* v_A_44_, lean_object* v_S_45_, lean_object* v_motive_46_, lean_object* v_args_47_, lean_object* v_h__1_48_, lean_object* v_h__2_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__1_splitter(v_A_44_, v_S_45_, v_motive_46_, v_args_47_, v_h__1_48_, v_h__2_49_);
lean_dec_ref(v_S_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___redArg(lean_object* v_args_51_, lean_object* v_h__1_52_, lean_object* v_h__2_53_){
_start:
{
if (lean_obj_tag(v_args_51_) == 1)
{
lean_object* v_tail_54_; 
v_tail_54_ = lean_ctor_get(v_args_51_, 1);
if (lean_obj_tag(v_tail_54_) == 0)
{
lean_object* v_head_55_; lean_object* v___x_56_; 
lean_dec(v_h__2_53_);
v_head_55_ = lean_ctor_get(v_args_51_, 0);
lean_inc(v_head_55_);
lean_dec_ref_known(v_args_51_, 2);
v___x_56_ = lean_apply_1(v_h__1_52_, v_head_55_);
return v___x_56_;
}
else
{
lean_object* v___x_57_; 
lean_dec(v_h__1_52_);
v___x_57_ = lean_apply_2(v_h__2_53_, v_args_51_, lean_box(0));
return v___x_57_;
}
}
else
{
lean_object* v___x_58_; 
lean_dec(v_h__1_52_);
v___x_58_ = lean_apply_2(v_h__2_53_, v_args_51_, lean_box(0));
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(lean_object* v_A_59_, lean_object* v_S_60_, lean_object* v_motive_61_, lean_object* v_args_62_, lean_object* v_h__1_63_, lean_object* v_h__2_64_){
_start:
{
if (lean_obj_tag(v_args_62_) == 1)
{
lean_object* v_tail_65_; 
v_tail_65_ = lean_ctor_get(v_args_62_, 1);
if (lean_obj_tag(v_tail_65_) == 0)
{
lean_object* v_head_66_; lean_object* v___x_67_; 
lean_dec(v_h__2_64_);
v_head_66_ = lean_ctor_get(v_args_62_, 0);
lean_inc(v_head_66_);
lean_dec_ref_known(v_args_62_, 2);
v___x_67_ = lean_apply_1(v_h__1_63_, v_head_66_);
return v___x_67_;
}
else
{
lean_object* v___x_68_; 
lean_dec(v_h__1_63_);
v___x_68_ = lean_apply_2(v_h__2_64_, v_args_62_, lean_box(0));
return v___x_68_;
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v_h__1_63_);
v___x_69_ = lean_apply_2(v_h__2_64_, v_args_62_, lean_box(0));
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter___boxed(lean_object* v_A_70_, lean_object* v_S_71_, lean_object* v_motive_72_, lean_object* v_args_73_, lean_object* v_h__1_74_, lean_object* v_h__2_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_Trees_treeModel_match__7_splitter(v_A_70_, v_S_71_, v_motive_72_, v_args_73_, v_h__1_74_, v_h__2_75_);
lean_dec_ref(v_S_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object* v_x_77_, lean_object* v_h__1_78_, lean_object* v_h__2_79_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_object* v_val_80_; lean_object* v___x_81_; 
lean_dec(v_h__2_79_);
v_val_80_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_val_80_);
lean_dec_ref_known(v_x_77_, 1);
v___x_81_ = lean_apply_1(v_h__1_78_, v_val_80_);
return v___x_81_;
}
else
{
lean_object* v_val_82_; lean_object* v___x_83_; 
lean_dec(v_h__1_78_);
v_val_82_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_val_82_);
lean_dec_ref_known(v_x_77_, 1);
v___x_83_ = lean_apply_1(v_h__2_79_, v_val_82_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Trees_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object* v_A_84_, lean_object* v_B_85_, lean_object* v_motive_86_, lean_object* v_x_87_, lean_object* v_h__1_88_, lean_object* v_h__2_89_){
_start:
{
if (lean_obj_tag(v_x_87_) == 0)
{
lean_object* v_val_90_; lean_object* v___x_91_; 
lean_dec(v_h__2_89_);
v_val_90_ = lean_ctor_get(v_x_87_, 0);
lean_inc(v_val_90_);
lean_dec_ref_known(v_x_87_, 1);
v___x_91_ = lean_apply_1(v_h__1_88_, v_val_90_);
return v___x_91_;
}
else
{
lean_object* v_val_92_; lean_object* v___x_93_; 
lean_dec(v_h__1_88_);
v_val_92_ = lean_ctor_get(v_x_87_, 0);
lean_inc(v_val_92_);
lean_dec_ref_known(v_x_87_, 1);
v___x_93_ = lean_apply_1(v_h__2_89_, v_val_92_);
return v___x_93_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_Connection(uint8_t builtin) {
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
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Trees(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Trees_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
