/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import DeepArithmetic.Syntax.Lists
import DeepArithmetic.Semantics.Lists.System
import DeepArithmetic.Semantics.ManySorted

namespace DeepArithmetic.Semantics.Lists

  open FOL
  open FOL.Metamath.Semantics
  open DeepArithmetic.Syntax.Lists
  open DeepArithmetic.Semantics.ManySorted

  /-- En la semántica, el dominio debe unificar Elementos y Listas. 
      Usamos el dominio binario `ManySorted.Domain A S.L`. -/
  noncomputable def listModel {A : Type 0} (S : ListSystem A) : Model (Domain A S.L) where
    func := fun f args =>
      if f = "nil" then Sum.inr S.nil
      else if f = "cons" then
        match args with
        | [Sum.inl h, Sum.inr t] => Sum.inr (S.cons h t)
        | _ => Sum.inr S.nil -- Fallback
      else if f = "append" then
        match args with
        | [Sum.inr l1, Sum.inr l2] => Sum.inr (S.append l2 l1)
        | _ => Sum.inr S.nil -- Fallback
      else Sum.inr S.nil
    rel := fun p args =>
      if p = "IsList" then
        match args with
        | [val] => isSort2 val
        | _ => False
      else if p = "IsElem" then
        match args with
        | [val] => isSort1 val
        | _ => False
      else False

  /-- Un modelo satisface una teoría si evalúa todas sus fórmulas a True bajo cualquier entorno. -/
  def satisfiesTheory {D : Type} (M : Model D) (axioms : Formula → Prop) : Prop :=
    ∀ f, axioms f → ∀ (v : Nat → D), evalFormula M v f

  @[simp]
  theorem evalTerms_singleton {D} (M : Model D) (v : Nat → D) (t : Term) :
      evalTerms M v [t] = [evalTerm M v t] := rfl

  @[simp]
  theorem evalTerms_pair {D} (M : Model D) (v : Nat → D) (t1 t2 : Term) :
      evalTerms M v [t1, t2] = [evalTerm M v t1, evalTerm M v t2] := rfl

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

  /-- Teorema Principal: Todo ListSystem es un modelo válido para la Teoría de Listas. -/
  theorem listSystem_satisfies_listTheory {A : Type 0} (S : ListSystem A) :
      satisfiesTheory (listModel S) ListTheory.axioms := by
    intro f hf v
    rcases hf with rfl | rfl | rfl | rfl | rfl | rfl | rfl | ⟨φ, rfl⟩
    · -- list_elem_disjoint
      unfold list_elem_disjoint isList isElem neg
      simp only [v0, evalFormula, evalTerms_singleton]
      simp [listModel, evalTerm, shiftEnv]
      intro d h_list h_elem
      cases d
      · exact False.elim h_list
      · exact False.elim h_elem
    · -- nil_isList
      unfold nil_isList nil isList
      simp only [evalFormula, evalTerms_singleton]
      simp [listModel, evalTerm, isSort1, isSort2]
    · -- cons_isList
      unfold cons_isList cons isList isElem
      simp only [v0, v1, evalFormula, evalTerms_singleton]
      intro d1 d2 h_and
      rcases h_and with ⟨h1, h2⟩
      cases d1
      · cases d2
        · revert h2; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
        · simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
      · revert h1; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- nil_ne_cons
      unfold nil_ne_cons nil cons isList isElem neg
      simp only [v0, v1, evalFormula, evalTerms_singleton]
      intro d1 d2 h_and h_eq
      rcases h_and with ⟨h1, h2⟩
      cases d1
      · cases d2
        · revert h2; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
        · have h_eq' := Sum.inr.inj h_eq
          exact S.nil_ne_cons _ _ h_eq'
      · revert h1; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- cons_inj
      unfold cons_inj cons isList isElem
      simp only [v0, v1, v2, v3, evalFormula, evalTerms_singleton]
      intro d1 d2 d3 d4 h_and h_eq
      rcases h_and with ⟨⟨h1, h2⟩, ⟨h3, h4⟩⟩
      cases d1
      · cases d2
        · revert h2; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
        · cases d3
          · cases d4
            · revert h4; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
            · have h_eq' := Sum.inr.inj h_eq
              have ⟨ha, hl⟩ := S.cons_inj _ _ _ _ h_eq'
              exact ⟨congrArg Sum.inl ha, congrArg Sum.inr hl⟩
          · revert h3; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
      · revert h1; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- append_nil
      unfold append_nil append nil isList
      simp only [v0, evalFormula, evalTerms_singleton]
      intro d h_list
      cases d
      · revert h_list; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
      · simp [listModel, evalTerm, shiftEnv]
        exact congrArg Sum.inr (S.append_nil _)
    · -- append_cons
      unfold append_cons append cons isList isElem
      simp only [v0, v1, v2, evalFormula, evalTerms_singleton]
      intro d1 d2 d3 h_and
      rcases h_and with ⟨⟨h1, h2⟩, h3⟩
      cases d1
      · cases d2
        · revert h2; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
        · cases d3
          · revert h3; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
          · simp [listModel, evalTerm, shiftEnv]
            exact congrArg Sum.inr (S.append_cons _ _ _)
      · revert h1; simp [listModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- inductionSchema
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

end DeepArithmetic.Semantics.Lists

export DeepArithmetic.Semantics.Lists (listModel satisfiesTheory listSystem_satisfies_listTheory)
