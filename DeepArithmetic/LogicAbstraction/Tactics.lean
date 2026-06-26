import FOL.FOL
import FOL.Tactics
import FOL.Theorems.Eq
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

-- ============================================================
-- MACRO: derive_trans
-- ============================================================
-- Encadena dos demostraciones de igualdad por transitividad.
-- Sintaxis: derive_trans h1 and h2
-- Si h1 : Γ ⊢ a = b  y  h2 : Γ ⊢ b = c, entonces deriva Γ ⊢ a = c

syntax "derive_trans " term " and " term : tactic

macro_rules
  | `(tactic| derive_trans $h1 and $h2) => `(tactic| exact derive_eq_trans $h1 $h2)

-- ============================================================
-- MACRO: derive_elim_or
-- ============================================================
-- Aplica la regla de eliminación de la disyunción.
-- Sintaxis: derive_elim_or h_or
-- Abre dos nuevos sub-objetivos (ramas del OR).

syntax "derive_elim_or " term : tactic

macro_rules
  | `(tactic| derive_elim_or $h_or) => `(tactic| apply Derives.elim_or _ _ _ _ $h_or)

-- ============================================================
-- MACRO: derive_refl
-- ============================================================
-- Genera una demostración de reflexividad Γ ⊢ t = t
-- Sintaxis: derive_refl t

syntax "derive_refl " term : tactic

macro_rules
  | `(tactic| derive_refl $t) => `(tactic| exact Derives.refl _ $t)

-- ============================================================
-- MACRO: derive_symm
-- ============================================================
-- Aplica simetría a una demostración de igualdad.
-- Sintaxis: derive_symm h

syntax "derive_symm " term : tactic

macro_rules
  | `(tactic| derive_symm $h) => `(tactic| exact derive_eq_symm $h)

-- ============================================================
-- MACRO: derive_subst
-- ============================================================
-- Aplica la regla de sustitución.
-- Sintaxis: derive_subst h_eq into f with h_body
-- Donde h_eq es Γ ⊢ a = b, f es la fórmula parametrizada, y h_body es Γ ⊢ f(a).
-- Produce Γ ⊢ f(b).

syntax "derive_subst " term " into " term " with " term : tactic

macro_rules
  | `(tactic| derive_subst $h_eq into $f with $h_body) => 
    `(tactic| exact Derives.subst _ _ _ $f $h_eq $h_body)

end DeepArithmetic.LogicAbstraction.Tactics
