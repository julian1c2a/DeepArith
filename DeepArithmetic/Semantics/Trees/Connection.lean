/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import DeepArithmetic.Syntax.Trees
import DeepArithmetic.Semantics.Trees.System
import DeepArithmetic.Semantics.ManySorted


namespace DeepArithmetic.Semantics.Trees

  open FOL
  open FOL.Metamath.Semantics
  open DeepArithmetic.Syntax.Trees
  open DeepArithmetic.Semantics.ManySorted

  /-- En la semántica, el dominio debe unificar Elementos y Árboles. 
      Usamos el dominio binario `ManySorted.Domain A S.U`. -/
  noncomputable def treeModel {A : Type 0} (S : TreeSystem A) : Model (Domain A S.U) where
    func := fun f args =>
      if f = "emptyTree" then Sum.inr S.base
      else if f = "node" then
        match args with
        | [Sum.inl h, Sum.inr l, Sum.inr r] => Sum.inr (S.node h l r)
        | _ => Sum.inr S.base -- Fallback
      else Sum.inr S.base
    rel := fun p args =>
      if p = "IsTree" then
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

  @[simp]
  theorem evalTerms_triple {D} (M : Model D) (v : Nat → D) (t1 t2 t3 : Term) :
      evalTerms M v [t1, t2, t3] = [evalTerm M v t1, evalTerm M v t2, evalTerm M v t3] := rfl

  theorem eval_tree_base_case {A : Type 0} (S : TreeSystem A) (v : Nat → Domain A S.U) (φ : Formula) :
      evalFormula (treeModel S) v (substFormula 0 emptyTree φ) ↔
      evalFormula (treeModel S) (shiftEnv v (Sum.inr S.base)) φ := by
    rw [eval_substFormula_zero]
    rfl

  theorem eval_phi_r {A : Type 0} (S : TreeSystem A) (v : Nat → Domain A S.U) (h : A) (l r : S.U) (φ : Formula) :
      evalFormula (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r))
        (substFormula 3 v0 (liftFormula 0 (liftFormula 0 (liftFormula 0 φ)))) ↔
      evalFormula (treeModel S) (shiftEnv v (Sum.inr r)) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) v0 = Sum.inr r := rfl
    rw [h1]
    have h2 : updateEnv 3 (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (Sum.inr r) = 
              updateEnv 0 (shiftEnv (shiftEnv (shiftEnv v (Sum.inr r)) (Sum.inl h)) (Sum.inr l)) (Sum.inr r) := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n =>
          cases n with
          | zero => rfl
          | succ n =>
            cases n with
            | zero => rfl
            | succ n => rfl
    simp only [h2]
    rw [eval_liftFormula_ext]
    have h3 : shiftEnv (shiftEnv (shiftEnv v (Sum.inr r)) (Sum.inl h)) (Sum.inr l) = 
              updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr r)) (Sum.inl h)) (Sum.inr l) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    simp only [h3]
    rw [eval_liftFormula_ext]
    have h4 : shiftEnv (shiftEnv v (Sum.inr r)) (Sum.inl h) = updateEnv 0 (shiftEnv v (Sum.inr r)) (Sum.inl h) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    simp only [h4]
    rw [eval_liftFormula_ext]

  theorem eval_phi_l {A : Type 0} (S : TreeSystem A) (v : Nat → Domain A S.U) (h : A) (l r : S.U) (φ : Formula) :
      evalFormula (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r))
        (substFormula 3 v1 (liftFormula 0 (liftFormula 0 (liftFormula 0 φ)))) ↔
      evalFormula (treeModel S) (shiftEnv v (Sum.inr l)) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) v1 = Sum.inr l := rfl
    rw [h1]
    have h2 : updateEnv 3 (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (Sum.inr l) = 
              updateEnv 0 (shiftEnv (shiftEnv (shiftEnv v (Sum.inr l)) (Sum.inl h)) (Sum.inr l)) (Sum.inr r) := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n =>
          cases n with
          | zero => rfl
          | succ n =>
            cases n with
            | zero => rfl
            | succ n => rfl
    simp only [h2]
    rw [eval_liftFormula_ext]
    have h3 : shiftEnv (shiftEnv (shiftEnv v (Sum.inr l)) (Sum.inl h)) (Sum.inr l) = 
              updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr l)) (Sum.inl h)) (Sum.inr l) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    simp only [h3]
    rw [eval_liftFormula_ext]
    have h4 : shiftEnv (shiftEnv v (Sum.inr l)) (Sum.inl h) = updateEnv 0 (shiftEnv v (Sum.inr l)) (Sum.inl h) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    simp only [h4]
    rw [eval_liftFormula_ext]

  theorem eval_phi_node {A : Type 0} (S : TreeSystem A) (v : Nat → Domain A S.U) (h : A) (l r : S.U) (φ : Formula) :
      evalFormula (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r))
        (substFormula 3 (node v2 v1 v0) (liftFormula 0 (liftFormula 0 (liftFormula 0 φ)))) ↔
      evalFormula (treeModel S) (shiftEnv v (Sum.inr (S.node h l r))) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (node v2 v1 v0) = Sum.inr (S.node h l r) := rfl
    rw [h1]
    have h2 : updateEnv 3 (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (Sum.inr (S.node h l r)) = 
              updateEnv 0 (shiftEnv (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l)) (Sum.inr r) := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n =>
          cases n with
          | zero => rfl
          | succ n =>
            cases n with
            | zero => rfl
            | succ n => rfl
    have H2 : evalFormula (treeModel S) (updateEnv 3 (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (Sum.inr (S.node h l r))) (liftFormula 0 (liftFormula 0 (liftFormula 0 φ))) = 
              evalFormula (treeModel S) (updateEnv 0 (shiftEnv (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l)) (Sum.inr r)) (liftFormula 0 (liftFormula 0 (liftFormula 0 φ))) := 
      congrArg (fun e => evalFormula (treeModel S) e (liftFormula 0 (liftFormula 0 (liftFormula 0 φ)))) h2
    apply Iff.trans (Iff.of_eq H2)
    rw [eval_liftFormula_ext]
    have h3 : shiftEnv (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l) = 
              updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    have H3 : evalFormula (treeModel S) (shiftEnv (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l)) (liftFormula 0 (liftFormula 0 φ)) = 
              evalFormula (treeModel S) (updateEnv 0 (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (Sum.inr l)) (liftFormula 0 (liftFormula 0 φ)) := 
      congrArg (fun e => evalFormula (treeModel S) e (liftFormula 0 (liftFormula 0 φ))) h3
    apply Iff.trans (Iff.of_eq H3)
    rw [eval_liftFormula_ext]
    have h4 : shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h) = updateEnv 0 (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h) := by
      funext n
      cases n with
      | zero => rfl
      | succ n => rfl
    have H4 : evalFormula (treeModel S) (shiftEnv (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (liftFormula 0 φ) = 
              evalFormula (treeModel S) (updateEnv 0 (shiftEnv v (Sum.inr (S.node h l r))) (Sum.inl h)) (liftFormula 0 φ) := 
      congrArg (fun e => evalFormula (treeModel S) e (liftFormula 0 φ)) h4
    apply Iff.trans (Iff.of_eq H4)
    rw [eval_liftFormula_ext]

  theorem eval_phi_t {A : Type 0} (S : TreeSystem A) (v : Nat → Domain A S.U) (d : Domain A S.U) (φ : Formula) :
      evalFormula (treeModel S) (shiftEnv v d) (substFormula 1 v0 (liftFormula 0 φ)) ↔
      evalFormula (treeModel S) (shiftEnv v d) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (treeModel S) (shiftEnv v d) v0 = d := rfl
    rw [h1]
    have h2 : updateEnv 1 (shiftEnv v d) d = updateEnv 0 (shiftEnv v d) d := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n => rfl
    simp only [h2]
    rw [eval_liftFormula_ext]

  /-- Teorema Principal: Todo TreeSystem es un modelo válido para la Teoría de Árboles. -/
  theorem treeSystem_satisfies_treeTheory {A : Type 0} (S : TreeSystem A) :
      satisfiesTheory (treeModel S) TreeTheory.axioms := by
    intro f hf v
    rcases hf with rfl | rfl | rfl | rfl | rfl | ⟨φ, rfl⟩
    · -- tree_elem_disjoint
      unfold tree_elem_disjoint isTree isElem neg
      simp only [v0, evalFormula, evalTerms_singleton]
      simp [treeModel, evalTerm, shiftEnv]
      intro d h_tree h_elem
      cases d
      · exact False.elim h_tree
      · exact False.elim h_elem
    · -- emptyTree_isTree
      unfold emptyTree_isTree emptyTree isTree
      simp only [evalFormula, evalTerms_singleton]
      simp [treeModel, evalTerm, isSort1, isSort2]
    · -- node_isTree
      unfold node_isTree node isTree isElem
      simp only [v0, v1, v2, evalFormula, evalTerms_singleton]
      intro d1 d2 d3 h_and
      rcases h_and with ⟨h1, h2, h3⟩
      cases d1
      · cases d2
        · revert h2; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
        · cases d3
          · revert h3; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
          · simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
      · revert h1; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- emptyTree_ne_node
      unfold emptyTree_ne_node emptyTree node isTree isElem neg
      simp only [v0, v1, v2, evalFormula, evalTerms_singleton]
      intro d1 d2 d3 h_and h_eq
      rcases h_and with ⟨h1, h2, h3⟩
      cases d1
      · cases d2
        · revert h2; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
        · cases d3
          · revert h3; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
          · have h_eq' := Sum.inr.inj h_eq
            exact S.discr _ _ _ h_eq'
      · revert h1; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- node_inj
      unfold node_inj node isTree isElem
      simp only [v0, v1, v2, v3, v4, v5, evalFormula, evalTerms_singleton]
      intro d1 d2 d3 d4 d5 d6 h_and h_eq
      rcases h_and with ⟨⟨h1, h2, h3⟩, ⟨h4, h5, h6⟩⟩
      cases d1
      · cases d2
        · revert h2; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
        · cases d3
          · revert h3; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
          · cases d4
            · cases d5
              · revert h5; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
              · cases d6
                · revert h6; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
                · have h_eq' := Sum.inr.inj h_eq
                  have ⟨ha, hl, hr⟩ := S.inj _ _ _ _ _ _ h_eq'
                  exact ⟨congrArg Sum.inl ha, congrArg Sum.inr hl, congrArg Sum.inr hr⟩
            · revert h4; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
      · revert h1; simp [treeModel, evalTerm, shiftEnv, isSort1, isSort2]
    · -- treeInductionSchema
      unfold treeInductionSchema
      simp only [evalFormula]
      intro h_and d h_tree
      rcases h_and with ⟨h_base, h_step⟩
      rw [eval_tree_base_case] at h_base
      rw [eval_phi_t]
      cases d
      · exact False.elim h_tree
      · case inr t =>
        apply S.ind (fun t => evalFormula (treeModel S) (shiftEnv v (Sum.inr t)) φ)
        · exact h_base
        · intro h l r IH_l IH_r
          -- Extraer el paso inductivo evaluado para d1=h, d2=l, d3=r
          have h_inst := h_step (Sum.inl h) (Sum.inr l) (Sum.inr r)
          -- El antecedente es trivialmente verdadero por ser los tipos correctos
          have h_ant : evalFormula (treeModel S)
            (shiftEnv (shiftEnv (shiftEnv v (Sum.inl h)) (Sum.inr l)) (Sum.inr r))
            (Formula.and (Formula.and (isElem v2) (Formula.and (isTree v1) (isTree v0)))
              (Formula.and (substFormula 3 v1 (liftFormula 0 (liftFormula 0 (liftFormula 0 φ))))
                           (substFormula 3 v0 (liftFormula 0 (liftFormula 0 (liftFormula 0 φ)))))) := by
            simp only [evalFormula]
            refine ⟨⟨?_, ?_, ?_⟩, ?_, ?_⟩
            · unfold isElem; simp [treeModel, evalFormula, evalTerms_singleton, evalTerm, shiftEnv, v2]
            · unfold isTree; simp [treeModel, evalFormula, evalTerms_singleton, evalTerm, shiftEnv, v1]
            · unfold isTree; simp [treeModel, evalFormula, evalTerms_singleton, evalTerm, shiftEnv, v0]
            · rw [eval_phi_l]; exact IH_l
            · rw [eval_phi_r]; exact IH_r
          -- Aplicar modus ponens en h_inst
          have h_conc := h_inst h_ant
          -- Reescribir conclusión usando eval_phi_node
          rw [eval_phi_node] at h_conc
          exact h_conc

end DeepArithmetic.Semantics.Trees
