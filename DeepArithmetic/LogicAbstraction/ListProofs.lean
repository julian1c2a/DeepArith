import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Lists
import DeepArithmetic.LogicAbstraction.Tactics
import DeepArithmetic.LogicAbstraction.Proofs

namespace DeepArithmetic.LogicAbstraction.ListProofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Lists
open DeepArithmetic.LogicAbstraction.Tactics
open DeepArithmetic.LogicAbstraction.Proofs

-- ============================================================
-- Teoremas Estructurales de Listas
-- ============================================================

/-- Lista de todos los axiomas necesarios para deducciones en Listas -/
def ListAxiomContext : List Formula := ArithmeticAxiomsList ++ ListAxiomsList

-- Teorema: l_append(l_append(x, y), z) = l_append(x, l_append(y, z))
-- Inducción sobre x.

/-- Lema Base: x = l_nil -> l_append(l_append(l_nil, y), z) = l_append(l_nil, l_append(y, z)) -/
def lemma_append_assoc_base : 
  ListAxiomContext ⊢ .forall (.forall (.eq (l_append (l_append l_nil (.var 1)) (.var 0)) 
                                           (l_append l_nil (l_append (.var 1) (.var 0))))) := 
  sorry

/-- Lema Paso Inductivo: P(t) -> P(l_cons(h, t)) -/
def lemma_append_assoc_step :
  ListAxiomContext ⊢ .forall (.forall (.forall (.forall (
    Formula.impl (.eq (l_append (l_append (.var 1) (.var 3)) (.var 2)) 
                      (l_append (.var 1) (l_append (.var 3) (.var 2))))
                 (.eq (l_append (l_append (l_cons (.var 0) (.var 1)) (.var 3)) (.var 2))
                      (l_append (l_cons (.var 0) (.var 1)) (l_append (.var 3) (.var 2))))
  )))) := 
  sorry

/-- Teorema de Asociatividad de l_append -/
def derives_append_assoc :
  ListAxiomContext ⊢ .forall (.forall (.forall (
    Formula.impl (is_list (.var 2))
                 (.eq (l_append (l_append (.var 2) (.var 1)) (.var 0))
                      (l_append (.var 2) (l_append (.var 1) (.var 0))))
  ))) := 
  sorry

end DeepArithmetic.LogicAbstraction.ListProofs
