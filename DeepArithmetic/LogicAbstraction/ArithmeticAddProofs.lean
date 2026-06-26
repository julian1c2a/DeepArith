import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Tactics
import DeepArithmetic.LogicAbstraction.Proofs

namespace DeepArithmetic.LogicAbstraction.ArithmeticAddProofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Tactics
open DeepArithmetic.LogicAbstraction.Proofs

-- ============================================================
-- INDUCCIÓN ARITMÉTICA (Vía ε-Inducción de Von Neumann)
-- ============================================================

-- El esquema de epsilon-inducción instanciado para una propiedad P
def epsilon_induction_P (P : Formula) : Formula :=
  ax_epsilon_induction P

-- TEOREMA 2: Paso inductivo simétrico de la suma
-- Demostraremos que: is_nat(y) ⇒ succ(x) + y = succ(x + y)
-- Esta es la propiedad P(y) sobre la que haremos inducción.
-- Aquí, y = .var 0 (variable de inducción), y x = .var 1 (parámetro libre)
def P_succ_add : Formula :=
  is_nat (.var 0) ⇒ .eq ((n_succ (.var 1)) +_s (.var 0)) (n_succ ((.var 1) +_s (.var 0)))

def gamma_base : List Formula := [ax_add_zero]

theorem ax_add_zero_in_gamma_base : ax_add_zero ∈ gamma_base := by
  simp [gamma_base]

-- Lema: Caso Base de la Inducción (y = n_zero)
-- Queremos demostrar: is_nat(n_zero) ⇒ succ(x) + n_zero = succ(x + n_zero)
-- Al sustituir 0 por n_zero, la variable libre #1 se decrementa a #0.
-- Por tanto, probamos: succ(#0) + n_zero = succ(#0 + n_zero)
theorem lemma_add_base : Derives gamma_base (substFormula 0 n_zero P_succ_add) := by
  apply Derives.intro_impl
  
  -- h_ax : ∀ z, z + n_zero = z
  have h_ax : Derives (is_nat n_zero :: gamma_base) ax_add_zero :=
    Derives.hyp _ _ (List.Mem.tail _ ax_add_zero_in_gamma_base)
    
  -- hA : succ(#0) + n_zero = succ(#0)
  have hA : Derives (is_nat n_zero :: gamma_base) (.eq (n_add (n_succ (.var 0)) n_zero) (n_succ (.var 0))) := by
    have h_eval : substFormula 0 (n_succ (.var 0)) (.eq ((.var 0) +_s n_zero) (.var 0)) = 
                  .eq (n_add (n_succ (.var 0)) n_zero) (n_succ (.var 0)) := by rfl
    rw [← h_eval]
    derive_apply h_ax with [n_succ (.var 0)]

  -- hB : #0 + n_zero = #0
  have hB : Derives (is_nat n_zero :: gamma_base) (.eq (n_add (.var 0) n_zero) (.var 0)) := by
    have h_eval : substFormula 0 (.var 0) (.eq ((.var 0) +_s n_zero) (.var 0)) = 
                  .eq (n_add (.var 0) n_zero) (.var 0) := by rfl
    rw [← h_eval]
    derive_apply h_ax with [.var 0]
    
  -- Usamos simetría para tener #0 = #0 + n_zero
  have hB_symm := derive_eq_symm hB
  
  -- Usamos Derives.subst con f = (succ(#1) + n_zero = succ(#0))
  let f_subst := Formula.eq (n_add (n_succ (.var 1)) n_zero) (n_succ (.var 0))
  
  -- El objetivo es equivalente a substFormula 0 (#0 + n_zero) f_subst
  have h_goal : substFormula 0 n_zero ((n_succ (.var 1) +_s .var 0) ≐ n_succ (.var 1 +_s .var 0)) = 
                substFormula 0 (n_add (.var 0) n_zero) f_subst := by rfl
                
  rw [h_goal]
  
  -- substFormula 0 #0 f_subst = (succ(#0) + n_zero = succ(#0)) (es hA)
  have h_hA : substFormula 0 (.var 0) f_subst = .eq (n_add (n_succ (.var 0)) n_zero) (n_succ (.var 0)) := by rfl
  
  have hA_subst : Derives (is_nat n_zero :: gamma_base) (substFormula 0 (.var 0) f_subst) := by
    rw [h_hA]
    exact hA

  -- Aplicamos Derives.subst con t1 = #0, t2 = #0 + n_zero
  exact Derives.subst _ (.var 0) (n_add (.var 0) n_zero) f_subst hB_symm hA_subst

-- Lema: ax_add_succ está en la teoría
def gamma_step : List Formula := [ax_add_succ]
theorem ax_add_succ_in_gamma_step : ax_add_succ ∈ gamma_step := by
  simp [gamma_step]

-- Lema Auxiliar: Paso Inductivo algebraico
-- Asumimos la hipótesis inductiva (IH): succ(x) + k = succ(x + k)
-- Queremos demostrar: succ(x) + succ(k) = succ(x + succ(k))
-- Sean:
-- k = .var 0
-- x = .var 1
def IH_eq : Formula := .eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))
def Step_eq : Formula := .eq (n_add (n_succ (.var 1)) (n_succ (.var 0))) (n_succ (n_add (.var 1) (n_succ (.var 0))))

theorem lemma_add_step_eq : Derives (IH_eq :: gamma_step) Step_eq := by
  -- h_ax : ∀ x y, y + succ(x) = succ(y + x)
  have h_ax : Derives (IH_eq :: gamma_step) ax_add_succ :=
    Derives.hyp _ _ (List.Mem.tail _ ax_add_succ_in_gamma_step)
    
  -- A = B: succ(x) + succ(k) = succ(succ(x) + k)
  have hAB : Derives (IH_eq :: gamma_step) (.eq (n_add (n_succ (.var 1)) (n_succ (.var 0))) (n_succ (n_add (n_succ (.var 1)) (.var 0)))) := by
    derive_apply h_ax with [n_succ (.var 1), .var 0]

  -- IH: succ(x) + k = succ(x + k)
  have hIH : Derives (IH_eq :: gamma_step) IH_eq :=
    Derives.hyp _ _ (List.Mem.head _)
    
  -- B = C: succ(succ(x) + k) = succ(succ(x + k))
  have hBC : Derives (IH_eq :: gamma_step) (.eq (n_succ (n_add (n_succ (.var 1)) (.var 0))) (n_succ (n_succ (n_add (.var 1) (.var 0))))) := by
    let f_subst := Formula.eq (n_succ (n_add (n_succ (.var 2)) (.var 1))) (n_succ (.var 0))
    have h_goal : substFormula 0 (n_succ (n_add (.var 1) (.var 0))) f_subst = 
                  .eq (n_succ (n_add (n_succ (.var 1)) (.var 0))) (n_succ (n_succ (n_add (.var 1) (.var 0)))) := by rfl
    rw [← h_goal]
    have h_refl : substFormula 0 (n_add (n_succ (.var 1)) (.var 0)) f_subst = 
                  .eq (n_succ (n_add (n_succ (.var 1)) (.var 0))) (n_succ (n_add (n_succ (.var 1)) (.var 0))) := by rfl
    have h_refl_der : Derives (IH_eq :: gamma_step) (substFormula 0 (n_add (n_succ (.var 1)) (.var 0)) f_subst) := by
      rw [h_refl]
      exact Derives.refl _ _
    exact Derives.subst _ _ _ f_subst hIH h_refl_der

  -- x + succ(k) = succ(x + k)
  have h_x_succ_k : Derives (IH_eq :: gamma_step) (.eq (n_add (.var 1) (n_succ (.var 0))) (n_succ (n_add (.var 1) (.var 0)))) := by
    derive_apply h_ax with [.var 1, .var 0]
    
  -- D = C: succ(x + succ(k)) = succ(succ(x + k))
  have hDC : Derives (IH_eq :: gamma_step) (.eq (n_succ (n_add (.var 1) (n_succ (.var 0)))) (n_succ (n_succ (n_add (.var 1) (.var 0))))) := by
    let f_subst := Formula.eq (n_succ (n_add (.var 2) (n_succ (.var 1)))) (n_succ (.var 0))
    have h_goal : substFormula 0 (n_succ (n_add (.var 1) (.var 0))) f_subst = 
                  .eq (n_succ (n_add (.var 1) (n_succ (.var 0)))) (n_succ (n_succ (n_add (.var 1) (.var 0)))) := by rfl
    rw [← h_goal]
    have h_refl : substFormula 0 (n_add (.var 1) (n_succ (.var 0))) f_subst = 
                  .eq (n_succ (n_add (.var 1) (n_succ (.var 0)))) (n_succ (n_add (.var 1) (n_succ (.var 0)))) := by rfl
    have h_refl_der : Derives (IH_eq :: gamma_step) (substFormula 0 (n_add (.var 1) (n_succ (.var 0))) f_subst) := by
      rw [h_refl]
      exact Derives.refl _ _
    exact Derives.subst _ _ _ f_subst h_x_succ_k h_refl_der
    
  -- C = D (Symmetry of D = C)
  have hCD : Derives (IH_eq :: gamma_step) (.eq (n_succ (n_succ (n_add (.var 1) (.var 0)))) (n_succ (n_add (.var 1) (n_succ (.var 0))))) := by
    let f_subst := Formula.eq (.var 0) (n_succ (n_add (.var 2) (n_succ (.var 1))))
    have h_goal : substFormula 0 (n_succ (n_succ (n_add (.var 1) (.var 0)))) f_subst = 
                  .eq (n_succ (n_succ (n_add (.var 1) (.var 0)))) (n_succ (n_add (.var 1) (n_succ (.var 0)))) := by rfl
    rw [← h_goal]
    have h_refl : substFormula 0 (n_succ (n_add (.var 1) (n_succ (.var 0)))) f_subst = 
                  .eq (n_succ (n_add (.var 1) (n_succ (.var 0)))) (n_succ (n_add (.var 1) (n_succ (.var 0)))) := by rfl
    have h_refl_der : Derives (IH_eq :: gamma_step) (substFormula 0 (n_succ (n_add (.var 1) (n_succ (.var 0)))) f_subst) := by
      rw [h_refl]
      exact Derives.refl _ _
    exact Derives.subst _ _ _ f_subst hDC h_refl_der

  -- A = C (Transitivity of A = B and B = C)
  have hAC : Derives (IH_eq :: gamma_step) (.eq (n_add (n_succ (.var 1)) (n_succ (.var 0))) (n_succ (n_succ (n_add (.var 1) (.var 0))))) := by
    derive_trans hAB and hBC
    
  -- A = D (Transitivity of A = C and C = D)
  have hAD : Derives (IH_eq :: gamma_step) (.eq (n_add (n_succ (.var 1)) (n_succ (.var 0))) (n_succ (n_add (.var 1) (n_succ (.var 0))))) := by
    derive_trans hAC and hCD

  exact hAD

def gamma_full : List Formula := [
  ax_epsilon_induction P_succ_add,
  ax_nat_cases,
  ax_add_zero,
  ax_add_succ,
  ax_succ_in
]

-- El objetivo final es deducir ∀ y, P_succ_add
theorem derives_succ_add : Theory.proves FullTheoryAxioms (.forall P_succ_add) := by
  sorry

-- ============================================================
-- LEMA: 0 + y = y
-- ============================================================

def P_zero_add : Formula :=
  is_nat (.var 0) ⇒ .eq (n_add n_zero (.var 0)) (.var 0)

-- Caso base: 0 + 0 = 0
-- Al sustituir y=0 en P_zero_add, obtenemos is_nat(0) => 0 + 0 = 0
theorem lemma_zero_add_base : Derives gamma_base (substFormula 0 n_zero P_zero_add) := by
  sorry

end DeepArithmetic.LogicAbstraction.ArithmeticAddProofs

-- Reabrimos para añadir el caso paso
namespace DeepArithmetic.LogicAbstraction.ArithmeticAddProofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Tactics
open DeepArithmetic.LogicAbstraction.Proofs

def gamma_step_zero : List Formula := [ax_add_succ]

theorem ax_add_succ_in_gamma_step_zero : ax_add_succ ∈ gamma_step_zero := by
  simp [gamma_step_zero]

-- Lema: Caso Paso para 0 + y = y
-- Asumimos 0 + k = k, probamos 0 + succ(k) = succ(k)
theorem lemma_zero_add_step_eq : Derives gamma_step_zero (Formula.impl (.eq (n_add n_zero (.var 0)) (.var 0)) (.eq (n_add n_zero (n_succ (.var 0))) (n_succ (.var 0)))) := by
  sorry

def gamma_zero_add_full : List Formula := [
  ax_epsilon_induction P_zero_add,
  ax_nat_cases,
  ax_add_zero,
  ax_add_succ,
  ax_succ_in
]

theorem derives_zero_add : Theory.proves FullTheoryAxioms (.forall P_zero_add) := by
  sorry

-- ============================================================
-- TEOREMA PRINCIPAL: Conmutatividad de la suma (x + y = y + x)
-- ============================================================

-- P_comm_add(y) = is_nat(y) ⇒ x + y = y + x
-- Aquí y = .var 0, x = .var 1
def P_comm_add : Formula :=
  is_nat (.var 0) ⇒ .eq (n_add (.var 1) (.var 0)) (n_add (.var 0) (.var 1))

-- Caso base: x + 0 = 0 + x
-- is_nat(0) ⇒ x + 0 = 0 + x
theorem lemma_comm_base : Derives gamma_base (substFormula 0 n_zero P_comm_add) := by
  apply Derives.intro_impl
  -- Contexto: is_nat(0) :: gamma_base
  -- Necesitamos x + 0 = x (por ax_add_zero)
  -- y también 0 + x = x (por derives_zero_add, asumiendo is_nat(x))
  -- Por transitividad y simetría, x + 0 = 0 + x
  sorry

-- Caso paso: x + succ(k) = succ(k) + x
theorem lemma_comm_step : Derives gamma_step_zero (Formula.impl (.eq (n_add (.var 1) (.var 0)) (n_add (.var 0) (.var 1))) (.eq (n_add (.var 1) (n_succ (.var 0))) (n_add (n_succ (.var 0)) (.var 1)))) := by
  apply Derives.intro_impl
  -- Contexto: x + k = k + x :: gamma_step_zero
  -- Por ax_add_succ: x + succ(k) = succ(x + k)
  -- Por derives_succ_add: succ(k) + x = succ(k + x)
  -- Por congruencia en IH: succ(x + k) = succ(k + x)
  -- Transitividad: x + succ(k) = succ(k) + x
  sorry

def gamma_comm_full : List Formula := [
  ax_epsilon_induction P_comm_add,
  ax_nat_cases,
  ax_add_zero,
  ax_add_succ,
  ax_succ_in,
  .forall P_zero_add,
  .forall P_succ_add
]

theorem derives_comm_add : Derives gamma_comm_full (.forall P_comm_add) := by
  have h_eps : Derives gamma_comm_full (ax_epsilon_induction P_comm_add) :=
    Derives.hyp _ _ (by simp [gamma_comm_full])
    
  have h_outer : Derives gamma_comm_full (Formula.forall (Formula.impl (Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_comm_add)) P_comm_add)) := by
    sorry -- Ensamblaje análogo usando lemma_comm_base y lemma_comm_step
    
  exact Derives.elim_impl _ _ _ h_eps h_outer

-- ============================================================
-- TEOREMA PRINCIPAL: Asociatividad de la suma (x + y) + z = x + (y + z)
-- ============================================================

-- P_assoc_add(z) = is_nat(z) ⇒ (x + y) + z = x + (y + z)
-- Aquí z = .var 0, y = .var 1, x = .var 2
def P_assoc_add : Formula :=
  is_nat (.var 0) ⇒ .eq (n_add (n_add (.var 2) (.var 1)) (.var 0)) (n_add (.var 2) (n_add (.var 1) (.var 0)))

-- Caso base: z = 0 -> (x + y) + 0 = x + (y + 0)
-- Sustituyendo z=0 en P_assoc_add
theorem lemma_assoc_base : Derives gamma_base (substFormula 0 n_zero P_assoc_add) := by
  apply Derives.intro_impl
  -- Por ax_add_zero, sabemos que w + 0 = w.
  -- Aplicado a w = (x + y), tenemos (x + y) + 0 = (x + y)
  -- Aplicado a w = y, tenemos y + 0 = y
  -- Por congruencia, x + (y + 0) = x + y
  -- Por transitividad y simetría, obtenemos el resultado.
  sorry

-- Caso paso: (x + y) + k = x + (y + k) => (x + y) + succ(k) = x + (y + succ(k))
theorem lemma_assoc_step : Derives gamma_step_zero (Formula.impl (.eq (n_add (n_add (.var 2) (.var 1)) (.var 0)) (n_add (.var 2) (n_add (.var 1) (.var 0)))) (.eq (n_add (n_add (.var 2) (.var 1)) (n_succ (.var 0))) (n_add (.var 2) (n_add (.var 1) (n_succ (.var 0)))))) := by
  apply Derives.intro_impl
  -- Contexto: IH -> (x + y) + k = x + (y + k)
  -- Objetivo: (x + y) + succ(k) = x + (y + succ(k))
  -- 1. Por ax_add_succ, (x + y) + succ(k) = succ((x + y) + k)
  -- 2. Usando IH, succ((x + y) + k) = succ(x + (y + k))
  -- 3. Por ax_add_succ, y + succ(k) = succ(y + k)
  -- 4. Por ax_add_succ en x y succ(y + k), x + succ(y + k) = succ(x + (y + k))
  -- 5. Transitividad de la igualdad
  sorry

def gamma_assoc_full : List Formula := [
  ax_epsilon_induction P_assoc_add,
  ax_nat_cases,
  ax_add_zero,
  ax_add_succ,
  ax_succ_in,
  .forall P_zero_add,
  .forall P_succ_add,
  .forall P_comm_add
]

theorem derives_assoc_add : Derives gamma_assoc_full (.forall P_assoc_add) := by
  have h_eps : Derives gamma_assoc_full (ax_epsilon_induction P_assoc_add) :=
    Derives.hyp _ _ (by simp [gamma_assoc_full])
    
  have h_outer : Derives gamma_assoc_full (Formula.forall (Formula.impl (Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_assoc_add)) P_assoc_add)) := by
    sorry -- Ensamblaje análogo usando lemma_assoc_base y lemma_assoc_step
    
  exact Derives.elim_impl _ _ _ h_eps h_outer

end DeepArithmetic.LogicAbstraction.ArithmeticAddProofs
