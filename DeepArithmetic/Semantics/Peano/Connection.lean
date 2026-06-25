/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import DeepArithmetic.Syntax.Peano
import DeepArithmetic.Semantics.Peano.System

namespace DeepArithmetic.Semantics.Peano

  open FOL
  open FOL.Metamath.Semantics
  open DeepArithmetic.Syntax.Peano

  /-- El modelo asociado a un PeanoSystem. 
      Interpreta "0" como zero y "S" como succ. -/
  def peanoModel (S : PeanoSystem) : Model S.N where
    func := fun f args =>
      if f = "0" then S.zero
      else if f = "S" then
        match args with
        | [n] => S.succ n
        | _ => S.zero -- Fallback para mala aridad
      else S.zero
    rel := fun _ _ => False -- No hay relaciones unarias/binarias customizadas en Peano puro

  /-- Un modelo satisface una teoría si evalúa todas sus fórmulas a True bajo cualquier entorno. -/
  def satisfiesTheory {D : Type} (M : Model D) (axioms : Formula → Prop) : Prop :=
    (∀ f, axioms f → ∀ (v : Nat → D), evalFormula M v f)

  -- Lemas auxiliares para la demostración del esquema de inducción
  theorem eval_base_case (S : PeanoSystem) (v : Nat → S.N) (φ : Formula) :
      evalFormula (peanoModel S) v (substFormula 0 zero φ) ↔
      evalFormula (peanoModel S) (shiftEnv v S.base) φ := by
    rw [eval_substFormula_zero]
    rfl

  theorem eval_phi_x (S : PeanoSystem) (v : Nat → S.N) (d : S.N) (φ : Formula) :
      evalFormula (peanoModel S) (shiftEnv v d) (substFormula 1 x (liftFormula 0 φ)) ↔
      evalFormula (peanoModel S) (shiftEnv v d) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (peanoModel S) (shiftEnv v d) x = d := rfl
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

  theorem eval_phi_sx (S : PeanoSystem) (v : Nat → S.N) (d : S.N) (φ : Formula) :
      evalFormula (peanoModel S) (shiftEnv v d) (substFormula 1 (succ x) (liftFormula 0 φ)) ↔
      evalFormula (peanoModel S) (shiftEnv v (S.step PUnit.unit d)) φ := by
    rw [eval_substFormula_ext]
    have h1 : evalTerm (peanoModel S) (shiftEnv v d) (succ x) = S.step PUnit.unit d := rfl
    rw [h1]
    have h2 : updateEnv 1 (shiftEnv v d) (S.step PUnit.unit d) = updateEnv 0 (shiftEnv v (S.step PUnit.unit d)) d := by
      funext n
      cases n with
      | zero => rfl
      | succ n =>
        cases n with
        | zero => rfl
        | succ n => rfl
    rw [h2]
    rw [eval_liftFormula_ext]

  /-- Teorema Principal: Todo PeanoSystem es un modelo válido para la Teoría de Peano. -/
  theorem peanoSystem_satisfies_peanoTheory (S : PeanoSystem) :
      satisfiesTheory (peanoModel S) PeanoTheory.axioms := by
    intro f hf v
    rcases hf with rfl | hf
    · -- zero_ne_succ
      simp only [zero_ne_succ, evalFormula]
      intro d h
      have hd : S.base = S.step PUnit.unit d := h
      exact S.discr PUnit.unit d hd
    rcases hf with rfl | ⟨φ, rfl⟩
    · -- succ_inj
      simp only [succ_inj, evalFormula]
      intro d1 d2 h
      have hd : S.step PUnit.unit d1 = S.step PUnit.unit d2 := h
      exact (S.inj PUnit.unit d1 PUnit.unit d2 hd).right
    · -- inductionSchema
      simp only [inductionSchema, evalFormula]
      intro h_and d
      rcases h_and with ⟨h_base, h_step_all⟩
      rw [eval_base_case] at h_base
      rw [eval_phi_x]
      let P : S.N → Prop := fun x => evalFormula (peanoModel S) (shiftEnv v x) φ
      apply S.ind P
      · -- base case
        exact h_base
      · -- step case
        intro a u Pu
        have h_step_u := h_step_all u
        rw [eval_phi_x] at h_step_u
        rw [eval_phi_sx] at h_step_u
        exact h_step_u Pu

end DeepArithmetic.Semantics.Peano

export DeepArithmetic.Semantics.Peano (peanoModel satisfiesTheory peanoSystem_satisfies_peanoTheory)
