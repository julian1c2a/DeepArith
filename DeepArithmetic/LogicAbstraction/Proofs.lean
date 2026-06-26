import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Tactics

namespace DeepArithmetic.LogicAbstraction.Proofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Tactics

-- TEOREMA 1: x + 0 = x
-- Usaremos Γ = [ax_add_zero]
-- El objetivo es deducir la fórmula instanciada sin el forall: x + 0 = x
-- ax_add_zero := .forall (.eq (x +_s n_zero) x)
-- Queremos derivar: .eq (x +_s n_zero) x

def gamma_add_zero : List Formula := [ax_add_zero]

-- Lema auxiliar: ax_add_zero está en la lista gamma
theorem ax_add_zero_in_gamma : ax_add_zero ∈ gamma_add_zero := by
  simp [gamma_add_zero]

-- La fórmula interior
def P_add_zero : Formula := .eq (x +_s n_zero) x

-- Demostración de que Γ ⊢ x + 0 = x usando las nuevas tácticas
theorem derives_x_add_zero : Derives gamma_add_zero P_add_zero := by
  have h1 : Derives gamma_add_zero (.forall P_add_zero) :=
    Derives.hyp gamma_add_zero (.forall P_add_zero) ax_add_zero_in_gamma
  
  have h2 : substFormula 0 x P_add_zero = P_add_zero := by rfl
  rw [← h2]
  derive_apply h1 with [x]

-- ============================================================
-- Teoría Completa
-- ============================================================

def FullTheoryAxioms : Theory Formula where
  axioms f :=
    Or (f ∈ BaseAxiomsList)
       (Or (f ∈ ArithmeticAxiomsList)
           (∃ (P : Formula), f = ax_epsilon_induction P))

-- Teorema global sobre FullTheoryAxioms
theorem theory_proves_x_add_zero : Theory.proves FullTheoryAxioms P_add_zero := by
  apply Exists.intro gamma_add_zero
  apply And.intro
  · intro g hg
    cases hg with
    | head _ => 
      -- Mostrar que ax_add_zero está en FullTheoryAxioms
      apply Or.inr
      apply Or.inl
      simp [ArithmeticAxiomsList, gamma_add_zero]
    | tail _ h_tail => contradiction
  · exact derives_x_add_zero

end DeepArithmetic.LogicAbstraction.Proofs
