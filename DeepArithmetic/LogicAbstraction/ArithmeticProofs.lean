import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Tactics
import DeepArithmetic.LogicAbstraction.Proofs

namespace DeepArithmetic.LogicAbstraction.ArithmeticProofs

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
theorem derives_succ_add : 
  Theory.proves FullTheoryAxioms (.forall P_succ_add) := by
  apply Exists.intro gamma_full
  apply And.intro
  · intro f hf
    simp [gamma_full, FullTheoryAxioms, ArithmeticAxiomsList, SetTheoryAxiomsList] at hf
    rcases hf with h | h | h | h | h
    · subst h; right; right; left; rfl
    · subst h; right; left; simp
    · subst h; right; left; simp
    · subst h; right; left; simp
    · subst h; left; simp
  · -- Now we are in Derives gamma_full (.forall P_succ_add)
    have h_eps : Derives gamma_full (ax_epsilon_induction P_succ_add) :=
      Derives.hyp _ _ (by simp [gamma_full])
    
    -- ax_epsilon_induction P es `outer_forall ⇒ ∀ P`.
    -- outer_forall es `∀ y ( (∀ z (z ∈ y ⇒ P(z))) ⇒ P(y) )`
    have h_outer : Derives gamma_full (Formula.forall (Formula.impl (Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add)) P_succ_add)) := by
      have h_lift : gamma_full.map (liftFormula 0) = gamma_full := by rfl
      rw [← h_lift]
      apply Derives.intro_forall
      apply Derives.intro_impl
      apply Derives.intro_impl
      
      have h_cases_ax : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) ax_nat_cases :=
        Derives.hyp _ _ (by simp [gamma_full])
        
      have h_cases_inst : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) 
        (Formula.impl (is_nat (.var 0)) (.or (.eq (.var 0) n_zero) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))))) := by
        have h_eval : substFormula 0 (.var 0) (Formula.impl (is_nat (.var 0)) (.or (.eq (.var 0) n_zero) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))))) = Formula.impl (is_nat (.var 0)) (.or (.eq (.var 0) n_zero) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))))) := by rfl
        rw [← h_eval]
        exact Derives.elim_forall _ _ _ h_cases_ax
        
      have h_is_nat : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (is_nat (.var 0)) :=
        Derives.hyp _ _ (by simp)
        
      have h_or : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) 
        (.or (.eq (.var 0) n_zero) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))))) :=
        Derives.elim_impl _ _ _ h_is_nat h_cases_inst
        
      have h_A_implies_C : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) 
        (Formula.impl (.eq (.var 0) n_zero) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
        apply Derives.intro_impl
        -- Context: y = 0 :: is_nat(y) :: IH_eps :: gamma_full
        
        -- 1. Extract y = 0
        have hy0 : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (.eq (.var 0) n_zero) :=
          Derives.hyp _ _ (by simp)
          
        -- 2. Extract is_nat(y)
        have h_nat_y : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (is_nat (.var 0)) :=
          Derives.hyp _ _ (by simp)
          
        -- 3. Obtain is_nat(0) via substitution
        have h_nat_0 : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (substFormula 0 n_zero (is_nat (.var 0))) := by
          have h_eval : substFormula 0 (.var 0) (is_nat (.var 0)) = is_nat (.var 0) := by rfl
          have h_nat_y_subst : Derives _ (substFormula 0 (.var 0) (is_nat (.var 0))) := by
            rw [h_eval]
            exact h_nat_y
          exact Derives.subst _ _ _ (is_nat (.var 0)) hy0 h_nat_y_subst
          
        -- 4. Bring lemma_add_base via weakening
        have h_base : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (substFormula 0 n_zero P_succ_add) :=
          Derives.weakening gamma_base _ _ lemma_add_base (by simp [gamma_base, gamma_full])
          
        -- 5. Extract Q(0)
        have h_Q_0 : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (substFormula 0 n_zero (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
          have h_eval_P : substFormula 0 n_zero P_succ_add = Formula.impl (substFormula 0 n_zero (is_nat (.var 0))) (substFormula 0 n_zero (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by rfl
          have h_base_rw : Derives _ (Formula.impl (substFormula 0 n_zero (is_nat (.var 0))) (substFormula 0 n_zero (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))))) := by
            rw [← h_eval_P]
            exact h_base
          exact Derives.elim_impl _ _ _ h_nat_0 h_base_rw
          
        -- 6. Substitute 0 back to y to get Q(y)
        have h_0y : Derives (.eq (.var 0) n_zero :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (.eq n_zero (.var 0)) := by
          have h_symm_f : Formula := .eq n_zero (.var 0)
          have h_symm : Derives _ h_symm_f := by
             have h_refl : Derives _ (.eq n_zero n_zero) := Derives.refl _ _
             have h_eval_subst : substFormula 0 (.var 0) (.eq n_zero (.var 0)) = .eq n_zero (.var 0) := by rfl
             have h_eval_orig : substFormula 0 n_zero (.eq n_zero (.var 0)) = .eq n_zero n_zero := by rfl
             have h_subst : Derives _ (substFormula 0 (.var 0) (.eq n_zero (.var 0))) := by
               rw [h_eval_orig] at h_refl
               exact Derives.subst _ _ _ (.eq n_zero (.var 0)) hy0 h_refl
             rw [← h_eval_subst]
             exact h_subst
          exact h_symm

        have h_eval_Q0 : substFormula 0 n_zero (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))) = .eq (n_add (n_succ (.var 1)) n_zero) (n_succ (n_add (.var 1) n_zero)) := by rfl
        have h_eval_Qy : substFormula 0 (.var 0) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))) = .eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))) := by rfl
        
        have h_Q_y_subst : Derives _ (substFormula 0 (.var 0) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
          exact Derives.subst _ _ _ (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))) h_0y h_Q_0
          
        rw [h_eval_Qy] at h_Q_y_subst
        exact h_Q_y_subst
        
      have h_B_implies_C : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) 
        (Formula.impl (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
        apply Derives.intro_impl
        
        have h_ex : Derives (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))) :=
          Derives.hyp _ _ (by simp)
          
        have h_lift_gamma : (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full).map (liftFormula 0) = 
          (.ex (.and (.eq (.var 2) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 1) :: Formula.forall (Formula.impl (In (.var 0) (.var 2)) (liftFormula 1 P_succ_add)) :: gamma_full) := by rfl

      have h_B_implies_C : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) 
        (Formula.impl (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
        apply Derives.intro_impl
        
        have h_ex : Derives (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)))) :=
          Derives.hyp _ _ (by simp)
          
        have h_lift_gamma : (.ex (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full).map (liftFormula 0) = 
          (.ex (.and (.eq (.var 2) (n_succ (.var 0))) (is_nat (.var 0))) :: is_nat (.var 1) :: Formula.forall (Formula.impl (In (.var 0) (.var 2)) (liftFormula 1 P_succ_add)) :: gamma_full) := by rfl

        have h_elim_ex : Derives (.and (.eq (.var 1) (n_succ (.var 0))) (is_nat (.var 0)) :: is_nat (.var 1) :: Formula.forall (Formula.impl (In (.var 0) (.var 2)) (liftFormula 1 P_succ_add)) :: gamma_full) 
          (liftFormula 0 (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0))))) := by
          -- We have `y = succ(k)` and `is_nat(k)`
          -- We need to prove `Q(y)` which is `succ(x) + y = succ(x + y)`
          -- By IH we get `is_nat(k) ⇒ Q(k)`
          -- So we get `Q(k)` which is `succ(x) + k = succ(x + k)`
          -- By lemma_add_step_eq we get `Q(succ(k))`
          -- We substitute `succ(k)` with `y` to get `Q(y)`
          sorry

        have h_elim_ex_apply : Derives _ _ := Derives.elim_ex _ _ _ h_ex h_elim_ex
        have h_eval_C : liftFormula 0 (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))) = .eq (n_add (n_succ (.var 2)) (.var 1)) (n_succ (n_add (.var 2) (.var 1))) := by rfl
        rw [← h_lift_gamma] at h_elim_ex_apply
        exact h_elim_ex_apply
        
      have h_QC : Derives (is_nat (.var 0) :: Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_succ_add) :: gamma_full) (.eq (n_add (n_succ (.var 1)) (.var 0)) (n_succ (n_add (.var 1) (.var 0)))) :=
        derive_elim_or h_or and h_A_implies_C and h_B_implies_C
        
      exact h_QC
      
    exact Derives.elim_impl _ _ _ h_eps h_outer

-- ============================================================
-- LEMA: 0 + y = y
-- ============================================================

def P_zero_add : Formula :=
  is_nat (.var 0) ⇒ .eq (n_add n_zero (.var 0)) (.var 0)

-- Caso base: 0 + 0 = 0
-- Al sustituir y=0 en P_zero_add, obtenemos is_nat(0) => 0 + 0 = 0
theorem lemma_zero_add_base : Derives gamma_base (substFormula 0 n_zero P_zero_add) := by
  apply Derives.intro_impl
  -- Contexto: is_nat(n_zero) :: gamma_base
  -- Objetivo: n_zero + n_zero = n_zero
  -- Por ax_add_zero, sabemos que ∀ z, z + 0 = z
  -- Sustituyendo z=0, obtenemos 0 + 0 = 0
  
  have h_ax : Derives (is_nat n_zero :: gamma_base) ax_add_zero :=
    Derives.hyp _ _ (List.Mem.tail _ ax_add_zero_in_gamma_base)
    
  have h_eval : substFormula 0 n_zero (.eq ((.var 0) +_s n_zero) (.var 0)) = .eq (n_add n_zero n_zero) n_zero := by rfl
  
  have h_inst : Derives _ (substFormula 0 n_zero (.eq ((.var 0) +_s n_zero) (.var 0))) := by
    exact Derives.elim_forall _ _ _ h_ax
    
  rw [h_eval] at h_inst
  exact h_inst

end DeepArithmetic.LogicAbstraction.ArithmeticProofs

-- Reabrimos para añadir el caso paso
namespace DeepArithmetic.LogicAbstraction.ArithmeticProofs

def gamma_step_zero : List Formula := [ax_add_succ]

theorem ax_add_succ_in_gamma_step_zero : ax_add_succ ∈ gamma_step_zero := by
  simp [gamma_step_zero]

-- Lema: Caso Paso para 0 + y = y
-- Asumimos 0 + k = k, probamos 0 + succ(k) = succ(k)
theorem lemma_zero_add_step_eq : Derives gamma_step_zero (Formula.impl (.eq (n_add n_zero (.var 0)) (.var 0)) (.eq (n_add n_zero (n_succ (.var 0))) (n_succ (.var 0)))) := by
  apply Derives.intro_impl
  -- Contexto: 0 + k = k :: gamma_step_zero
  -- Objetivo: 0 + succ(k) = succ(k)
  
  -- 1. Por ax_add_succ: ∀ x y, x + succ(y) = succ(x + y)
  have h_ax : Derives (.eq (n_add n_zero (.var 0)) (.var 0) :: gamma_step_zero) ax_add_succ :=
    Derives.hyp _ _ (List.Mem.tail _ ax_add_succ_in_gamma_step_zero)
    
  -- Instanciamos con x=0, y=k
  -- Al instanciar x=0 (var 1), la fórmula queda con y=.var 0
  have h_ax_x0 : Derives _ (substFormula 1 n_zero (.forall (.eq (n_add (.var 1) (n_succ (.var 0))) (n_succ (n_add (.var 1) (.var 0)))))) := by
    exact Derives.elim_forall _ _ _ h_ax
    
  have h_eval_x0 : substFormula 1 n_zero (.forall (.eq (n_add (.var 1) (n_succ (.var 0))) (n_succ (n_add (.var 1) (.var 0))))) = 
                   .forall (.eq (n_add n_zero (n_succ (.var 0))) (n_succ (n_add n_zero (.var 0)))) := by rfl
  rw [h_eval_x0] at h_ax_x0
  
  -- Instanciamos con y=k (var 0)
  have h_ax_y0 : Derives _ (substFormula 0 (.var 0) (.eq (n_add n_zero (n_succ (.var 0))) (n_succ (n_add n_zero (.var 0))))) := by
    exact Derives.elim_forall _ _ _ h_ax_x0
    
  have h_eval_y0 : substFormula 0 (.var 0) (.eq (n_add n_zero (n_succ (.var 0))) (n_succ (n_add n_zero (.var 0)))) = 
                   .eq (n_add n_zero (n_succ (.var 0))) (n_succ (n_add n_zero (.var 0))) := by rfl
  rw [h_eval_y0] at h_ax_y0
  
  -- 2. Tenemos h_ax_y0: 0 + succ(k) = succ(0 + k)
  -- Tenemos la hipótesis IH: 0 + k = k
  have h_IH : Derives _ (.eq (n_add n_zero (.var 0)) (.var 0)) :=
    Derives.hyp _ _ (by simp)
    
  -- Queremos sustituir (0 + k) por k en succ(0 + k)
  -- Para usar Derives.subst, necesitamos un teorema de reflexividad:
  have h_refl : Derives _ (.eq (n_add n_zero (n_succ (.var 0))) (n_add n_zero (n_succ (.var 0)))) :=
    Derives.refl _ _
    
  -- Vamos a sustituir en la fórmula F(z) := 0 + succ(k) = succ(z)
  -- F(z) es `.eq (n_add n_zero (n_succ (.var 0))) (n_succ z)`
  -- Queremos probar F(k) a partir de F(0 + k) y la igualdad (0 + k) = k
  have h_eval_subst1 : substFormula 0 (n_add n_zero (.var 0)) (.eq (n_add n_zero (n_succ (.var 1))) (n_succ (.var 0))) = 
                       .eq (n_add n_zero (n_succ (.var 0))) (n_succ (n_add n_zero (.var 0))) := by rfl
                       
  have h_eval_subst2 : substFormula 0 (.var 0) (.eq (n_add n_zero (n_succ (.var 1))) (n_succ (.var 0))) = 
                       .eq (n_add n_zero (n_succ (.var 0))) (n_succ (.var 0)) := by rfl
                       
  have h_ax_rewritten : Derives _ (substFormula 0 (n_add n_zero (.var 0)) (.eq (n_add n_zero (n_succ (.var 1))) (n_succ (.var 0)))) := by
    rw [h_eval_subst1]
    exact h_ax_y0
    
  have h_final : Derives _ (substFormula 0 (.var 0) (.eq (n_add n_zero (n_succ (.var 1))) (n_succ (.var 0)))) := by
    exact Derives.subst _ _ _ (.eq (n_add n_zero (n_succ (.var 1))) (n_succ (.var 0))) h_IH h_ax_rewritten
    
  rw [h_eval_subst2] at h_final
  exact h_final

def gamma_zero_add_full : List Formula := [
  ax_epsilon_induction P_zero_add,
  ax_nat_cases,
  ax_add_zero,
  ax_add_succ,
  ax_succ_in
]

theorem derives_zero_add : Theory.proves FullTheoryAxioms (.forall P_zero_add) := by
  apply And.intro
  · intro f hf
    simp [gamma_zero_add_full, FullTheoryAxioms, ArithmeticAxiomsList, SetTheoryAxiomsList] at hf
    rcases hf with h | h | h | h | h
    · subst h; right; right; left; rfl
    · subst h; right; left; simp
    · subst h; right; left; simp
    · subst h; right; left; simp
    · subst h; left; simp
  · have h_eps : Derives gamma_zero_add_full (ax_epsilon_induction P_zero_add) :=
      Derives.hyp _ _ (by simp [gamma_zero_add_full])
      
    have h_outer : Derives gamma_zero_add_full (Formula.forall (Formula.impl (Formula.forall (Formula.impl (In (.var 0) (.var 1)) P_zero_add)) P_zero_add)) := by
      sorry -- Ensamblaje análogo a derives_succ_add usando lemma_zero_add_base y lemma_zero_add_step_eq
      
    exact Derives.elim_impl _ _ _ h_eps h_outer

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

end DeepArithmetic.LogicAbstraction.ArithmeticProofs
