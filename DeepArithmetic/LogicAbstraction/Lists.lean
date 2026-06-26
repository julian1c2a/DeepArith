import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar

namespace DeepArithmetic.LogicAbstraction.Lists

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar

/-- Predicado unario que afirma que un término es una lista -/
def is_list (t : Term) : Formula := .atom "is_list" [t]

-- ============================================================
-- Axiomas de Construcción de Listas
-- ============================================================

/-- El término `l_nil` es una lista. -/
def ax_list_nil : Formula :=
  is_list l_nil

/-- Si `t` es una lista y `h` es cualquier término, entonces `l_cons h t` es una lista. -/
def ax_list_cons : Formula :=
  .forall (.forall (
    Formula.impl (is_list (.var 0)) (is_list (l_cons (.var 1) (.var 0)))
  ))

-- ============================================================
-- Axiomas Estructurales (Inducción y Casos)
-- ============================================================

/-- Si `x` es una lista, entonces `x = l_nil` o existe `h, t` tal que `x = l_cons(h, t)`. 
    x = .var 0
    h = .var 1
    t = .var 2
    ∀ x (is_list(x) ⇒ x = l_nil ∨ ∃ h ∃ t (x = l_cons(h, t)))
-/
def ax_list_cases : Formula :=
  .forall (
    Formula.impl (is_list (.var 0))
      (Formula.or
        (.eq (.var 0) l_nil)
        (.ex (.ex (.eq (.var 2) (l_cons (.var 1) (.var 0)))))
      )
  )

/-- Esquema de Inducción para Listas.
    Si P(l_nil) y ∀h ∀t (P(t) ⇒ P(l_cons h t)), entonces ∀x (is_list(x) ⇒ P(x)).
    varIdx identifica la variable libre de la lista en la fórmula P.
-/
def ax_list_induction (P : Formula) (varIdx : Nat := 0) : Formula :=
  let p_nil := substFormula varIdx l_nil P
  let p_var := P -- Asumiendo que varIdx = 0 para la hipótesis inductiva
  let p_cons := substFormula varIdx (l_cons (.var 1) (.var 0)) P
  let step := .forall (.forall (Formula.impl p_var p_cons))
  let conclusion := .forall (Formula.impl (is_list (.var 0)) P)
  Formula.impl (.and p_nil step) conclusion

def ListAxiomsList : List Formula := [
  ax_list_nil,
  ax_list_cons,
  ax_list_cases
]

end DeepArithmetic.LogicAbstraction.Lists
