/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL

namespace DeepArithmetic.LogicAbstraction.SetTheory

open FOL
open TheoryFramework
open TheoryFramework.Instances

-- ============================================================
-- 1. Sintaxis de Conjuntos (Aczel/ZF)
-- ============================================================

-- Variables
def x : Term := .var 0
def y : Term := .var 1
def z : Term := .var 2
def w : Term := .var 3

-- Relación de Pertenencia (∈)
def In (t1 t2 : Term) : Formula := .atom "in" [t1, t2]

-- Usamos una notación específica para evitar colisión con el ∈ de Lean
notation t1 " ∈_s " t2 => In t1 t2

-- Subconjunto (⊆)
def Subset (t1 t2 : Term) : Formula :=
  .forall (In x (liftTerm 0 t1) ⇒ In x (liftTerm 0 t2))

notation t1 " ⊆_s " t2 => Subset t1 t2

-- ============================================================
-- 2. Axiomas Fundamentales de Zermelo-Fraenkel
-- ============================================================

-- Axioma de Extensionalidad: Dos conjuntos son iguales si tienen los mismos elementos
def ax_extensionality : Formula :=
  .forall (.forall (
    (.forall (In x (liftTerm 0 (liftTerm 0 z)) ⇔ In x (liftTerm 0 (liftTerm 0 w))))
    ⇒ (.eq (liftTerm 0 z) (liftTerm 0 w))
  ))

-- Funciones Primitivas (Extensiones conservativas para facilitar la sintaxis)
-- En ZF puro esto se hace con predicados de existencia, pero añadir el símbolo funcional 
-- simplifica enormemente la construcción de listas y tuplas.

-- Par desordenado: {a, b}
def t_pair (a b : Term) : Term := .func "pair" [a, b]

-- Axioma del Par: ∀a ∀b ∀x (x ∈ {a,b} ⇔ x = a ∨ x = b)
def ax_pair : Formula :=
  .forall (.forall (.forall (
    In x (t_pair (liftTerm 0 (liftTerm 0 z)) (liftTerm 0 (liftTerm 0 w))) 
    ⇔ (.or (.eq x (liftTerm 0 (liftTerm 0 z))) (.eq x (liftTerm 0 (liftTerm 0 w))))
  )))

-- Unión: ∪a
def t_union (a : Term) : Term := .func "union" [a]

-- Axioma de Unión: ∀A ∀x (x ∈ ∪A ⇔ ∃y (y ∈ A ∧ x ∈ y))
def ax_union : Formula :=
  .forall (.forall (
    In x (t_union (liftTerm 0 z))
    ⇔ .ex (In (liftTerm 0 x) y ∧ In y (liftTerm 0 (liftTerm 0 z)))
  ))

-- Conjunto Vacío: ∅
def t_empty : Term := .func "empty" []

-- Axioma del Vacío: ∀x ¬(x ∈ ∅)
def ax_empty : Formula :=
  .forall (neg (In x t_empty))

-- ============================================================
-- 3. Primitivas Disjuntas (Naturales, Tuplas, Listas)
-- ============================================================

-- Naturales
def n_zero : Term := .func "n_zero" []
def n_succ (n : Term) : Term := .func "n_succ" [n]

-- Tuplas Asociativas
def t_tup (a b : Term) : Term := .func "tup" [a, b]

-- Listas Inductivas
def l_nil : Term := .func "l_nil" []
def l_cons (h t : Term) : Term := .func "l_cons" [h, t]

-- Axiomas de Separación (Garantizan que los tipos estructurales no colisionan)
def ax_nat_neq_tup : Formula :=
  .forall (.forall (.forall (neg (.eq (n_succ x) (t_tup y z)))))

def ax_nat_neq_list : Formula :=
  .forall (.forall (.forall (neg (.eq (n_succ x) (l_cons y z)))))

def ax_tup_neq_list : Formula :=
  .forall (.forall (.forall (.forall (neg (.eq (t_tup x y) (l_cons z w))))))

def ax_nil_neq_succ : Formula :=
  .forall (neg (.eq l_nil (n_succ x)))

-- Axioma de Asociatividad Estricta para Tuplas
-- ∀x ∀y ∀z. tup(x, tup(y, z)) = tup(tup(x, y), z)
def ax_tup_assoc : Formula :=
  .forall (.forall (.forall (
    .eq (t_tup (liftTerm 0 (liftTerm 0 z)) (t_tup (liftTerm 0 y) x))
        (t_tup (t_tup (liftTerm 0 (liftTerm 0 z)) (liftTerm 0 y)) x)
  )))

-- ============================================================
-- 4. Esquema de ε-Inducción (Axioma de Fundación y Recursión)
-- ============================================================
-- ∀ P ( ∀ x ( ∀ y (y ∈ x ⇒ P(y)) ⇒ P(x) ) ⇒ ∀ z P(z) )
-- P es una fórmula con una variable libre (índice 0).
def ax_epsilon_induction (P : Formula) : Formula :=
  -- ∀z P(z) -> Aquí usamos P tal cual porque P ya asume la variable libre en 0.
  -- ∀y (y ∈ x ⇒ P(y)) -> y es 0, x es 1. P(y) es P levantada y evaluada en 0 (que ya es su índice natural, así que solo aplicamos P).
  -- Sin embargo, el manejo estricto de de Bruijn requiere cuidado.
  -- En una implementación profunda, este esquema instancia P sustituyendo variables.
  -- Por ahora, lo representamos de forma conceptual en Lean usando sustituciones básicas.
  let Py := P
  let Px := substFormula 0 (Term.var 1) (liftFormula 0 P)
  let inner_forall := Formula.forall (In (.var 0) (.var 1) ⇒ Py)
  let outer_forall := Formula.forall (inner_forall ⇒ Px)
  outer_forall ⇒ Formula.forall P

-- ============================================================
-- 5. La Teoría Base
-- ============================================================

def BaseAxiomsList : List Formula := [
  ax_extensionality,
  ax_pair,
  ax_union,
  ax_empty,
  ax_nat_neq_tup,
  ax_nat_neq_list,
  ax_tup_neq_list,
  ax_nil_neq_succ,
  ax_tup_assoc
]

def SetTheoryAxioms : Theory Formula where
  axioms f :=
    Or (f ∈ BaseAxiomsList)
       (∃ (P : Formula), f = ax_epsilon_induction P)

end DeepArithmetic.LogicAbstraction.SetTheory
