import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory
import DeepArithmetic.LogicAbstraction.SyntacticSugar
import DeepArithmetic.LogicAbstraction.Arithmetic
import DeepArithmetic.LogicAbstraction.Lists

namespace DeepArithmetic.LogicAbstraction.TuringMachine

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory
open DeepArithmetic.LogicAbstraction.SyntacticSugar
open DeepArithmetic.LogicAbstraction.Arithmetic
open DeepArithmetic.LogicAbstraction.Lists

-- ============================================================
-- Componentes Base de la Máquina de Turing
-- ============================================================

/-- Estado Inicial de la TM -/
def tm_q0 : Term := .func "tm_q0" []

/-- Símbolo Blanco para las cintas infinitas -/
def tm_blank : Term := .func "tm_blank" []

/-- Direcciones de movimiento -/
def dir_left : Term := .func "dir_left" []
def dir_right : Term := .func "dir_right" []

/-- Predicado de aceptación -/
def is_tm_accept (q : Term) : Formula := .atom "is_tm_accept" [q]

-- ============================================================
-- Lógica Relacional (Predicados de Transición)
-- ============================================================

/-- tm_delta(q, read_c, next_q, write_c, dir) -/
def tm_delta (q read_c next_q write_c dir : Term) : Formula :=
  .atom "tm_delta" [q, read_c, next_q, write_c, dir]

/-- tm_step(q, L, R, next_q, next_L, next_R) -/
def tm_step (q L R next_q next_L next_R : Term) : Formula :=
  .atom "tm_step" [q, L, R, next_q, next_L, next_R]

-- ============================================================
-- Axiomas Estructurales de la Cinta
-- ============================================================
-- Variables libres utilizadas en los axiomas:
-- .var 0 : q
-- .var 1 : L (resto de la lista izquierda o completa según el caso)
-- .var 2 : t (resto de la lista derecha)
-- .var 3 : c (símbolo leído)
-- .var 4 : q_next
-- .var 5 : w (símbolo escrito)
-- .var 6 : l_c (símbolo extraído de L al moverse a la izquierda)

-- Para simplificar la escritura de las fórmulas, definiremos algunos casos directamente:

/-- Axioma Paso Derecha: 
    Si R = l_cons(c, t) y la transición indica mover a la derecha. 
    L_next = l_cons(w, L) y R_next = t -/
def ax_tm_step_right_nonempty : Formula :=
  .forall (.forall (.forall (.forall (.forall (.forall (
    Formula.impl
      (tm_delta (.var 0) (.var 3) (.var 4) (.var 5) dir_right)
      (tm_step (.var 0) (.var 1) (l_cons (.var 3) (.var 2))
               (.var 4) (l_cons (.var 5) (.var 1)) (.var 2))
  ))))))

/-- Axioma Paso Izquierda (L no vacía):
    Si R = l_cons(c, t), L = l_cons(l_c, L_rest), y transita a la izquierda.
    L_next = L_rest, R_next = l_cons(l_c, l_cons(w, t)) -/
def ax_tm_step_left_nonempty : Formula :=
  .forall (.forall (.forall (.forall (.forall (.forall (.forall (
    Formula.impl
      (tm_delta (.var 0) (.var 3) (.var 4) (.var 5) dir_left)
      (tm_step (.var 0) (l_cons (.var 6) (.var 1)) (l_cons (.var 3) (.var 2))
               (.var 4) (.var 1) (l_cons (.var 6) (l_cons (.var 5) (.var 2))))
  )))))))

-- ============================================================
-- Motor de Ejecución en N Pasos (Peano)
-- ============================================================

/-- tm_run(q, L, R, steps, final_q, final_L, final_R) -/
def tm_run (q L R steps final_q final_L final_R : Term) : Formula :=
  .atom "tm_run" [q, L, R, steps, final_q, final_L, final_R]

/-- Axioma Base: steps = 0 -/
def ax_tm_run_zero : Formula :=
  .forall (.forall (.forall (
    tm_run (.var 2) (.var 1) (.var 0) n_zero (.var 2) (.var 1) (.var 0)
  )))

-- Variables para el caso inductivo:
-- 0: R, 1: L, 2: q
-- 3: n
-- 4: final_R, 5: final_L, 6: final_q
-- 7: R', 8: L', 9: q'

/-- Axioma Recursivo: steps = n_succ(n) -/
def ax_tm_run_succ : Formula :=
  .forall (.forall (.forall (.forall (.forall (.forall (.forall (
    Formula.impl
      -- Si existe un paso intermedio (q', L', R')
      (.ex (.ex (.ex (
         .and (tm_step (liftTerm 3 (.var 2)) (liftTerm 3 (.var 1)) (liftTerm 3 (.var 0))
                       (.var 0) (.var 1) (.var 2))
              (tm_run (.var 0) (.var 1) (.var 2)
                      (liftTerm 3 (.var 3)) (liftTerm 3 (.var 6)) (liftTerm 3 (.var 5)) (liftTerm 3 (.var 4)))
      ))))
      -- Entonces la ejecución de n_succ(n) también lleva al estado final
      (tm_run (.var 2) (.var 1) (.var 0) (n_succ (.var 3)) (.var 6) (.var 5) (.var 4))
  )))))))

def TuringAxiomsList : List Formula := [
  ax_tm_step_right_nonempty,
  ax_tm_step_left_nonempty,
  ax_tm_run_zero,
  ax_tm_run_succ
]

end DeepArithmetic.LogicAbstraction.TuringMachine
