import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Lists
import DeepArithmetic.LogicAbstraction.Tactics
import DeepArithmetic.LogicAbstraction.Proofs
import DeepArithmetic.LogicAbstraction.Automata

namespace DeepArithmetic.LogicAbstraction.AutomataProofs

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Lists
open DeepArithmetic.LogicAbstraction.Tactics
open DeepArithmetic.LogicAbstraction.Proofs
open DeepArithmetic.LogicAbstraction.Automata

-- ============================================================
-- Teoremas Estructurales de Autómatas
-- ============================================================

/-- Contexto con axiomas de listas, aritmética y autómatas -/
def AutomataAxiomContext : List Formula := 
  ArithmeticAxiomsList ++ ListAxiomsList ++ AutomataAxiomsList

-- Teorema Fundamental de Cadenas: dfa_run(q, l_append(l1, l2)) = dfa_run(dfa_run(q, l1), l2)
-- Inducción sobre l1.

/-- Lema Base: l1 = l_nil -> dfa_run(q, l_append(l_nil, l2)) = dfa_run(dfa_run(q, l_nil), l2) -/
def lemma_run_assoc_base : 
  AutomataAxiomContext ⊢ .forall (.forall (.eq 
    (dfa_run (.var 1) (l_append l_nil (.var 0))) 
    (dfa_run (dfa_run (.var 1) l_nil) (.var 0))
  )) := 
  sorry

/-- Lema Paso Inductivo: P(t) -> P(l_cons(c, t)) -/
def lemma_run_assoc_step :
  AutomataAxiomContext ⊢ .forall (.forall (.forall (.forall (
    Formula.impl (.eq (dfa_run (.var 3) (l_append (.var 1) (.var 2)))
                      (dfa_run (dfa_run (.var 3) (.var 1)) (.var 2)))
                 (.eq (dfa_run (.var 3) (l_append (l_cons (.var 0) (.var 1)) (.var 2)))
                      (dfa_run (dfa_run (.var 3) (l_cons (.var 0) (.var 1))) (.var 2)))
  )))) := 
  sorry

/-- Teorema de Asociatividad de Ejecución -/
def derives_run_assoc :
  AutomataAxiomContext ⊢ .forall (.forall (.forall (
    Formula.impl (is_list (.var 1))
                 (.eq (dfa_run (.var 2) (l_append (.var 1) (.var 0)))
                      (dfa_run (dfa_run (.var 2) (.var 1)) (.var 0)))
  ))) := 
  sorry

end DeepArithmetic.LogicAbstraction.AutomataProofs
