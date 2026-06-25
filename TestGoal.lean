import FOL.FOL
import DeepArithmetic.Syntax.Lists
import DeepArithmetic.Semantics.Lists.System
import DeepArithmetic.Semantics.ManySorted
import DeepArithmetic.Semantics.Lists.Connection

open FOL
open FOL.Metamath.Semantics
open DeepArithmetic.Syntax.Lists
open DeepArithmetic.Semantics.ManySorted
open DeepArithmetic.Semantics.Lists

  theorem eval_list_base_case {A : Type 0} (S : ListSystem A) (v : Nat → Domain A S.L) (φ : Formula) :
      evalFormula (listModel S) v (substFormula 0 nil φ) ↔
      evalFormula (listModel S) (shiftEnv v (Sum.inr S.nil)) φ := by
    rw [eval_substFormula_zero]
    rfl

  theorem eval_phi_t {A : Type 0} (S : ListSystem A) (v : Nat → Domain A S.L) (h : A) (t : S.L) (φ : Formula) :
      evalFormula (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t))
        (substFormula 2 v0 (liftFormula 0 (liftFormula 0 φ))) ↔
      evalFormula (listModel S) (shiftEnv v (Sum.inr t)) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) v0 = Sum.inr t := rfl
    rw [h1]
    have h2 : updateEnv 2 (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) (Sum.inr t) = 
              updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr t)) (Sum.inl h)) (Sum.inr t) := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n =>
          cases n with
          | zero => rfl
          | succ n => rfl
    rw [h2]
    rw [eval_liftFormula_ext]
    have h3 : shiftEnv (shiftEnv v (Sum.inr t)) (Sum.inl h) = updateEnv 0 (shiftEnv v (Sum.inr t)) (Sum.inl h) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    rw [h3]
    rw [eval_liftFormula_ext]

  theorem eval_phi_cons_ht {A : Type 0} (S : ListSystem A) (v : Nat → Domain A S.L) (h : A) (t : S.L) (φ : Formula) :
      evalFormula (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t))
        (substFormula 2 (cons v1 v0) (liftFormula 0 (liftFormula 0 φ))) ↔
      evalFormula (listModel S) (shiftEnv v (Sum.inr (S.cons h t))) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) (cons v1 v0) = Sum.inr (S.cons h t) := rfl
    rw [h1]
    have h2 : updateEnv 2 (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) (Sum.inr (S.cons h t)) = 
              updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr (S.cons h t))) (Sum.inl h)) (Sum.inr t) := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n =>
          cases n with
          | zero => rfl
          | succ n => rfl
    rw [h2]
    rw [eval_liftFormula_ext]
    have h3 : shiftEnv (shiftEnv v (Sum.inr (S.cons h t))) (Sum.inl h) = updateEnv 0 (shiftEnv v (Sum.inr (S.cons h t))) (Sum.inl h) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    rw [h3]
    rw [eval_liftFormula_ext]

  theorem eval_phi_l {A : Type 0} (S : ListSystem A) (v : Nat → Domain A S.L) (d : Domain A S.L) (φ : Formula) :
      evalFormula (listModel S) (shiftEnv v d) (substFormula 1 v0 (liftFormula 0 φ)) ↔
      evalFormula (listModel S) (shiftEnv v d) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (listModel S) (shiftEnv v d) v0 = d := rfl
    rw [h1]
    have h2 : updateEnv 1 (shiftEnv v d) d = updateEnv 0 (shiftEnv v d) d := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n => rfl
    rw [h2]
    rw [eval_liftFormula_ext]

  theorem proof_inductionSchema {A : Type 0} (S : ListSystem A) (φ : Formula) :
      satisfiesTheory (listModel S) (fun f => f = listInductionSchema φ) := by
    intro f h
    subst h
    intro v
    intro hBaseAndStep d hd_isList
    rcases hBaseAndStep with ⟨hBase, hStep⟩
    rcases d with _ | l
    · change False at hd_isList
      exact False.elim hd_isList
    · rw [eval_phi_l]
      let P : S.L → Prop := fun l => evalFormula (listModel S) (shiftEnv v (Sum.inr l)) φ
      apply S.ind P
      · change evalFormula (listModel S) (shiftEnv v (Sum.inr S.nil)) φ
        rw [← eval_list_base_case]
        exact hBase
      · intro h t Pt
        have hStep_ht := hStep (Sum.inl h) (Sum.inr t)
        have hElem : evalFormula (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) (isElem v1) := by
          change True
          trivial
        have hList : evalFormula (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t)) (isList v0) := by
          change True
          trivial
        have Pt2 : evalFormula (listModel S) (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr t))
          (substFormula 2 v0 (liftFormula 0 (liftFormula 0 φ))) := by
          rw [eval_phi_t]
          exact Pt
        have hStep_ht2 := hStep_ht ⟨⟨hElem, hList⟩, Pt2⟩
        change evalFormula (listModel S) (shiftEnv v (Sum.inr (S.cons h t))) φ
        rw [← eval_phi_cons_ht]
        exact hStep_ht2
