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

end DeepArithmetic.LogicAbstraction.ArithmeticMultProofs
