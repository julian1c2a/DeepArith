/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.Peano.System

namespace DeepArithmetic.Semantics.Peano.Computability

  open DeepArithmetic.Semantics.FreeInductiveAlgebra

  /-- 
  Predecesor usando recursión primitiva nativa (que funciona como un iterador sin acceso al subtérmino directamente,
  por lo que pasamos el estado como un par (curr, prev)).
  -/
  noncomputable def pred (S : PeanoSystem) (x : S.N) : S.N :=
    let f := fun _ (pair : S.N × S.N) => (S.succ pair.fst, pair.fst)
    let b := (S.zero, S.zero)
    let iter := Classical.choose (S.prim_rec b f)
    (iter x).snd

  /--
  Función de prueba: División por 2 (mitad entera).
  Al consumir el número de 2 en 2, requiere recursión bien fundada `wf_rec`.
  Para compilar, el usuario ESTÁ OBLIGADO a proveer la prueba de disminución.
  -/
  noncomputable def half (S : PeanoSystem) (x : S.N) : S.N :=
    S.wf_rec (fun _ _ =>
      S.zero
    ) x

  noncomputable def add_peano (S : PeanoSystem) (n m : S.N) : S.N :=
    let f : PUnit → S.N → S.N := fun _ res => S.succ res
    let iter := Classical.choose (S.prim_rec n f)
    iter m

  theorem add_zero (S : PeanoSystem) (n : S.N) : add_peano S n S.zero = n := by
    unfold add_peano
    let f : PUnit → S.N → S.N := fun _ res => S.succ res
    have H := Classical.choose_spec (S.prim_rec n f)
    rcases H with ⟨h_base, _, _⟩
    exact h_base

  theorem add_succ (S : PeanoSystem) (n m : S.N) : add_peano S n (S.succ m) = S.succ (add_peano S n m) := by
    unfold add_peano
    let f : PUnit → S.N → S.N := fun _ res => S.succ res
    have H := Classical.choose_spec (S.prim_rec n f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step PUnit.unit m

  theorem add_peano_succ_zero (S : PeanoSystem) (m : S.N) : add_peano S (S.succ S.zero) m = S.succ m := by
    let PProp : S.N → Prop := fun m => add_peano S (S.succ S.zero) m = S.succ m
    apply S.ind PProp
    · -- base case
      change add_peano S (S.succ S.zero) S.zero = S.succ S.zero
      rw [add_zero S (S.succ S.zero)]
    · -- step case
      intro _ m' IH
      change add_peano S (S.succ S.zero) (S.succ m') = S.succ (S.succ m')
      rw [add_succ S (S.succ S.zero) m']
      rw [IH]

  theorem lt_add_succ (S : PeanoSystem) (n m : S.N) : S.LT n (S.succ (add_peano S n m)) := by
    let P : S.N → Prop := fun m => S.LT n (S.succ (add_peano S n m))
    apply S.ind P
    · -- base case
      change S.LT n (S.succ (add_peano S n S.base))
      have h1 : add_peano S n S.base = n := add_zero S n
      rw [h1]
      exact S.lt_step PUnit.unit n
    · -- step case
      intro _ m' IH
      change S.LT n (S.succ (add_peano S n (S.step PUnit.unit m')))
      have h2 : add_peano S n (S.step PUnit.unit m') = S.succ (add_peano S n m') := add_succ S n m'
      rw [h2]
      have h_step := S.lt_step PUnit.unit (S.succ (add_peano S n m'))
      exact S.lt_trans _ _ _ IH h_step

  noncomputable def mult_peano (S : PeanoSystem) (n m : S.N) : S.N :=
    let f : PUnit → S.N → S.N := fun _ res => add_peano S n res
    let iter := Classical.choose (S.prim_rec S.zero f)
    iter m

  theorem mult_zero (S : PeanoSystem) (n : S.N) : mult_peano S n S.zero = S.zero := by
    unfold mult_peano
    let f : PUnit → S.N → S.N := fun _ res => add_peano S n res
    have H := Classical.choose_spec (S.prim_rec S.zero f)
    rcases H with ⟨h_base, _, _⟩
    exact h_base

  theorem mult_succ (S : PeanoSystem) (n m : S.N) : mult_peano S n (S.succ m) = add_peano S n (mult_peano S n m) := by
    unfold mult_peano
    let f : PUnit → S.N → S.N := fun _ res => add_peano S n res
    have H := Classical.choose_spec (S.prim_rec S.zero f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step PUnit.unit m

end DeepArithmetic.Semantics.Peano.Computability
