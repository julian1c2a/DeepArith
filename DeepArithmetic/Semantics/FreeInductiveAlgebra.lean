/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

namespace DeepArithmetic.Semantics.FreeInductiveAlgebra

/-- Un Álgebra Inductiva Libre generada por un tipo base `A`.
    - Si `A = PUnit`, es isomorfo a un sistema de Peano (números naturales).
    - Si `A` es un tipo arbitrario, representa listas homogéneas sobre `A`.

    `U` es el universo del álgebra (por ejemplo, `Nat` o `List A`).
    `base` es el constructor nulo (`zero` o `nil`).
    `step` es el constructor recursivo (`succ` o `cons`). -/
structure FreeInductiveAlgebra (A : Type 0) where
  U : Type 0
  base : U
  step : A → U → U
  inj : ∀ a1 u1 a2 u2, step a1 u1 = step a2 u2 → a1 = a2 ∧ u1 = u2
  discr : ∀ a u, base ≠ step a u
  ind : ∀ P : U → Prop, P base → (∀ a u, P u → P (step a u)) → ∀ u, P u
  prim_rec : ∀ {B : Type 0} (b : B) (f : A → B → B),
               ∃ h : U → B, h base = b ∧ (∀ a u, h (step a u) = f a (h u)) ∧ 
               (∀ h' : U → B, h' base = b ∧ (∀ a u, h' (step a u) = f a (h' u)) → h' = h)
  -- Sistema de Computabilidad Semántica (Recursión Bien Fundada)
  LT : U → U → Prop
  lt_step : ∀ a u, LT u (step a u)
  lt_trans : ∀ u v w, LT u v → LT v w → LT u w
  wf : WellFounded LT

/-- Operador de Recursión Bien Fundada. Permite definiciones recursivas generales siempre 
    y cuando se provea evidencia de que la llamada recursiva se hace sobre un término estrictamente menor. -/
def FreeInductiveAlgebra.wf_rec {A : Type 0} {B : Type 0} (S : FreeInductiveAlgebra A)
    (F : ∀ x : S.U, (∀ y : S.U, S.LT y x → B) → B) (x : S.U) : B :=
  WellFounded.fix S.wf F x

end DeepArithmetic.Semantics.FreeInductiveAlgebra

export DeepArithmetic.Semantics.FreeInductiveAlgebra (FreeInductiveAlgebra)
