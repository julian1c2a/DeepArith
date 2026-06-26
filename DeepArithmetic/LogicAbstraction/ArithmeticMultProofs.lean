import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Tactics
import DeepArithmetic.LogicAbstraction.ArithmeticAddProofs

namespace DeepArithmetic.LogicAbstraction.ArithmeticMultProofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Tactics
open DeepArithmetic.LogicAbstraction.ArithmeticAddProofs

-- ============================================================
-- LEMA: 0 * y = 0
-- ============================================================

-- P_zero_mult(y) = is_nat(y) ⇒ 0 * y = 0
-- Aquí y = .var 0
def P_zero_mult : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult n_zero (.var 0)) n_zero

theorem lemma_zero_mult_base : Derives gamma_base (substFormula 0 n_zero P_zero_mult) := by
  sorry

def gamma_step_mult_zero : List Formula := [ax_mult_succ]

theorem lemma_zero_mult_step : Derives gamma_step_mult_zero (Formula.impl (.eq (n_mult n_zero (.var 0)) n_zero) (.eq (n_mult n_zero (n_succ (.var 0))) n_zero)) := by
  sorry

def gamma_zero_mult_full : List Formula := [
  ax_epsilon_induction P_zero_mult,
  ax_nat_cases,
  ax_mult_zero,
  ax_mult_succ,
  ax_succ_in,
  .forall P_zero_add,
  .forall P_succ_add
]

theorem derives_zero_mult : Theory.proves FullTheoryAxioms (Formula.forall P_zero_mult) := by
  sorry

-- ============================================================
-- LEMA: succ(x) * y = (x * y) + y
-- ============================================================

-- P_succ_mult(y) = is_nat(y) ⇒ succ(x) * y = (x * y) + y
-- y = .var 0, x = .var 1
def P_succ_mult : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult (n_succ (.var 1)) (.var 0)) (n_add (n_mult (.var 1) (.var 0)) (.var 0))

theorem lemma_succ_mult_base : Derives gamma_base (substFormula 0 n_zero P_succ_mult) := by
  sorry

theorem lemma_succ_mult_step : Derives gamma_step_zero (Formula.impl (.eq (n_mult (n_succ (.var 1)) (.var 0)) (n_add (n_mult (.var 1) (.var 0)) (.var 0))) (.eq (n_mult (n_succ (.var 1)) (n_succ (.var 0))) (n_add (n_mult (.var 1) (n_succ (.var 0))) (n_succ (.var 0))))) := by
  sorry

theorem derives_succ_mult : Theory.proves FullTheoryAxioms (Formula.forall P_succ_mult) := by
  sorry

-- ============================================================
-- TEOREMA PRINCIPAL: Conmutatividad de la multiplicación (x * y = y * x)
-- ============================================================

-- P_comm_mult(y) = is_nat(y) ⇒ x * y = y * x
-- y = .var 0, x = .var 1
def P_comm_mult : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult (.var 1) (.var 0)) (n_mult (.var 0) (.var 1))

theorem lemma_comm_mult_base : Derives gamma_base (substFormula 0 n_zero P_comm_mult) := by
  sorry

theorem lemma_comm_mult_step : Derives gamma_step_zero (Formula.impl (.eq (n_mult (.var 1) (.var 0)) (n_mult (.var 0) (.var 1))) (.eq (n_mult (.var 1) (n_succ (.var 0))) (n_mult (n_succ (.var 0)) (.var 1)))) := by
  sorry

def gamma_comm_mult_full : List Formula := [
  ax_epsilon_induction P_comm_mult,
  ax_nat_cases,
  ax_mult_zero,
  ax_mult_succ,
  ax_succ_in,
  .forall P_zero_mult,
  .forall P_succ_mult
]

theorem derives_comm_mult : Theory.proves FullTheoryAxioms (Formula.forall P_comm_mult) := by
  sorry

-- ============================================================
-- LEMA: 1 como elemento neutro (x * 1 = x)
-- ============================================================

def n_one : Term := n_succ n_zero

-- P_mult_one(x) = is_nat(x) ⇒ x * 1 = x
-- x = .var 0
def P_mult_one : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult (.var 0) n_one) (.var 0)

theorem lemma_mult_one_base : Derives gamma_base (substFormula 0 n_zero P_mult_one) := by
  sorry

theorem lemma_mult_one_step : Derives gamma_step_zero (Formula.impl (.eq (n_mult (.var 0) n_one) (.var 0)) (.eq (n_mult (n_succ (.var 0)) n_one) (n_succ (.var 0)))) := by
  sorry

def gamma_mult_one_full : List Formula := [
  ax_epsilon_induction P_mult_one,
  ax_nat_cases,
  ax_mult_zero,
  ax_mult_succ,
  ax_succ_in,
  .forall P_zero_mult,
  .forall P_succ_mult,
  .forall P_comm_mult
]

theorem derives_mult_one : Theory.proves FullTheoryAxioms (Formula.forall P_mult_one) := by
  sorry

-- Y por conmutatividad: 1 * x = x
-- P_one_mult(x) = is_nat(x) ⇒ 1 * x = x
-- x = .var 0
def P_one_mult : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult n_one (.var 0)) (.var 0)

theorem derives_one_mult : Theory.proves FullTheoryAxioms (Formula.forall P_one_mult) := by
  sorry

-- ============================================================
-- LEMA: Asociatividad de la multiplicación (x * y) * z = x * (y * z)
-- ============================================================

-- P_assoc_mult(z) = is_nat(z) ⇒ (x * y) * z = x * (y * z)
-- z = .var 0, y = .var 1, x = .var 2
def P_assoc_mult : Formula :=
  is_nat (.var 0) ⇒ .eq (n_mult (n_mult (.var 2) (.var 1)) (.var 0)) (n_mult (.var 2) (n_mult (.var 1) (.var 0)))

theorem lemma_assoc_mult_base : Derives gamma_base (substFormula 0 n_zero P_assoc_mult) := by
  sorry

theorem lemma_assoc_mult_step : Derives gamma_step_zero (Formula.impl (.eq (n_mult (n_mult (.var 2) (.var 1)) (.var 0)) (n_mult (.var 2) (n_mult (.var 1) (.var 0)))) (.eq (n_mult (n_mult (.var 2) (.var 1)) (n_succ (.var 0))) (n_mult (.var 2) (n_mult (.var 1) (n_succ (.var 0)))))) := by
  sorry

def gamma_assoc_mult_full : List Formula := [
  ax_epsilon_induction P_assoc_mult,
  ax_nat_cases,
  ax_mult_zero,
  ax_mult_succ,
  ax_succ_in,
  .forall P_zero_mult,
  .forall P_succ_mult,
  .forall P_comm_mult,
  .forall P_assoc_add,
  .forall P_comm_add
]

theorem derives_assoc_mult : Theory.proves FullTheoryAxioms (Formula.forall P_assoc_mult) := by
  sorry

end DeepArithmetic.LogicAbstraction.ArithmeticMultProofs
