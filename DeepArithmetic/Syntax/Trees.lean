/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL.FOL
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL

namespace DeepArithmetic.Syntax.Trees

-- Constructores básicos de Árboles
def emptyTree : Term := .func "emptyTree" []
def node (h l r : Term) : Term := .func "node" [h, l, r]

-- Predicados unarios para emular Many-Sorted FOL
def isTree (x : Term) : Formula := .atom "IsTree" [x]
def isElem (x : Term) : Formula := .atom "IsElem" [x]

-- Variables convenientes (De Bruijn)
def v0 : Term := .var 0
def v1 : Term := .var 1
def v2 : Term := .var 2
def v3 : Term := .var 3
def v4 : Term := .var 4
def v5 : Term := .var 5
def v6 : Term := .var 6

-- Axioma 1: Árboles y Elementos son disjuntos
-- ∀ x, IsTree(x) ⇒ ¬ IsElem(x)
def tree_elem_disjoint : Formula :=
  .forall (.impl (isTree v0) (neg (isElem v0)))

-- Axioma 2: emptyTree es un árbol
def emptyTree_isTree : Formula :=
  isTree emptyTree

-- Axioma 3: node forma un árbol si h es elemento y l, r son árboles
-- ∀ h, ∀ l, ∀ r, (IsElem(h) ∧ IsTree(l) ∧ IsTree(r)) ⇒ IsTree(node(h, l, r))
-- (h = v2, l = v1, r = v0)
def node_isTree : Formula :=
  .forall (.forall (.forall (
    .impl (.and (isElem v2) (.and (isTree v1) (isTree v0))) (isTree (node v2 v1 v0))
  )))

-- Axioma 4: emptyTree no es node
-- ∀ h, ∀ l, ∀ r, (IsElem(h) ∧ IsTree(l) ∧ IsTree(r)) ⇒ ¬ (emptyTree ≐ node(h, l, r))
def emptyTree_ne_node : Formula :=
  .forall (.forall (.forall (
    .impl (.and (isElem v2) (.and (isTree v1) (isTree v0)))
          (neg (.eq emptyTree (node v2 v1 v0)))
  )))

-- Axioma 5: node es inyectivo
-- ∀ h1 l1 r1 h2 l2 r2, (IsElem(h1) ∧ IsTree(l1) ∧ IsTree(r1) ∧ IsElem(h2) ∧ IsTree(l2) ∧ IsTree(r2)) ⇒ node(h1,l1,r1) ≐ node(h2,l2,r2) ⇒ (h1 ≐ h2 ∧ l1 ≐ l2 ∧ r1 ≐ r2)
def node_inj : Formula :=
  .forall (.forall (.forall (.forall (.forall (.forall (
    .impl (.and (.and (isElem v5) (.and (isTree v4) (isTree v3))) (.and (isElem v2) (.and (isTree v1) (isTree v0))))
          (.impl (.eq (node v5 v4 v3) (node v2 v1 v0))
                 (.and (.eq v5 v2) (.and (.eq v4 v1) (.eq v3 v0))))
  ))))))

-- Esquema de Inducción Estructural sobre Árboles:
-- Para cualquier fórmula φ(t) donde la variable 0 es `t`:
-- ( φ(emptyTree) ∧ ∀ h ∀ l ∀ r (IsElem(h) ∧ IsTree(l) ∧ IsTree(r) ∧ φ(l) ∧ φ(r) ⇒ φ(node(h,l,r))) ) ⇒ ∀ t (IsTree(t) ⇒ φ(t))
def treeInductionSchema (φ : Formula) : Formula :=
  -- Base case: t (v0) es emptyTree
  let baseCase := substFormula 0 emptyTree φ

  -- Inductive step: ∀ h ∀ l ∀ r (IsElem(h) ∧ IsTree(l) ∧ IsTree(r) ∧ φ(l) ∧ φ(r) ⇒ φ(node(h,l,r)))
  let phi_lifted3 := liftFormula 0 (liftFormula 0 (liftFormula 0 φ))
  let phi_l := substFormula 3 v1 phi_lifted3
  let phi_r := substFormula 3 v0 phi_lifted3
  let phi_node := substFormula 3 (node v2 v1 v0) phi_lifted3
  let indStepBody := .impl (.and (.and (isElem v2) (.and (isTree v1) (isTree v0))) (.and phi_l phi_r)) phi_node
  let indStep := Formula.forall (Formula.forall (Formula.forall indStepBody))

  -- Conclusion: ∀ t (IsTree(t) ⇒ φ(t))
  let phi_lifted1 := liftFormula 0 φ
  let phi_t := substFormula 1 v0 phi_lifted1
  let conclusion := Formula.forall (.impl (isTree v0) phi_t)

  .impl (.and baseCase indStep) conclusion

-- Predicado que define si una fórmula pertenece a la teoría pura de Árboles
def isTreeAxiom (f : Formula) : Prop :=
  (f = tree_elem_disjoint) ∨
  (f = emptyTree_isTree) ∨
  (f = node_isTree) ∨
  (f = emptyTree_ne_node) ∨
  (f = node_inj) ∨
  (∃ φ : Formula, f = treeInductionSchema φ)

def TreeTheory : TheoryFramework.Theory Formula where
  axioms := isTreeAxiom

end DeepArithmetic.Syntax.Trees

export DeepArithmetic.Syntax.Trees (emptyTree node isTree isElem v0 v1 v2 v3 v4 v5 v6 tree_elem_disjoint emptyTree_isTree node_isTree emptyTree_ne_node node_inj treeInductionSchema isTreeAxiom TreeTheory)
