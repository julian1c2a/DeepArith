/-
Copyright (c) 2026. All rights reserved.
Author: DeepArithmetic Team
License: MIT
-/

import DeepArithmetic.Semantics.FreeInductiveAlgebra

namespace DeepArithmetic.Semantics.Peano

  open DeepArithmetic.Semantics.FreeInductiveAlgebra

  /-- Un sistema de Peano es un Álgebra Inductiva Libre generada por PUnit. 
      Esto asegura que solo existe un constructor constante (zero) y un constructor 
      unario (succ) al obviar la información de tipo. -/
  def PeanoSystem := FreeInductiveAlgebra PUnit

  /-- Envoltorio semántico que expone la API de Peano nativa sobre el sistema genérico. -/
  def PeanoSystem.N (S : PeanoSystem) : Type 0 := S.U
  def PeanoSystem.zero (S : PeanoSystem) : S.N := S.base
  def PeanoSystem.succ (S : PeanoSystem) (n : S.N) : S.N := S.step PUnit.unit n

end DeepArithmetic.Semantics.Peano

export DeepArithmetic.Semantics.Peano (PeanoSystem)
