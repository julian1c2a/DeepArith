/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import TheoryFramework.Instances.FOL
import TheoryFramework.Theory
import DeepArithmetic.Semantics.Peano.System
import DeepArithmetic.Semantics.Peano.Computability

namespace DeepArithmetic.LogicAbstraction

open FOL
open FOL.Metamath.Semantics
open TheoryFramework
open DeepArithmetic.Semantics.Peano
open DeepArithmetic.Semantics.Peano.Computability

-- ============================================================
-- 1. La Teoría Sintáctica de Peano en FOL
-- ============================================================

-- Variables
def x : Term := .var 0
def y : Term := .var 1

-- Términos
def t_zero : Term := .func "zero" []
def t_succ (t : Term) : Term := .func "succ" [t]
def t_add (t1 t2 : Term) : Term := .func "add" [t1, t2]
def t_mult (t1 t2 : Term) : Term := .func "mult" [t1, t2]

-- Axiomas de Peano (fragmento de Robinson + suma y multiplicación)
def ax_succ_neq_zero : Formula :=
  .forall (neg (.eq (t_succ x) t_zero))

def ax_inj_succ : Formula :=
  .forall (.forall (.impl (.eq (t_succ x) (t_succ y)) (.eq x y)))

def ax_add_zero : Formula :=
  .forall (.eq (t_add x t_zero) x)

def ax_add_succ : Formula :=
  .forall (.forall (.eq (t_add x (t_succ y)) (t_succ (t_add x y))))

def ax_mult_zero : Formula :=
  .forall (.eq (t_mult x t_zero) t_zero)

-- Usamos x * succ(y) = x + (x * y) porque mult_peano se definió agregando n en cada iteración
def ax_mult_succ : Formula :=
  .forall (.forall (.eq (t_mult x (t_succ y)) (t_add x (t_mult x y))))

def PeanoAxiomsList : List Formula := [
  ax_succ_neq_zero,
  ax_inj_succ,
  ax_add_zero,
  ax_add_succ,
  ax_mult_zero,
  ax_mult_succ
]

def PeanoAxioms : Theory Formula := Theory.fromList PeanoAxiomsList

-- ============================================================
-- 2. El Modelo Semántico sobre el Álgebra Libre (PeanoSystem)
-- ============================================================

-- Inyectamos nuestra álgebra libre (constructiva) como dominio para FOL
noncomputable def DeepArithmeticPeanoModel (P : PeanoSystem) : Model P.N where
  func := fun f ts =>
    match f, ts with
    | "zero", [] => P.zero
    | "succ", [n] => P.succ n
    | "add", [n, m] => add_peano P n m
    | "mult", [n, m] => mult_peano P n m
    | _, _ => P.zero -- default fallback
  rel := fun _ _ => False -- No hay relaciones primitivas aparte del igual

-- ============================================================
-- 3. Teorema de Satisfacción (Cerrando el Gap)
-- ============================================================

-- Demostramos que PeanoSystem satisface todos los axiomas sintácticos.
-- Esto valida que nuestro marco computacional es semánticamente robusto bajo FOL^=.

theorem PeanoSystem_is_Model (P : PeanoSystem) (ax : Formula) (hax : PeanoAxioms.axioms ax) :
    ∀ (v : Nat → P.N), FOL.Metamath.Semantics.evalFormula (DeepArithmeticPeanoModel P) v ax := by
  intro v
  -- Analizamos qué axioma es el que estamos evaluando
  unfold PeanoAxioms Theory.fromList PeanoAxiomsList at hax
  simp at hax
  rcases hax with h | h | h | h | h | h
  · -- ax_succ_neq_zero
    rw [h]
    unfold ax_succ_neq_zero neg
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d contra
    exact P.discr PUnit.unit d contra.symm
  · -- ax_inj_succ
    rw [h]
    unfold ax_inj_succ
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d1 d2 contra
    have h_inj := P.inj PUnit.unit d2 PUnit.unit d1 contra
    exact h_inj.right
  · -- ax_add_zero
    rw [h]
    unfold ax_add_zero
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d
    exact add_zero P d
  · -- ax_add_succ
    rw [h]
    unfold ax_add_succ
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d1 d2
    -- d1 is for the outer forall (y = .var 1), d2 is for the inner forall (x = .var 0)
    exact add_succ P d2 d1
  · -- ax_mult_zero
    rw [h]
    unfold ax_mult_zero
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d
    exact mult_zero P d
  · -- ax_mult_succ
    rw [h]
    unfold ax_mult_succ
    simp [evalFormula, evalTerm, evalTerms, DeepArithmeticPeanoModel]
    intro d1 d2
    exact mult_succ P d2 d1

end DeepArithmetic.LogicAbstraction
