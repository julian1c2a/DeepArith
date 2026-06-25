/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.Lists.System
import DeepArithmetic.Semantics.Peano.System
import DeepArithmetic.Semantics.Peano.Computability

namespace DeepArithmetic.Semantics.Lists.Computability

  open DeepArithmetic.Semantics.FreeInductiveAlgebra

  /--
  Orden estricto semántico para constructores `cons`.
  Demuestra formalmente que el remanente (cola) es estrictamente menor que la lista construida.
  -/
  theorem lt_cons {A : Type 0} (S : ListSystem A) (a : A) (u : S.L) : S.LT u (S.cons a u) :=
    S.lt_step a u

  /-- 
  Función `tail` (cola de la lista) usando recursión primitiva nativa 
  (que funciona como un iterador sin acceso al subtérmino directamente,
  por lo que pasamos el estado como un par (curr, prev)).
  Para `nil`, definimos que la cola sigue siendo `nil` de forma segura.
  -/
  noncomputable def tail {A : Type 0} (S : ListSystem A) (x : S.L) : S.L :=
    let f := fun a (pair : S.L × S.L) => (S.cons a pair.fst, pair.fst)
    let b := (S.nil, S.nil)
    let iter := Classical.choose (S.prim_rec b f)
    (iter x).snd

  /--
  Longitud de la lista (`length`), definida usando recursión primitiva sobre Listas.
  Como nuestra meta es mantener la abstracción purista, mapeamos cada elemento
  hacia un sucesor en un `PeanoSystem` abstracto, evitando el `Nat` del metalenguaje.
  -/
  noncomputable def length {A : Type 0} (S : ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (x : S.L) : P.N :=
    let f := fun _ n => P.succ n
    let b := P.zero
    let iter := Classical.choose (S.prim_rec b f)
    iter x

  theorem length_nil {A : Type 0} (S : ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) :
      length S P S.nil = P.zero := by
    unfold length
    let f : A → P.N → P.N := fun _ n => P.succ n
    have H := Classical.choose_spec (S.prim_rec P.zero f)
    rcases H with ⟨h_base, _, _⟩
    exact h_base

  theorem length_cons {A : Type 0} (S : ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (a : A) (u : S.L) :
      length S P (S.cons a u) = P.succ (length S P u) := by
    unfold length
    let f : A → P.N → P.N := fun _ n => P.succ n
    have H := Classical.choose_spec (S.prim_rec P.zero f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step a u

  theorem length_append {A : Type 0} (S : ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (xs ys : S.L) :
      length S P (S.append xs ys) = DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (length S P ys) := by
    let PProp : S.L → Prop := fun ys => length S P (S.append xs ys) = DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (length S P ys)
    apply S.ind PProp
    · -- base case: ys = nil
      change length S P (S.append xs S.nil) = DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (length S P S.nil)
      have h1 : S.append xs S.nil = xs := S.append_nil xs
      rw [h1]
      have h2 : DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) P.zero = length S P xs := DeepArithmetic.Semantics.Peano.Computability.add_zero P (length S P xs)
      have h3 : length S P S.nil = P.zero := length_nil S P
      rw [h3, h2]
    · -- step case: ys = cons a u
      intro a u IH
      change length S P (S.append xs (S.cons a u)) = DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (length S P (S.cons a u))
      have h1 : S.append xs (S.cons a u) = S.cons a (S.append xs u) := S.append_cons xs a u
      rw [h1]
      rw [length_cons S P a (S.append xs u)]
      rw [IH]
      have h2 : length S P (S.cons a u) = P.succ (length S P u) := length_cons S P a u
      rw [h2]
      have h3 : DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (P.succ (length S P u)) = P.succ (DeepArithmetic.Semantics.Peano.Computability.add_peano P (length S P xs) (length S P u)) := DeepArithmetic.Semantics.Peano.Computability.add_succ P (length S P xs) (length S P u)
      rw [h3]

  noncomputable def drop_two {A : Type 0} (S : ListSystem A) (x : S.L) : S.L :=
    S.wf_rec (fun _ _ =>
      S.nil
    ) x

  /-- 
  Invierte una lista usando recursión primitiva.
  Ojo: `append suffix prefix` se traduce semánticamente a `prefix ++ suffix`.
  Por tanto, `reverse u ++ [a]` debe escribirse como `append [a] (reverse u)`.
  -/
  noncomputable def reverse {A : Type 0} (S : ListSystem A) (x : S.L) : S.L :=
    let f := fun a u_rev => S.append (S.cons a S.nil) u_rev
    let b := S.nil
    let iter := Classical.choose (S.prim_rec b f)
    iter x

  theorem reverse_nil {A : Type 0} (S : ListSystem A) :
      reverse S S.nil = S.nil := by
    unfold reverse
    let f : A → S.L → S.L := fun a u_rev => S.append (S.cons a S.nil) u_rev
    have H := Classical.choose_spec (S.prim_rec S.nil f)
    rcases H with ⟨h_base, _, _⟩
    exact h_base

  theorem reverse_cons {A : Type 0} (S : ListSystem A) (a : A) (u : S.L) :
      reverse S (S.cons a u) = S.append (S.cons a S.nil) (reverse S u) := by
    unfold reverse
    let f : A → S.L → S.L := fun a u_rev => S.append (S.cons a S.nil) u_rev
    have H := Classical.choose_spec (S.prim_rec S.nil f)
    rcases H with ⟨_, h_step, _⟩
    exact h_step a u

  theorem reverse_append {A : Type 0} (S : ListSystem A) (xs ys : S.L) :
      reverse S (S.append xs ys) = S.append (reverse S ys) (reverse S xs) := by
    let PProp : S.L → Prop := fun ys => reverse S (S.append xs ys) = S.append (reverse S ys) (reverse S xs)
    apply S.ind PProp
    · -- base case: ys = nil
      change reverse S (S.append xs S.nil) = S.append (reverse S S.nil) (reverse S xs)
      rw [S.append_nil xs]
      rw [reverse_nil S]
      -- we need reverse S xs = S.append S.nil (reverse S xs)
      have h1 : S.append S.nil (reverse S xs) = reverse S xs := S.nil_append (reverse S xs)
      rw [h1]
    · -- step case
      intro a u IH
      change reverse S (S.append xs (S.cons a u)) = S.append (reverse S (S.cons a u)) (reverse S xs)
      rw [S.append_cons xs a u]
      rw [reverse_cons S a (S.append xs u)]
      rw [IH]
      rw [reverse_cons S a u]
      -- we have S.append (S.cons a S.nil) (S.append (reverse S u) (reverse S xs))
      -- we want S.append (S.append (S.cons a S.nil) (reverse S u)) (reverse S xs)
      -- By append_assoc: S.append zs (S.append ys xs) = S.append (S.append zs ys) xs
      -- with zs = (S.cons a S.nil), ys = (reverse S u), xs = (reverse S xs)
      have h_assoc := S.append_assoc (reverse S xs) (reverse S u) (S.cons a S.nil)
      rw [h_assoc]

  theorem length_reverse {A : Type 0} (S : ListSystem A) (P : DeepArithmetic.Semantics.Peano.PeanoSystem) (xs : S.L) :
      length S P (reverse S xs) = length S P xs := by
    let PProp : S.L → Prop := fun xs => length S P (reverse S xs) = length S P xs
    apply S.ind PProp
    · -- base case
      change length S P (reverse S S.nil) = length S P S.nil
      rw [reverse_nil S]
    · -- step case
      intro a u IH
      change length S P (reverse S (S.cons a u)) = length S P (S.cons a u)
      rw [reverse_cons S a u]
      rw [length_append S P (S.cons a S.nil) (reverse S u)]
      rw [IH]
      rw [length_cons S P a S.nil]
      rw [length_nil S P]
      rw [length_cons S P a u]
      -- we have add_peano P (P.succ P.zero) (length S P u)
      -- we want P.succ (length S P u)
      have h1 : DeepArithmetic.Semantics.Peano.Computability.add_peano P (P.succ P.zero) (length S P u) = P.succ (length S P u) := DeepArithmetic.Semantics.Peano.Computability.add_peano_succ_zero P (length S P u)
      rw [h1]

  /- 
  NOTA SOBRE `append`:
  La función `append` ya está correctamente formulada y comprobada en `System.lean` 
  utilizando recursión primitiva (`S.prim_rec`). 
  Ver `ListSystem.append`, `append_nil`, y `append_cons` en dicho archivo.
  -/

end DeepArithmetic.Semantics.Lists.Computability
