# NEXT-STEPS: Tareas Inmediatas para la Próxima Sesión

Con la base de aritmética a nivel objeto construida, la próxima sesión se enfocará netamente en iniciar el uso real del demostrador.

## Tareas a Ejecutar
1. **Primer Teorema Aritmético:** Construir a mano la demostración sintáctica (con `Derives`) de que `x + 0 = x`. Esto pondrá a prueba la instanciación axiomática de `Arithmetic.lean`.
2. **Segundo Teorema Aritmético (Inducción):** Formular la demostración sintáctica de la conmutatividad o el paso inductivo de la suma, instanciando la $\epsilon$-inducción sobre los Naturales (`n_zero`, `n_succ`).
3. **Automatización Básica (Macros en Lean 4):**
   - Diseñar y programar una macro de Lean `apply_axiom` que construya automáticamente la cadena de `Derives.forall_elim` necesaria para usar un axioma universalmente cuantificado.
   - Diseñar una macro `modus_ponens` simplificada para el framework.

## Requisitos Previos (Para la Próxima Sesión)
- Revisar que la semántica de la regla `Derives` en `FOL/FOL.lean` esté clara.
- Revisar el funcionamiento exacto de `substFormula` para asegurar que las variables libres no colisionan al aplicar la $\epsilon$-inducción sintáctica.
