

namespace DeepArithmetic.Semantics

/- 
  Emulación formal de Lógica de Múltiples Tipos (Many-Sorted Logic) sobre FOL puro.
  Dado que FOL tradicional asume un único universo, la semántica para sistemas 
  con tipos mutuamente excluyentes (e.g. Elementos vs Listas) debe interpretar el 
  dominio lógico como una unión disjunta de los sub-universos.
-/
namespace ManySorted

-- El dominio binario estándar
def Domain (A B : Type) := A ⊕ B

-- Identificadores de sort
def isSort1 {A B : Type} : Domain A B → Prop
  | Sum.inl _ => True
  | Sum.inr _ => False

def isSort2 {A B : Type} : Domain A B → Prop
  | Sum.inl _ => False
  | Sum.inr _ => True

-- Extractores seguros que pueden fallar (devolviendo el caso base opcional si falla)
-- (Para uso en definiciones computables parciales)
def extract1 {A B : Type} : Domain A B → Option A
  | Sum.inl a => some a
  | Sum.inr _ => none

def extract2 {A B : Type} : Domain A B → Option B
  | Sum.inl _ => none
  | Sum.inr b => some b

-- Lemas fundamentales para eliminación rápida
@[simp]
theorem isSort1_inl {A B : Type} (a : A) : isSort1 (B := B) (Sum.inl a) = True := rfl

@[simp]
theorem isSort1_inr {A B : Type} (b : B) : isSort1 (A := A) (Sum.inr b) = False := rfl

@[simp]
theorem isSort2_inl {A B : Type} (a : A) : isSort2 (B := B) (Sum.inl a) = False := rfl

@[simp]
theorem isSort2_inr {A B : Type} (b : B) : isSort2 (A := A) (Sum.inr b) = True := rfl

end ManySorted
end DeepArithmetic.Semantics
