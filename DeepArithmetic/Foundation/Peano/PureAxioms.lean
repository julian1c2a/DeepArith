/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.FreeInductiveAlgebra

namespace DeepArithmetic.Foundation.Peano

  /-- El tipo de los naturales puramente axiomático. -/
  private axiom ℕ₀_pa : Type 0

  /-- El elemento cero. -/
  private axiom zero_pa : ℕ₀_pa

  /-- El sucesor. -/
  private axiom succ_pa : ℕ₀_pa → ℕ₀_pa

  /-- Axioma 4 de Peano: el sucesor es inyectivo. -/
  private axiom succ_inj_pa : ∀ m n : ℕ₀_pa, succ_pa m = succ_pa n → m = n

  /-- Axioma 3 de Peano: cero no es sucesor de ningún natural. -/
  private axiom zero_ne_succ_pa : ∀ n : ℕ₀_pa, zero_pa ≠ succ_pa n

  /-- Axioma de inducción: el principio de inducción matemática sobre ℕ₀_pa. -/
  private axiom ind_pa : ∀ P : ℕ₀_pa → Prop,
      P zero_pa → (∀ n, P n → P (succ_pa n)) → ∀ n, P n

  -- Aquí irá el resto de la instanciación de recursión primitiva y el Isomorfismo (Initiality).

end DeepArithmetic.Foundation.Peano
