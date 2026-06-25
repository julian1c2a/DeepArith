/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL

namespace DeepArithmetic.Syntax.Peano



-- Constructores básicos de Peano
def zero : Term := .func "0" []
def succ (t : Term) : Term := .func "S" [t]

-- Variables convenientes
def x : Term := .var 0
def y : Term := .var 1

-- Axioma 1: 0 ≠ S(x)
-- ∀ x, ¬ (0 ≐ S(x))
def zero_ne_succ : Formula :=
  .forall (neg (.eq zero (succ x)))

-- Axioma 2: S(x) = S(y) ⇒ x = y
-- ∀ x, ∀ y, S(x) ≐ S(y) ⇒ x ≐ y
def succ_inj : Formula :=
  .forall (.forall (
    .impl (.eq (succ y) (succ x)) (.eq y x)
  ))

-- Esquema de Inducción:
-- Para cualquier fórmula φ (donde la variable 0 es la variable de inducción),
-- el axioma de inducción es:
-- (φ[0/x] ∧ ∀ x (φ[x/v] ⇒ φ[S(x)/v])) ⇒ ∀ x φ[x/v]
--
-- Explicación del manejo de índices de De Bruijn:
-- 1. `φ` tiene la variable de inducción en el índice 0. Las demás variables libres > 0 se desplazan.
-- 2. `baseCase` = `substFormula 0 zero φ`. Esto elimina la variable 0 y reduce en 1 las variables > 0.
-- 3. `indStep`: Dentro del `∀`, la variable ligada es `0`.
--    Para instanciar `φ` sobre `0` o `S(0)` sin corromper el entorno de variables libres:
--    a. Hacemos `liftFormula 0 φ` para que la antigua variable 0 pase a ser 1, y el resto se desplace.
--    b. Sustituimos esa variable 1 por `.var 0` (para el antecedente) o `succ (.var 0)` (para el consecuente).
--       Esta sustitución reduce las variables > 1 en 1, restaurando su desplazamiento correcto para estar
--       dentro de un único cuantificador `∀`.
def inductionSchema (φ : Formula) : Formula :=
  let baseCase := substFormula 0 zero φ
  let phi_lifted := liftFormula 0 φ
  let phi_x := substFormula 1 x phi_lifted
  let phi_sx := substFormula 1 (succ x) phi_lifted
  let indStep  := Formula.forall (.impl phi_x phi_sx)
  let conclusion := Formula.forall phi_x
  .impl (.and baseCase indStep) conclusion

-- Predicado que define si una fórmula pertenece a la teoría de Peano pura.
def isPeanoAxiom (f : Formula) : Prop :=
  (f = zero_ne_succ) ∨ (f = succ_inj) ∨ (∃ φ : Formula, f = inductionSchema φ)

-- La teoría de Peano en FOL
def PeanoTheory : TheoryFramework.Theory Formula where
  axioms := isPeanoAxiom

end DeepArithmetic.Syntax.Peano

export DeepArithmetic.Syntax.Peano (zero succ zero_ne_succ succ_inj inductionSchema isPeanoAxiom PeanoTheory)
