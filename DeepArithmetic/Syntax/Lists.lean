/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL

namespace DeepArithmetic.Syntax.Lists



-- Constructores básicos de Listas
def nil : Term := .func "nil" []
def cons (h t : Term) : Term := .func "cons" [h, t]
def append (l1 l2 : Term) : Term := .func "append" [l1, l2]

-- Predicados unarios para emular Many-Sorted FOL
def isList (x : Term) : Formula := .atom "IsList" [x]
def isElem (x : Term) : Formula := .atom "IsElem" [x]

-- Variables convenientes (De Bruijn)
def v0 : Term := .var 0
def v1 : Term := .var 1
def v2 : Term := .var 2
def v3 : Term := .var 3

-- Axioma 1: Listas y Elementos son disjuntos
-- ∀ x, IsList(x) ⇒ ¬ IsElem(x)
def list_elem_disjoint : Formula :=
  .forall (.impl (isList v0) (neg (isElem v0)))

-- Axioma 2: nil es una lista
def nil_isList : Formula :=
  isList nil

-- Axioma 3: cons forma una lista si h es elemento y t es lista
-- ∀ h, ∀ t, (IsElem(h) ∧ IsList(t)) ⇒ IsList(cons(h, t))
-- (h = v1, t = v0)
def cons_isList : Formula :=
  .forall (.forall (
    .impl (.and (isElem v1) (isList v0)) (isList (cons v1 v0))
  ))

-- Axioma 4: nil no es cons
-- ∀ h, ∀ t, (IsElem(h) ∧ IsList(t)) ⇒ ¬ (nil ≐ cons(h, t))
def nil_ne_cons : Formula :=
  .forall (.forall (
    .impl (.and (isElem v1) (isList v0))
          (neg (.eq nil (cons v1 v0)))
  ))

-- Axioma 5: cons es inyectivo
-- ∀ h1, ∀ t1, ∀ h2, ∀ t2, (IsElem(h1) ∧ IsList(t1) ∧ IsElem(h2) ∧ IsList(t2)) ⇒ cons(h1,t1) ≐ cons(h2,t2) ⇒ (h1 ≐ h2 ∧ t1 ≐ t2)
def cons_inj : Formula :=
  .forall (.forall (.forall (.forall (
    .impl (.and (.and (isElem v3) (isList v2)) (.and (isElem v1) (isList v0)))
          (.impl (.eq (cons v3 v2) (cons v1 v0))
                 (.and (.eq v3 v1) (.eq v2 v0)))
  ))))

-- Axioma 6: append base
-- ∀ l, IsList(l) ⇒ append(nil, l) ≐ l
def append_nil : Formula :=
  .forall (.impl (isList v0) (.eq (append nil v0) v0))

-- Axioma 7: append paso
-- ∀ h, ∀ t, ∀ l, (IsElem(h) ∧ IsList(t) ∧ IsList(l)) ⇒ append(cons(h,t), l) ≐ cons(h, append(t, l))
-- (h=v2, t=v1, l=v0)
def append_cons : Formula :=
  .forall (.forall (.forall (
    .impl (.and (.and (isElem v2) (isList v1)) (isList v0))
          (.eq (append (cons v2 v1) v0) (cons v2 (append v1 v0)))
  )))

-- Esquema de Inducción Estructural sobre Listas:
-- Para cualquier fórmula φ(l) donde la variable 0 es `l`:
-- ( φ(nil) ∧ ∀ h ∀ t (IsElem(h) ∧ IsList(t) ∧ φ(t) ⇒ φ(cons(h,t))) ) ⇒ ∀ l (IsList(l) ⇒ φ(l))
def listInductionSchema (φ : Formula) : Formula :=
  -- Base case: l (v0) es nil
  let baseCase := substFormula 0 nil φ

  -- Inductive step: ∀ h ∀ t (IsElem(h) ∧ IsList(t) ∧ φ(t) ⇒ φ(cons(h,t)))
  let phi_lifted2 := liftFormula 0 (liftFormula 0 φ)
  let phi_t := substFormula 2 v0 phi_lifted2
  let phi_cons_ht := substFormula 2 (cons v1 v0) phi_lifted2
  let indStepBody := .impl (.and (.and (isElem v1) (isList v0)) phi_t) phi_cons_ht
  let indStep := Formula.forall (Formula.forall indStepBody)

  -- Conclusion: ∀ l (IsList(l) ⇒ φ(l))
  let phi_lifted1 := liftFormula 0 φ
  let phi_l := substFormula 1 v0 phi_lifted1
  let conclusion := Formula.forall (.impl (isList v0) phi_l)

  .impl (.and baseCase indStep) conclusion

-- Predicado que define si una fórmula pertenece a la teoría pura de Listas Homogéneas
def isListAxiom (f : Formula) : Prop :=
  (f = list_elem_disjoint) ∨ (f = nil_isList) ∨ (f = cons_isList) ∨ (f = nil_ne_cons) ∨ (f = cons_inj) ∨ (f = append_nil) ∨ (f = append_cons) ∨ (∃ φ : Formula, f = listInductionSchema φ)

-- La teoría de Listas en FOL
def ListTheory : TheoryFramework.Theory Formula where
  axioms := isListAxiom

end DeepArithmetic.Syntax.Lists

export DeepArithmetic.Syntax.Lists (nil cons append isList isElem v0 v1 v2 v3 list_elem_disjoint nil_isList cons_isList nil_ne_cons cons_inj append_nil append_cons listInductionSchema isListAxiom ListTheory)
