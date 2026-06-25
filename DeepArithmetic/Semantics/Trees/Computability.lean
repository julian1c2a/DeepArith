/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.Trees.System
import DeepArithmetic.Semantics.Peano.System
import DeepArithmetic.Semantics.Lists.System
import DeepArithmetic.Semantics.Lists.Computability

namespace DeepArithmetic.Semantics.Trees.Computability

  open DeepArithmetic.Semantics.FreeBinaryAlgebra

  /-- Orden estricto semántico para constructores `node` (rama izquierda). -/
  theorem lt_node_l {A : Type 0} (S : TreeSystem A) (h : A) (l r : S.T) : S.LT l (S.node h l r) :=
    S.lt_node_left h l r

  /-- Orden estricto semántico para constructores `node` (rama derecha). -/
  theorem lt_node_r {A : Type 0} (S : TreeSystem A) (h : A) (l r : S.T) : S.LT r (S.node h l r) :=
    S.lt_node_right h l r

  /--
  Extracción del subárbol izquierdo (`left`) usando recursión bien fundada,
  dado que prim_rec no nos da acceso a los subárboles originales en FreeBinaryAlgebra.
  -/
  noncomputable def left {A : Type 0} (S : TreeSystem A) (x : S.T) : S.T :=
    S.wf_rec (fun _ _ => S.emptyTree) x

  /--
  Profundidad del árbol (`depth`), usando recursión primitiva sobre Árboles.
  Mapea cada nodo al sucesor del máximo de las profundidades de sus hijos,
  usando un sistema de Peano abstracto y una función auxiliar `max`.
  -/
  noncomputable def max_peano (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (n m : P.N) : P.N :=
    let f := fun _ x => P.succ x
    let add_n := Classical.choose (P.prim_rec n f)
    add_n m

  noncomputable def depth {A : Type 0} (S : TreeSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (x : S.T) : P.N :=
    let f := fun _ d_l d_r => P.succ (max_peano P d_l d_r)
    let b := P.zero
    let iter := Classical.choose (S.prim_rec b f)
    iter x

  /--
  Recorrido pre-orden (`pre_order`), devuelve una lista abstracta usando recursión primitiva.
  Recordemos que `append suffix prefix` es `prefix ++ suffix`. 
  Usamos `append l_res r_res` (que semánticamente es `r_res ++ l_res`) para que las demostraciones 
  de tamaño encajen directamente con la asimetría de `add_peano` (Right-to-Left Pre-Order).
  -/
  noncomputable def pre_order {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (x : S.T) : L.L :=
    let f := fun h l_res r_res => L.cons h (L.append l_res r_res)
    let b := L.nil
    let iter := Classical.choose (S.prim_rec b f)
    iter x

  /-- Teorema de evaluación: depth de un árbol vacío es zero -/
  theorem depth_emptyTree {A : Type 0} (S : TreeSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) :
      depth S P (S.emptyTree) = P.zero := by
    unfold depth
    let f : A → P.N → P.N → P.N := fun _ d_l d_r => P.succ (max_peano P d_l d_r)
    have H := Classical.choose_spec (S.prim_rec P.zero f)
    rcases H with ⟨h_base, _⟩
    exact h_base

  /-- Teorema de evaluación: depth de un nodo -/
  theorem depth_node {A : Type 0} (S : TreeSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (h : A) (l r : S.T) :
      depth S P (S.node h l r) = P.succ (max_peano P (depth S P l) (depth S P r)) := by
    unfold depth
    let f : A → P.N → P.N → P.N := fun _ d_l d_r => P.succ (max_peano P d_l d_r)
    have H := Classical.choose_spec (S.prim_rec P.zero f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step h l r

  /-- Teorema de evaluación: pre_order de un árbol vacío es nil -/
  theorem pre_order_emptyTree {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) :
      pre_order S L (S.emptyTree) = L.nil := by
    unfold pre_order
    let f : A → L.L → L.L → L.L := fun h l_res r_res => L.cons h (L.append l_res r_res)
    have H := Classical.choose_spec (S.prim_rec L.nil f)
    rcases H with ⟨h_base, _⟩
    exact h_base

  /-- Teorema de evaluación: pre_order de un nodo -/
  theorem pre_order_node {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (h : A) (l r : S.T) :
      pre_order S L (S.node h l r) = L.cons h (L.append (pre_order S L l) (pre_order S L r)) := by
    unfold pre_order
    let f : A → L.L → L.L → L.L := fun h l_res r_res => L.cons h (L.append l_res r_res)
    have H := Classical.choose_spec (S.prim_rec L.nil f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step h l r

  /-- Teorema Final de Computabilidad de Recorridos:
      El recorrido de un árbol no vacío es estrictamente mayor que el de su subárbol izquierdo. -/
  theorem length_pre_order_node_gt_left {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (h : A) (l r : S.T) :
      P.LT (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L l)) 
           (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L (S.node h l r))) := by
    have h1 : pre_order S L (S.node h l r) = L.cons h (L.append (pre_order S L l) (pre_order S L r)) := pre_order_node S L h l r
    have h_len1 : DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L (S.node h l r)) = DeepArithmetic.Semantics.Lists.Computability.length L P (L.cons h (L.append (pre_order S L l) (pre_order S L r))) := by rw [h1]
    rw [h_len1]
    have h2 : DeepArithmetic.Semantics.Lists.Computability.length L P (L.cons h (L.append (pre_order S L l) (pre_order S L r))) = P.succ (DeepArithmetic.Semantics.Lists.Computability.length L P (L.append (pre_order S L l) (pre_order S L r))) := DeepArithmetic.Semantics.Lists.Computability.length_cons L P h (L.append (pre_order S L l) (pre_order S L r))
    rw [h2]
    have h3 : DeepArithmetic.Semantics.Lists.Computability.length L P (L.append (pre_order S L l) (pre_order S L r)) = DeepArithmetic.Semantics.Peano.Computability.add_peano P (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L l)) (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L r)) := DeepArithmetic.Semantics.Lists.Computability.length_append L P (pre_order S L l) (pre_order S L r)
    rw [h3]
    exact DeepArithmetic.Semantics.Peano.Computability.lt_add_succ P (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L l)) (DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L r))

  /--
  Recorrido post-orden (`post_order`).
  Simétrico al pre_order: en lugar de `h :: (r ++ l)`, es `(r ++ l) ++ [h]`.
  En nuestra sintaxis de append: `append [h] (append l r)`.
  -/
  noncomputable def post_order {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (x : S.T) : L.L :=
    let f := fun h l_res r_res => L.append (L.cons h L.nil) (L.append l_res r_res)
    let b := L.nil
    let iter := Classical.choose (S.prim_rec b f)
    iter x

  theorem post_order_emptyTree {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) :
      post_order S L (S.emptyTree) = L.nil := by
    unfold post_order
    let f : A → L.L → L.L → L.L := fun h l_res r_res => L.append (L.cons h L.nil) (L.append l_res r_res)
    have H := Classical.choose_spec (S.prim_rec L.nil f)
    rcases H with ⟨h_base, _⟩
    exact h_base

  theorem post_order_node {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (h : A) (l r : S.T) :
      post_order S L (S.node h l r) = L.append (L.cons h L.nil) (L.append (post_order S L l) (post_order S L r)) := by
    unfold post_order
    let f : A → L.L → L.L → L.L := fun h l_res r_res => L.append (L.cons h L.nil) (L.append l_res r_res)
    have H := Classical.choose_spec (S.prim_rec L.nil f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step h l r

  theorem length_post_order {A : Type 0} (S : TreeSystem A) (L : DeepArithmetic.Semantics.Lists.ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (x : S.T) :
      DeepArithmetic.Semantics.Lists.Computability.length L P (post_order S L x) = DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L x) := by
    let PProp : S.T → Prop := fun x => DeepArithmetic.Semantics.Lists.Computability.length L P (post_order S L x) = DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L x)
    apply S.ind PProp
    · -- base case
      change DeepArithmetic.Semantics.Lists.Computability.length L P (post_order S L S.emptyTree) = DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L S.emptyTree)
      rw [post_order_emptyTree S L]
      rw [pre_order_emptyTree S L]
    · -- step case
      intro h l r IHl IHr
      change DeepArithmetic.Semantics.Lists.Computability.length L P (post_order S L (S.node h l r)) = DeepArithmetic.Semantics.Lists.Computability.length L P (pre_order S L (S.node h l r))
      rw [post_order_node S L h l r]
      rw [pre_order_node S L h l r]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_append L P (L.cons h L.nil) (L.append (post_order S L l) (post_order S L r))]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_cons L P h (L.append (pre_order S L l) (pre_order S L r))]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_cons L P h L.nil]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_nil L P]
      have h1 : DeepArithmetic.Semantics.Peano.Computability.add_peano P (P.succ P.zero) (DeepArithmetic.Semantics.Lists.Computability.length L P (L.append (post_order S L l) (post_order S L r))) = P.succ (DeepArithmetic.Semantics.Lists.Computability.length L P (L.append (post_order S L l) (post_order S L r))) := DeepArithmetic.Semantics.Peano.Computability.add_peano_succ_zero P (DeepArithmetic.Semantics.Lists.Computability.length L P (L.append (post_order S L l) (post_order S L r)))
      rw [h1]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_append L P (post_order S L l) (post_order S L r)]
      rw [DeepArithmetic.Semantics.Lists.Computability.length_append L P (pre_order S L l) (pre_order S L r)]
      rw [IHl]
      rw [IHr]

end DeepArithmetic.Semantics.Trees.Computability
