/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.FreeInductiveAlgebra

namespace DeepArithmetic.Semantics.Lists

  open DeepArithmetic.Semantics.FreeInductiveAlgebra

  /-- Un sistema de Listas sobre un tipo A es simplemente un Álgebra Inductiva Libre 
      generada por A. -/
  abbrev ListSystem (A : Type 0) := FreeInductiveAlgebra A

  /-- Envoltorio semántico que expone la API de listas nativa sobre el sistema genérico. -/
  def ListSystem.L {A : Type 0} (S : ListSystem A) : Type 0 := S.U
  def ListSystem.nil {A : Type 0} (S : ListSystem A) : S.L := S.base
  def ListSystem.cons {A : Type 0} (S : ListSystem A) (h : A) (t : S.L) : S.L := S.step h t

  theorem ListSystem.nil_ne_cons {A : Type 0} (S : ListSystem A) (h : A) (t : S.L) :
      S.nil ≠ S.cons h t := FreeInductiveAlgebra.discr S h t

  theorem ListSystem.cons_inj {A : Type 0} (S : ListSystem A) (h1 : A) (t1 : S.L) (h2 : A) (t2 : S.L) :
      S.cons h1 t1 = S.cons h2 t2 → h1 = h2 ∧ t1 = t2 := FreeInductiveAlgebra.inj S h1 t1 h2 t2

  theorem ListSystem.ind {A : Type 0} (S : ListSystem A) (P : S.L → Prop)
      (h_base : P S.nil)
      (h_step : ∀ (h : A) (t : S.L), P t → P (S.cons h t)) :
      ∀ (l : S.L), P l := FreeInductiveAlgebra.ind S P h_base h_step

  noncomputable def ListSystem.append {A : Type 0} (S : ListSystem A) (l2 l1 : S.L) : S.L :=
    let h := Classical.choose (S.prim_rec l2 (fun a u => S.cons a u))
    h l1

  theorem ListSystem.append_nil {A : Type 0} (S : ListSystem A) (l2 : S.L) :
      S.append l2 S.nil = l2 := by
    have h_prop := Classical.choose_spec (S.prim_rec l2 (fun a u => S.cons a u))
    exact h_prop.1

  theorem ListSystem.append_cons {A : Type 0} (S : ListSystem A) (l2 : S.L) (h : A) (t : S.L) :
      S.append l2 (S.cons h t) = S.cons h (S.append l2 t) := by
    have h_prop := Classical.choose_spec (S.prim_rec l2 (fun a u => S.cons a u))
    exact h_prop.2.1 h t

  theorem ListSystem.nil_append {A : Type 0} (S : ListSystem A) (xs : S.L) :
      S.append S.nil xs = xs := by
    let PProp : S.L → Prop := fun xs => S.append S.nil xs = xs
    apply S.ind PProp
    · change S.append S.nil S.nil = S.nil
      exact S.append_nil S.nil
    · intro a u IH
      change S.append S.nil (S.cons a u) = S.cons a u
      rw [S.append_cons S.nil a u]
      rw [IH]

  theorem ListSystem.append_assoc {A : Type 0} (S : ListSystem A) (xs ys zs : S.L) :
      S.append zs (S.append ys xs) = S.append (S.append zs ys) xs := by
    let PProp : S.L → Prop := fun xs => S.append zs (S.append ys xs) = S.append (S.append zs ys) xs
    apply S.ind PProp
    · -- base case: xs = nil
      change S.append zs (S.append ys S.nil) = S.append (S.append zs ys) S.nil
      rw [S.append_nil ys]
      rw [S.append_nil (S.append zs ys)]
    · -- step case: xs = cons a u
      intro a u IH
      change S.append zs (S.append ys (S.cons a u)) = S.append (S.append zs ys) (S.cons a u)
      rw [S.append_cons ys a u]
      rw [S.append_cons zs a (S.append ys u)]
      rw [S.append_cons (S.append zs ys) a u]
      rw [IH]

end DeepArithmetic.Semantics.Lists

export DeepArithmetic.Semantics.Lists (ListSystem)
