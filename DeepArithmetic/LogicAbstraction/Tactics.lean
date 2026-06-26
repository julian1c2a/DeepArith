import FOL.FOL
import FOL.Tactics
import TheoryFramework.Theory
import TheoryFramework.Instances.FOL

namespace DeepArithmetic.LogicAbstraction.Tactics

open FOL
open Lean Meta Elab Tactic
open TheoryFramework
open TheoryFramework.Instances

-- ============================================================
-- MACRO: apply_axiom
-- ============================================================
-- Aplica repetidamente `Derives.elim_forall` a una hipótesis
-- que contiene múltiples cuantificadores universales.
-- Sintaxis: derive_apply h with [t1, t2, ...]

syntax "derive_apply " term " with " "[" term,* "]" : tactic

macro_rules
  | `(tactic| derive_apply $h with []) => `(tactic| exact $h)
  | `(tactic| derive_apply $h with [$t]) => `(tactic| exact Derives.elim_forall _ _ $t $h)
  | `(tactic| derive_apply $h with [$t, $ts,*]) =>
    `(tactic| derive_apply (Derives.elim_forall _ _ $t $h) with [$ts,*])

-- ============================================================
-- MACRO: modus_ponens
-- ============================================================
-- Aplica Modus Ponens (Derives.elim_impl) directamente.
-- Sintaxis: derive_mp h_impl with h_A

syntax "derive_mp " term " with " term : tactic

macro_rules
  | `(tactic| derive_mp $h_impl with $h_A) => `(tactic| exact Derives.elim_impl _ _ _ $h_impl $h_A)

end DeepArithmetic.LogicAbstraction.Tactics
