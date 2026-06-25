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

end DeepArithmetic.LogicAbstraction.SyntacticSugar
