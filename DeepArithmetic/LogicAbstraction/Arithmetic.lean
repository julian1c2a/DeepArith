/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL
import DeepArithmetic.LogicAbstraction.SetTheory

namespace DeepArithmetic.LogicAbstraction.Arithmetic

open FOL
open TheoryFramework
open TheoryFramework.Instances
open DeepArithmetic.LogicAbstraction.SetTheory

-- ============================================================
-- 1. Primitivas Aritméticas Básicas (Suma, Multiplicación, Resta)
-- ============================================================

def n_add (a b : Term) : Term := .func "add" [a, b]
def n_mult (a b : Term) : Term := .func "mult" [a, b]
def n_sub (a b : Term) : Term := .func "sub" [a, b]

notation a " +_s " b => n_add a b
notation a " *_s " b => n_mult a b
notation a " -_s " b => n_sub a b

-- Predecesor (auxiliar lógico para la resta)
-- pred(0) = 0, pred(succ(x)) = x
def n_pred (a : Term) : Term := .func "pred" [a]

def ax_pred_zero : Formula :=
  .eq (n_pred n_zero) n_zero

def ax_pred_succ : Formula :=
  .forall (.eq (n_pred (n_succ x)) x)

-- Axiomas de Suma
def ax_add_zero : Formula :=
  .forall (.eq (x +_s n_zero) x)

def ax_add_succ : Formula :=
  .forall (.forall (
    .eq ((liftTerm 0 y) +_s (n_succ x)) (n_succ ((liftTerm 0 y) +_s x))
  ))

-- Axiomas de Multiplicación
def ax_mult_zero : Formula :=
  .forall (.eq (x *_s n_zero) n_zero)

def ax_mult_succ : Formula :=
  .forall (.forall (
    .eq ((liftTerm 0 y) *_s (n_succ x)) (((liftTerm 0 y) *_s x) +_s (liftTerm 0 y))
  ))

-- Axiomas de Resta
def ax_sub_zero : Formula :=
  .forall (.eq (x -_s n_zero) x)

def ax_sub_succ : Formula :=
  .forall (.forall (
    .eq ((liftTerm 0 y) -_s (n_succ x)) (n_pred ((liftTerm 0 y) -_s x))
  ))

-- ============================================================
-- 2. Relación de Orden Estricto (<)
-- ============================================================

-- x < y ⇔ ∃z (x + succ(z) = y)
-- Aquí: a y b son términos. Cuando los anidamos en ∃z, z es `.var 0`.
-- a pasa a levantarse 1, b pasa a levantarse 1.
def LessThan (a b : Term) : Formula :=
  .ex (.eq ((liftTerm 0 a) +_s (n_succ x)) (liftTerm 0 b))

notation a " <_s " b => LessThan a b

-- ============================================================
-- 3. División Euclídea y Resto
-- ============================================================

def n_div (a b : Term) : Term := .func "div" [a, b]
def n_mod (a b : Term) : Term := .func "mod" [a, b]

notation a " /_s " b => n_div a b
notation a " %_s " b => n_mod a b

-- Axioma de División Euclídea
-- ∀x ∀y (y ≠ 0 ⇒ (x = (y * div(x,y)) + mod(x,y) ∧ mod(x,y) < y))
-- Nota: En de Bruijn, x=.var 0, y=.var 1 (al revés si cuantificamos x luego y).
-- Si `forall x, forall y`, entonces en el cuerpo `y` es `.var 0` y `x` es `.var 1`.
-- Usemos `y` y `x` como variables base para evitar confusiones.
def ax_euclidean_div : Formula :=
  .forall (.forall (
    neg (.eq x n_zero) ⇒
    (.eq (liftTerm 0 y) ((x *_s ((liftTerm 0 y) /_s x)) +_s ((liftTerm 0 y) %_s x)) ∧
     (((liftTerm 0 y) %_s x) <_s x))
  ))

-- ============================================================
-- 4. Representaciones de Base (2 y 10) como Funciones Recursivas FOL
-- ============================================================

def to_binary (a : Term) : Term := .func "to_binary" [a]
def to_base10 (a : Term) : Term := .func "to_base10" [a]

-- Auxiliar n_two y n_ten para las bases
def n_two : Term := n_succ (n_succ n_zero)
def n_ten : Term := n_succ (n_succ (n_succ (n_succ (n_succ (n_succ (n_succ (n_succ (n_succ (n_succ n_zero)))))))))

-- La función append sobre listas
def l_append (l1 l2 : Term) : Term := .func "append" [l1, l2]

def ax_append_nil : Formula :=
  .forall (.eq (l_append l_nil x) x)

def ax_append_cons : Formula :=
  .forall (.forall (.forall (
    .eq (l_append (l_cons x y) (liftTerm 0 (liftTerm 0 z)))
        (l_cons x (l_append y (liftTerm 0 (liftTerm 0 z))))
  )))

-- Axiomas para to_binary
-- ∀x (x < 2 ⇒ to_binary(x) = [x])
def ax_to_binary_base : Formula :=
  .forall (
    (x <_s n_two) ⇒ .eq (to_binary x) (l_cons x l_nil)
  )

-- ∀x (¬(x < 2) ⇒ to_binary(x) = append(to_binary(div(x,2)), [mod(x,2)]))
def ax_to_binary_rec : Formula :=
  .forall (
    neg (x <_s n_two) ⇒
    .eq (to_binary x)
        (l_append (to_binary (x /_s n_two)) (l_cons (x %_s n_two) l_nil))
  )

-- Axiomas para to_base10
def ax_to_base10_base : Formula :=
  .forall (
    (x <_s n_ten) ⇒ .eq (to_base10 x) (l_cons x l_nil)
  )

def ax_to_base10_rec : Formula :=
  .forall (
    neg (x <_s n_ten) ⇒
    .eq (to_base10 x)
        (l_append (to_base10 (x /_s n_ten)) (l_cons (x %_s n_ten) l_nil))
  )

-- ============================================================
-- 5. Teoría Aritmética Extendida
-- ============================================================

def ArithmeticAxiomsList : List Formula := [
  ax_pred_zero, ax_pred_succ,
  ax_add_zero, ax_add_succ,
  ax_mult_zero, ax_mult_succ,
  ax_sub_zero, ax_sub_succ,
  ax_euclidean_div,
  ax_append_nil, ax_append_cons,
  ax_to_binary_base, ax_to_binary_rec,
  ax_to_base10_base, ax_to_base10_rec
]

end DeepArithmetic.LogicAbstraction.Arithmetic
