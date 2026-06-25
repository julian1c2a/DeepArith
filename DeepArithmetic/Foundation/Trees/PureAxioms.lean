/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

namespace DeepArithmetic.Foundation.Trees

  /-- El tipo de los árboles binarios puramente axiomático sobre un tipo genérico A. -/
  private axiom Tree_pa (A : Type 0) : Type 0

  /-- El elemento emptyTree. -/
  private axiom emptyTree_pa {A : Type 0} : Tree_pa A

  /-- El constructor node. -/
  private axiom node_pa {A : Type 0} : A → Tree_pa A → Tree_pa A → Tree_pa A

  /-- Axioma de inyectividad de node. -/
  private axiom node_inj_pa {A : Type 0} : ∀ a1 l1 r1 a2 l2 r2, 
    @node_pa A a1 l1 r1 = node_pa a2 l2 r2 → a1 = a2 ∧ l1 = l2 ∧ r1 = r2

  /-- Axioma de discriminación: emptyTree no es node. -/
  private axiom emptyTree_ne_node_pa {A : Type 0} : ∀ a l r, 
    @emptyTree_pa A ≠ node_pa a l r

  /-- Axioma de inducción estructural sobre árboles binarios. -/
  private axiom ind_pa {A : Type 0} : ∀ P : Tree_pa A → Prop,
      P emptyTree_pa → (∀ a l r, P l → P r → P (node_pa a l r)) → ∀ t, P t

end DeepArithmetic.Foundation.Trees
