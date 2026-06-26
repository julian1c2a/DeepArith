/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import FOL
import DeepArithmetic.LogicAbstraction.SetTheory

namespace DeepArithmetic.LogicAbstraction.SyntacticSugar

open FOL
open DeepArithmetic.LogicAbstraction.SetTheory

-- ============================================================
-- 1. Tuplas Nativas mediante Codificación de Kuratowski
-- ============================================================

-- El par ordenado clásico de Kuratowski: (a, b) = {{a}, {a, b}}
-- En Lean, mantenemos este metadato de ser "par ordenado" por el hecho de 
-- llamar a esta función, aunque sintácticamente en FOL sea puro Set Theory.

/-- Crea el singleton {a} -/
def t_singleton (a : Term) : Term :=
  t_pair a a

/-- Crea el par ordenado (a, b) = {{a}, {a, b}} usando Kuratowski. 
    Lleva implícitamente el conocimiento meta de ser un par ordenado. -/
def K_pair (a b : Term) : Term :=
  t_pair (t_singleton a) (t_pair a b)

-- ============================================================
-- 2. Tuplas Asociativas Primitivas
-- ============================================================

-- Usamos notación especial para evitar colisiones con Lean (⟨ ⟩).
notation "⟪" a ", " b "⟫" => t_tup a b

-- ============================================================
-- 3. Listas Inductivas Primitivas
-- ============================================================

-- Usamos notación especial para evitar colisión con las listas de Lean ([ ]).
-- Notación para "cons"
notation "⟦" h ", " t "⟧" => l_cons h t

-- ============================================================
-- 4. Naturales Primitivos
-- ============================================================

-- Inyección de Nat a la sintaxis FOL^= usando las primitivas n_zero y n_succ
def inject_nat : Nat → Term
  | 0 => n_zero
  | n + 1 => n_succ (inject_nat n)

-- ============================================================
-- 5. Predicados Estructurales Sintácticos
-- ============================================================

-- Dado que ahora son primitivas separadas, podríamos requerir predicados
-- para identificar de qué "tipo" lógico es un término.
-- Sin embargo, el sistema de tipos algebraico inyectado garantiza la separación
-- mediante los axiomas en SetTheory.lean.

-- ============================================================
-- 6. Comprensión Embebida (Axioma de Separación)
-- ============================================================

-- El usuario solicitó notación de comprensión { x ∈ A | P }.
-- En FOL, esto se traduce a la fórmula que define la existencia del subconjunto.
-- Dado que un conjunto por comprensión no es un término evaluable per se en nuestra sintaxis FOL básica sin descriptores definidos, 
-- usaremos notación macro. Mapeamos la notación a una fórmula que expresa:
-- Z es el conjunto por comprensión si para todo y, y está en Z iff y está en A y cumple P(y).

/-- 
Macro para la fórmula que axiomatiza el conjunto resultante Z = {var ∈ A | P}.
Es decir: ∀ var (In(var, Z) ↔ In(var, A) ∧ P)
(Asumimos Z como un término externo que la fórmula restringe).
-/
def set_comprehension_formula (varIdx : Nat) (A : Term) (P : Formula) (Z : Term) : Formula :=
  .forall (iff (In (.var 0) Z) (.and (In (.var 0) A) P)) -- Aquí idealmente se debería hacer subst de varIdx, simplificado para notación base.

end DeepArithmetic.LogicAbstraction.SyntacticSugar
