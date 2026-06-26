import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar

namespace DeepArithmetic.LogicAbstraction.Trees

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar

-- ============================================================
-- Símbolos Estructurales Primitivos de Árboles
-- ============================================================

/-- Representa un árbol vacío o una hoja base -/
def t_leaf : Term := .func "t_leaf" []

/-- Representa un nodo con un valor `v`, y dos subárboles `l` y `r` -/
def t_node (v l r : Term) : Term := .func "t_node" [v, l, r]

/-- Predicado unario que afirma que un término es un árbol binario -/
def is_tree (t : Term) : Formula := .atom "is_tree" [t]

-- ============================================================
-- Axiomas de Construcción de Árboles
-- ============================================================

/-- El término `t_leaf` es un árbol. -/
def ax_tree_leaf : Formula :=
  is_tree t_leaf

/-- Si `l` y `r` son árboles, para cualquier valor `v`, `t_node(v, l, r)` es un árbol. 
    v = .var 2, l = .var 1, r = .var 0
-/
def ax_tree_node : Formula :=
  .forall (.forall (.forall (
    Formula.impl (.and (is_tree (.var 1)) (is_tree (.var 0)))
                 (is_tree (t_node (.var 2) (.var 1) (.var 0)))
  )))

-- ============================================================
-- Axiomas Estructurales (Inducción y Casos)
-- ============================================================

/-- Si `x` es un árbol, entonces `x = t_leaf` o existe `v, l, r` tal que `x = t_node(v, l, r)`. 
    x = .var 0
    v = .var 1
    l = .var 2
    r = .var 3
-/
def ax_tree_cases : Formula :=
  .forall (
    Formula.impl (is_tree (.var 0))
      (Formula.or
        (.eq (.var 0) t_leaf)
        (.ex (.ex (.ex (.eq (.var 3) (t_node (.var 2) (.var 1) (.var 0))))))
      )
  )

/-- Esquema de Inducción Estructural para Árboles.
    Si P(t_leaf) y ∀v ∀l ∀r (is_tree(l) ∧ is_tree(r) ∧ P(l) ∧ P(r) ⇒ P(t_node v l r)), 
    entonces ∀x (is_tree(x) ⇒ P(x)).
-/
def ax_tree_induction (P : Formula) (varIdx : Nat := 0) : Formula :=
  let p_leaf := substFormula varIdx t_leaf P
  -- En el caso de inducción necesitamos dos hipótesis (para l y r)
  -- En nuestra codificación simplificada sin variables con nombre explícito, 
  -- dejaremos el marco como una macro que se deberá expandir apropiadamente.
  -- Para mantenerlo análogo a Peano, requerimos instanciar P en `.var 1` y `.var 0`.
  -- Este es un "placeholder" de la estructura lógica del esquema.
  let p_l := substFormula varIdx (.var 1) P
  let p_r := substFormula varIdx (.var 0) P
  let p_node := substFormula varIdx (t_node (.var 2) (.var 1) (.var 0)) P
  let step := .forall (.forall (.forall (
                Formula.impl (.and (.and (is_tree (.var 1)) (is_tree (.var 0))) 
                                   (.and p_l p_r)) 
                             p_node)))
  let conclusion := .forall (Formula.impl (is_tree (.var 0)) P)
  Formula.impl (.and p_leaf step) conclusion

def TreeAxiomsList : List Formula := [
  ax_tree_leaf,
  ax_tree_node,
  ax_tree_cases
]

end DeepArithmetic.LogicAbstraction.Trees
