/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.FreeInductiveAlgebra

namespace DeepArithmetic.Foundation.Lists

  /-- El tipo de las listas puramente axiomático sobre un tipo genérico A. -/
  private axiom List_pa (A : Type 0) : Type 0

  /-- El elemento nil. -/
  private axiom nil_pa {A : Type 0} : List_pa A

  /-- El constructor cons. -/
  private axiom cons_pa {A : Type 0} : A → List_pa A → List_pa A

  /-- Axioma de inyectividad de cons. -/
  private axiom cons_inj_pa {A : Type 0} : ∀ h1 t1 h2 t2, 
    @cons_pa A h1 t1 = cons_pa h2 t2 → h1 = h2 ∧ t1 = t2

  /-- Axioma de discriminación: nil no es cons. -/
  private axiom nil_ne_cons_pa {A : Type 0} : ∀ h t, 
    @nil_pa A ≠ cons_pa h t

  /-- Axioma de inducción estructural sobre listas. -/
  private axiom ind_pa {A : Type 0} : ∀ P : List_pa A → Prop,
      P nil_pa → (∀ h t, P t → P (cons_pa h t)) → ∀ l, P l

end DeepArithmetic.Foundation.Lists
