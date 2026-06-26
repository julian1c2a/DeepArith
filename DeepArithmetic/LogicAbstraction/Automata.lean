import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar
import DeepArithmetic.LogicAbstraction.Lists

namespace DeepArithmetic.LogicAbstraction.Automata

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar
open DeepArithmetic.LogicAbstraction.Lists

-- ============================================================
-- Componentes del Autómata Abstracto (DFA)
-- ============================================================

/-- Estado Inicial del DFA -/
def dfa_q0 : Term := .func "dfa_q0" []

/-- Función de transición: δ(estado, símbolo) = estado -/
def dfa_delta (q c : Term) : Term := .func "dfa_delta" [q, c]

/-- Predicado de aceptación: F(estado) -/
def is_dfa_accept (q : Term) : Formula := .atom "is_dfa_accept" [q]

-- ============================================================
-- Función de Ejecución de Cadenas
-- ============================================================

/-- Función de ejecución que procesa una lista de símbolos partiendo de un estado -/
def dfa_run (q l : Term) : Term := .func "dfa_run" [q, l]

/-- Caso base: ejecutar con lista vacía no altera el estado -/
def ax_dfa_run_nil : Formula :=
  .forall (.eq (dfa_run (.var 0) l_nil) (.var 0))

/-- Caso recursivo: ejecutar con l_cons(c, t) equivale a ejecutar t desde δ(q, c)
    c = .var 2, t = .var 1, q = .var 0
-/
def ax_dfa_run_cons : Formula :=
  .forall (.forall (.forall (
    .eq (dfa_run (.var 0) (l_cons (.var 2) (.var 1)))
        (dfa_run (dfa_delta (.var 0) (.var 2)) (.var 1))
  )))

def AutomataAxiomsList : List Formula := [
  ax_dfa_run_nil,
  ax_dfa_run_cons
]

end DeepArithmetic.LogicAbstraction.Automata
