# 🚀 NEXT STEPS

Estas son las tareas técnicas inmediatas para arrancar la siguiente sesión de programación de par a par:

## 1. El Lema de Inducción (Deducción Pura)
- [ ] Abrir `DeepArithmetic/LogicAbstraction/ArithmeticProofs.lean`.
- [ ] Sustituir el `sorry` actual en el teorema `derives_succ_add` por el árbol de demostración real de Lean.
- [ ] **Desglose de la demostración a codificar**:
  1. Instanciar la macro `epsilon_induction_P` con `P_succ_add`.
  2. Implementar una demostración por sub-casos del conectivo Lógico (Modus Ponens anidados):
     - Demostrar que para `n_zero` se cumple `succ(x) + n_zero = succ(x + n_zero)`.
     - Demostrar que usando `ax_succ_in` y la hipótesis inductiva sobre los elementos del sucesor, se cumple `succ(x) + succ(y) = succ(x + succ(y))`.
  3. Componer todo con las macros `derive_apply` y `derive_mp`.

## 2. Refinamiento de Tácticas (Infraestructura)
- [ ] Durante la demostración del Lema de Inducción, probablemente nos daremos cuenta de que construir eliminaciones de conjunciones o disyunciones (`and`, `or`) es muy verboso.
- [ ] Escribir macros en `Tactics.lean` como `derive_elim_or` o `derive_split_and` para hacer la demostración de la inducción mucho más legible y robusta.

## 3. Demostración de Conmutatividad
- [ ] Una vez tengamos `succ(x) + y = succ(x + y)`, utilizarlo para probar el teorema global `is_nat(x) ∧ is_nat(y) ⇒ x + y = y + x`.
- [ ] Guardarlo en `ArithmeticProofs.lean` y verificar que el motor Lean lo acepta.
