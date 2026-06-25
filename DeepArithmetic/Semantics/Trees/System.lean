/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.FreeBinaryAlgebra

namespace DeepArithmetic.Semantics.Trees

  open DeepArithmetic.Semantics.FreeBinaryAlgebra

  /-- Un TreeSystem es cualquier álgebra binaria libre que satisfaga
      la interfaz general `FreeBinaryAlgebra`. -/
  abbrev TreeSystem (A : Type 0) := FreeBinaryAlgebra A

  /-- Envoltorio semántico que expone la API de árboles nativa sobre el sistema genérico. -/
  def TreeSystem.T {A : Type 0} (S : TreeSystem A) : Type 0 := FreeBinaryAlgebra.U S
  def TreeSystem.emptyTree {A : Type 0} (S : TreeSystem A) : S.T := FreeBinaryAlgebra.base S
  def TreeSystem.node {A : Type 0} (S : TreeSystem A) (h : A) (l r : S.T) : S.T := FreeBinaryAlgebra.node S h l r

  theorem TreeSystem.emptyTree_ne_node {A : Type 0} (S : TreeSystem A) (h : A) (l r : S.T) :
      S.emptyTree ≠ S.node h l r := by
    exact FreeBinaryAlgebra.discr S h l r

  theorem TreeSystem.node_inj {A : Type 0} (S : TreeSystem A) (h1 : A) (l1 r1 : S.T) (h2 : A) (l2 r2 : S.T) :
      S.node h1 l1 r1 = S.node h2 l2 r2 → h1 = h2 ∧ l1 = l2 ∧ r1 = r2 := by
    exact FreeBinaryAlgebra.inj S h1 l1 r1 h2 l2 r2

  theorem TreeSystem.ind {A : Type 0} (S : TreeSystem A) (P : S.T → Prop)
      (h_base : P S.emptyTree)
      (h_step : ∀ (h : A) (l r : S.T), P l → P r → P (S.node h l r)) :
      ∀ (t : S.T), P t := by
    exact FreeBinaryAlgebra.ind S P h_base h_step

end DeepArithmetic.Semantics.Trees

export DeepArithmetic.Semantics.Trees (TreeSystem)
