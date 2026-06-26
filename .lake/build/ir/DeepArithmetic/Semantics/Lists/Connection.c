// Lean compiler output
// Module: DeepArithmetic.Semantics.Lists.Connection
// Imports: public import Init public meta import Init public import FOL.FOL public import DeepArithmetic.Syntax.Lists public import DeepArithmetic.Semantics.Lists.System public import DeepArithmetic.Semantics.ManySorted
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
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter___redArg(lean_object* v_args_1_, lean_object* v_h__1_2_, lean_object* v_h__2_3_){
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
if (lean_obj_tag(v_tail_7_) == 0)
{
lean_object* v_val_8_; lean_object* v_val_9_; lean_object* v___x_10_; 
lean_inc_ref(v_head_6_);
lean_inc_ref(v_head_4_);
lean_dec_ref_known(v_args_1_, 2);
lean_dec(v_h__2_3_);
v_val_8_ = lean_ctor_get(v_head_4_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v_head_4_, 1);
v_val_9_ = lean_ctor_get(v_head_6_, 0);
lean_inc(v_val_9_);
lean_dec_ref_known(v_head_6_, 1);
v___x_10_ = lean_apply_2(v_h__1_2_, v_val_8_, v_val_9_);
return v___x_10_;
}
else
{
lean_object* v___x_11_; 
lean_dec(v_h__1_2_);
v___x_11_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_11_;
}
}
else
{
lean_object* v___x_12_; 
lean_dec(v_h__1_2_);
v___x_12_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_12_;
}
}
else
{
lean_object* v___x_13_; 
lean_dec(v_h__1_2_);
v___x_13_ = lean_apply_2(v_h__2_3_, v_args_1_, lean_box(0));
return v___x_13_;
}
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
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter(lean_object* v_A_16_, lean_object* v_S_17_, lean_object* v_motive_18_, lean_object* v_args_19_, lean_object* v_h__1_20_, lean_object* v_h__2_21_){
_start:
{
if (lean_obj_tag(v_args_19_) == 1)
{
lean_object* v_head_22_; 
v_head_22_ = lean_ctor_get(v_args_19_, 0);
if (lean_obj_tag(v_head_22_) == 0)
{
lean_object* v_tail_23_; 
v_tail_23_ = lean_ctor_get(v_args_19_, 1);
if (lean_obj_tag(v_tail_23_) == 1)
{
lean_object* v_head_24_; 
v_head_24_ = lean_ctor_get(v_tail_23_, 0);
if (lean_obj_tag(v_head_24_) == 1)
{
lean_object* v_tail_25_; 
v_tail_25_ = lean_ctor_get(v_tail_23_, 1);
if (lean_obj_tag(v_tail_25_) == 0)
{
lean_object* v_val_26_; lean_object* v_val_27_; lean_object* v___x_28_; 
lean_inc_ref(v_head_24_);
lean_inc_ref(v_head_22_);
lean_dec_ref_known(v_args_19_, 2);
lean_dec(v_h__2_21_);
v_val_26_ = lean_ctor_get(v_head_22_, 0);
lean_inc(v_val_26_);
lean_dec_ref_known(v_head_22_, 1);
v_val_27_ = lean_ctor_get(v_head_24_, 0);
lean_inc(v_val_27_);
lean_dec_ref_known(v_head_24_, 1);
v___x_28_ = lean_apply_2(v_h__1_20_, v_val_26_, v_val_27_);
return v___x_28_;
}
else
{
lean_object* v___x_29_; 
lean_dec(v_h__1_20_);
v___x_29_ = lean_apply_2(v_h__2_21_, v_args_19_, lean_box(0));
return v___x_29_;
}
}
else
{
lean_object* v___x_30_; 
lean_dec(v_h__1_20_);
v___x_30_ = lean_apply_2(v_h__2_21_, v_args_19_, lean_box(0));
return v___x_30_;
}
}
else
{
lean_object* v___x_31_; 
lean_dec(v_h__1_20_);
v___x_31_ = lean_apply_2(v_h__2_21_, v_args_19_, lean_box(0));
return v___x_31_;
}
}
else
{
lean_object* v___x_32_; 
lean_dec(v_h__1_20_);
v___x_32_ = lean_apply_2(v_h__2_21_, v_args_19_, lean_box(0));
return v___x_32_;
}
}
else
{
lean_object* v___x_33_; 
lean_dec(v_h__1_20_);
v___x_33_ = lean_apply_2(v_h__2_21_, v_args_19_, lean_box(0));
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter___boxed(lean_object* v_A_34_, lean_object* v_S_35_, lean_object* v_motive_36_, lean_object* v_args_37_, lean_object* v_h__1_38_, lean_object* v_h__2_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__1_splitter(v_A_34_, v_S_35_, v_motive_36_, v_args_37_, v_h__1_38_, v_h__2_39_);
lean_dec_ref(v_S_35_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter___redArg(lean_object* v_args_41_, lean_object* v_h__1_42_, lean_object* v_h__2_43_){
_start:
{
if (lean_obj_tag(v_args_41_) == 1)
{
lean_object* v_head_44_; 
v_head_44_ = lean_ctor_get(v_args_41_, 0);
if (lean_obj_tag(v_head_44_) == 1)
{
lean_object* v_tail_45_; 
v_tail_45_ = lean_ctor_get(v_args_41_, 1);
if (lean_obj_tag(v_tail_45_) == 1)
{
lean_object* v_head_46_; 
v_head_46_ = lean_ctor_get(v_tail_45_, 0);
if (lean_obj_tag(v_head_46_) == 1)
{
lean_object* v_tail_47_; 
v_tail_47_ = lean_ctor_get(v_tail_45_, 1);
if (lean_obj_tag(v_tail_47_) == 0)
{
lean_object* v_val_48_; lean_object* v_val_49_; lean_object* v___x_50_; 
lean_inc_ref(v_head_46_);
lean_inc_ref(v_head_44_);
lean_dec_ref_known(v_args_41_, 2);
lean_dec(v_h__2_43_);
v_val_48_ = lean_ctor_get(v_head_44_, 0);
lean_inc(v_val_48_);
lean_dec_ref_known(v_head_44_, 1);
v_val_49_ = lean_ctor_get(v_head_46_, 0);
lean_inc(v_val_49_);
lean_dec_ref_known(v_head_46_, 1);
v___x_50_ = lean_apply_2(v_h__1_42_, v_val_48_, v_val_49_);
return v___x_50_;
}
else
{
lean_object* v___x_51_; 
lean_dec(v_h__1_42_);
v___x_51_ = lean_apply_2(v_h__2_43_, v_args_41_, lean_box(0));
return v___x_51_;
}
}
else
{
lean_object* v___x_52_; 
lean_dec(v_h__1_42_);
v___x_52_ = lean_apply_2(v_h__2_43_, v_args_41_, lean_box(0));
return v___x_52_;
}
}
else
{
lean_object* v___x_53_; 
lean_dec(v_h__1_42_);
v___x_53_ = lean_apply_2(v_h__2_43_, v_args_41_, lean_box(0));
return v___x_53_;
}
}
else
{
lean_object* v___x_54_; 
lean_dec(v_h__1_42_);
v___x_54_ = lean_apply_2(v_h__2_43_, v_args_41_, lean_box(0));
return v___x_54_;
}
}
else
{
lean_object* v___x_55_; 
lean_dec(v_h__1_42_);
v___x_55_ = lean_apply_2(v_h__2_43_, v_args_41_, lean_box(0));
return v___x_55_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter(lean_object* v_A_56_, lean_object* v_S_57_, lean_object* v_motive_58_, lean_object* v_args_59_, lean_object* v_h__1_60_, lean_object* v_h__2_61_){
_start:
{
if (lean_obj_tag(v_args_59_) == 1)
{
lean_object* v_head_62_; 
v_head_62_ = lean_ctor_get(v_args_59_, 0);
if (lean_obj_tag(v_head_62_) == 1)
{
lean_object* v_tail_63_; 
v_tail_63_ = lean_ctor_get(v_args_59_, 1);
if (lean_obj_tag(v_tail_63_) == 1)
{
lean_object* v_head_64_; 
v_head_64_ = lean_ctor_get(v_tail_63_, 0);
if (lean_obj_tag(v_head_64_) == 1)
{
lean_object* v_tail_65_; 
v_tail_65_ = lean_ctor_get(v_tail_63_, 1);
if (lean_obj_tag(v_tail_65_) == 0)
{
lean_object* v_val_66_; lean_object* v_val_67_; lean_object* v___x_68_; 
lean_inc_ref(v_head_64_);
lean_inc_ref(v_head_62_);
lean_dec_ref_known(v_args_59_, 2);
lean_dec(v_h__2_61_);
v_val_66_ = lean_ctor_get(v_head_62_, 0);
lean_inc(v_val_66_);
lean_dec_ref_known(v_head_62_, 1);
v_val_67_ = lean_ctor_get(v_head_64_, 0);
lean_inc(v_val_67_);
lean_dec_ref_known(v_head_64_, 1);
v___x_68_ = lean_apply_2(v_h__1_60_, v_val_66_, v_val_67_);
return v___x_68_;
}
else
{
lean_object* v___x_69_; 
lean_dec(v_h__1_60_);
v___x_69_ = lean_apply_2(v_h__2_61_, v_args_59_, lean_box(0));
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; 
lean_dec(v_h__1_60_);
v___x_70_ = lean_apply_2(v_h__2_61_, v_args_59_, lean_box(0));
return v___x_70_;
}
}
else
{
lean_object* v___x_71_; 
lean_dec(v_h__1_60_);
v___x_71_ = lean_apply_2(v_h__2_61_, v_args_59_, lean_box(0));
return v___x_71_;
}
}
else
{
lean_object* v___x_72_; 
lean_dec(v_h__1_60_);
v___x_72_ = lean_apply_2(v_h__2_61_, v_args_59_, lean_box(0));
return v___x_72_;
}
}
else
{
lean_object* v___x_73_; 
lean_dec(v_h__1_60_);
v___x_73_ = lean_apply_2(v_h__2_61_, v_args_59_, lean_box(0));
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter___boxed(lean_object* v_A_74_, lean_object* v_S_75_, lean_object* v_motive_76_, lean_object* v_args_77_, lean_object* v_h__1_78_, lean_object* v_h__2_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__7_splitter(v_A_74_, v_S_75_, v_motive_76_, v_args_77_, v_h__1_78_, v_h__2_79_);
lean_dec_ref(v_S_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter___redArg(lean_object* v_args_81_, lean_object* v_h__1_82_, lean_object* v_h__2_83_){
_start:
{
if (lean_obj_tag(v_args_81_) == 1)
{
lean_object* v_tail_84_; 
v_tail_84_ = lean_ctor_get(v_args_81_, 1);
if (lean_obj_tag(v_tail_84_) == 0)
{
lean_object* v_head_85_; lean_object* v___x_86_; 
lean_dec(v_h__2_83_);
v_head_85_ = lean_ctor_get(v_args_81_, 0);
lean_inc(v_head_85_);
lean_dec_ref_known(v_args_81_, 2);
v___x_86_ = lean_apply_1(v_h__1_82_, v_head_85_);
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
lean_dec(v_h__1_82_);
v___x_87_ = lean_apply_2(v_h__2_83_, v_args_81_, lean_box(0));
return v___x_87_;
}
}
else
{
lean_object* v___x_88_; 
lean_dec(v_h__1_82_);
v___x_88_ = lean_apply_2(v_h__2_83_, v_args_81_, lean_box(0));
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter(lean_object* v_A_89_, lean_object* v_S_90_, lean_object* v_motive_91_, lean_object* v_args_92_, lean_object* v_h__1_93_, lean_object* v_h__2_94_){
_start:
{
if (lean_obj_tag(v_args_92_) == 1)
{
lean_object* v_tail_95_; 
v_tail_95_ = lean_ctor_get(v_args_92_, 1);
if (lean_obj_tag(v_tail_95_) == 0)
{
lean_object* v_head_96_; lean_object* v___x_97_; 
lean_dec(v_h__2_94_);
v_head_96_ = lean_ctor_get(v_args_92_, 0);
lean_inc(v_head_96_);
lean_dec_ref_known(v_args_92_, 2);
v___x_97_ = lean_apply_1(v_h__1_93_, v_head_96_);
return v___x_97_;
}
else
{
lean_object* v___x_98_; 
lean_dec(v_h__1_93_);
v___x_98_ = lean_apply_2(v_h__2_94_, v_args_92_, lean_box(0));
return v___x_98_;
}
}
else
{
lean_object* v___x_99_; 
lean_dec(v_h__1_93_);
v___x_99_ = lean_apply_2(v_h__2_94_, v_args_92_, lean_box(0));
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter___boxed(lean_object* v_A_100_, lean_object* v_S_101_, lean_object* v_motive_102_, lean_object* v_args_103_, lean_object* v_h__1_104_, lean_object* v_h__2_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_Lists_listModel_match__9_splitter(v_A_100_, v_S_101_, v_motive_102_, v_args_103_, v_h__1_104_, v_h__2_105_);
lean_dec_ref(v_S_101_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter___redArg(lean_object* v_x_107_, lean_object* v_h__1_108_, lean_object* v_h__2_109_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
lean_object* v_val_110_; lean_object* v___x_111_; 
lean_dec(v_h__2_109_);
v_val_110_ = lean_ctor_get(v_x_107_, 0);
lean_inc(v_val_110_);
lean_dec_ref_known(v_x_107_, 1);
v___x_111_ = lean_apply_1(v_h__1_108_, v_val_110_);
return v___x_111_;
}
else
{
lean_object* v_val_112_; lean_object* v___x_113_; 
lean_dec(v_h__1_108_);
v_val_112_ = lean_ctor_get(v_x_107_, 0);
lean_inc(v_val_112_);
lean_dec_ref_known(v_x_107_, 1);
v___x_113_ = lean_apply_1(v_h__2_109_, v_val_112_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* lp_DeepArithmetic___private_DeepArithmetic_Semantics_Lists_Connection_0__DeepArithmetic_Semantics_ManySorted_isSort1_match__1_splitter(lean_object* v_A_114_, lean_object* v_B_115_, lean_object* v_motive_116_, lean_object* v_x_117_, lean_object* v_h__1_118_, lean_object* v_h__2_119_){
_start:
{
if (lean_obj_tag(v_x_117_) == 0)
{
lean_object* v_val_120_; lean_object* v___x_121_; 
lean_dec(v_h__2_119_);
v_val_120_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_x_117_, 1);
v___x_121_ = lean_apply_1(v_h__1_118_, v_val_120_);
return v___x_121_;
}
else
{
lean_object* v_val_122_; lean_object* v___x_123_; 
lean_dec(v_h__1_118_);
v_val_122_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_val_122_);
lean_dec_ref_known(v_x_117_, 1);
v___x_123_ = lean_apply_1(v_h__2_119_, v_val_122_);
return v___x_123_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FOL_FOL_FOL(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Syntax_Lists(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_System(uint8_t builtin);
lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_ManySorted(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_Connection(uint8_t builtin) {
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
res = initialize_DeepArithmetic_DeepArithmetic_Syntax_Lists(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DeepArithmetic_DeepArithmetic_Semantics_Lists_System(builtin);
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
