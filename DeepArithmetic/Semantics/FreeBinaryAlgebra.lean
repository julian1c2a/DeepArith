/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

namespace DeepArithmetic.Semantics.FreeBinaryAlgebra

/-- Un Álgebra Binaria Libre generada por un tipo base `A`.
    Representa árboles binarios donde cada nodo tiene un valor en `A` y dos sub-árboles en `U`.
    
    `U` es el universo del álgebra.
    `base` es el constructor nulo (árbol vacío u hoja sin valor).
    `node` es el constructor recursivo (nodo con valor en `A` y dos hijos). -/
structure FreeBinaryAlgebra (A : Type 0) where
  U : Type 0
  base : U
  node : A → U → U → U
  
  -- Inyectividad del nodo
  inj : ∀ a1 l1 r1 a2 l2 r2, node a1 l1 r1 = node a2 l2 r2 → a1 = a2 ∧ l1 = l2 ∧ r1 = r2
  
  -- Discriminación
  discr : ∀ a l r, base ≠ node a l r
  
  -- Esquema de inducción estructural
  ind : ∀ P : U → Prop, P base → (∀ a l r, P l → P r → P (node a l r)) → ∀ u, P u
  
  -- Recursión primitiva para árboles binarios
  prim_rec : ∀ {B : Type 0} (b : B) (f : A → B → B → B),
               ∃ h : U → B, h base = b ∧ (∀ a l r, h (node a l r) = f a (h l) (h r)) ∧ 
               (∀ h' : U → B, h' base = b ∧ (∀ a l r, h' (node a l r) = f a (h' l) (h' r)) → h' = h)
               
  -- Sistema de Computabilidad Semántica (Recursión Bien Fundada)
  LT : U → U → Prop
  lt_node_left : ∀ a l r, LT l (node a l r)
  lt_node_right : ∀ a l r, LT r (node a l r)
  lt_trans : ∀ u v w, LT u v → LT v w → LT u w
  wf : WellFounded LT

/-- Operador de Recursión Bien Fundada para Árboles Binarios. -/
def FreeBinaryAlgebra.wf_rec {A : Type 0} {B : Type 0} (S : FreeBinaryAlgebra A)
    (F : ∀ x : S.U, (∀ y : S.U, S.LT y x → B) → B) (x : S.U) : B :=
  WellFounded.fix S.wf F x

end DeepArithmetic.Semantics.FreeBinaryAlgebra

export DeepArithmetic.Semantics.FreeBinaryAlgebra (FreeBinaryAlgebra)
