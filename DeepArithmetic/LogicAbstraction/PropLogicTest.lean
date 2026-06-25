/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import TheoryFramework.Instances.PropLogic
import TheoryFramework.Theory

namespace DeepArithmetic.LogicAbstraction

open PropLogic
open TheoryFramework

-- Definimos una teoría de prueba puramente proposicional.
-- Nuestro vocabulario será simplemente variables proposicionales.
-- En este caso, usaremos el átomo "A"

def myAxioms : PropLogic.Formula → Prop
  | .atom "A" => True
  | _ => False

-- Creamos el contexto de la teoría
def PropTestTheory : Theory PropLogic.Formula := {
  axioms := myAxioms
}

-- Y podemos usar el framework genérico para evaluar derivabilidad / satisfactibilidad.
-- `satisfiesTheory` evaluaría usando el LogicSystem inyectado (propLogicSystem).
-- Esto demuestra que el TheoryFramework es completamente agnóstico de si es FOL o PropLogic.
-- Al evaluar en `TheoryFramework`, `TheoryFramework.Instances.propLogicSystem` provee la semántica.

theorem prop_test_proves_A :
    Theory.proves PropTestTheory (.atom "A") := by
  unfold Theory.proves
  unfold LogicSystem.DerivesSet
  -- Necesitamos dar una lista finita de axiomas de la cual derivar A.
  -- Usaremos la lista [A].
  exists [.atom "A"]
  constructor
  · -- Proveemos que todos los elementos de la lista satisfacen myAxioms
    intro g hg
    simp at hg
    rw [hg]
    change myAxioms (.atom "A")
    exact True.intro
  · -- Proveemos que la lista [A] deriva A
    apply PropLogic.Derives.hyp
    simp

end DeepArithmetic.LogicAbstraction
