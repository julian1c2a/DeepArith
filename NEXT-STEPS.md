# 🚀 NEXT STEPS: Metaprogramación y Tácticas Automáticas en Lean 4 (Fase 15)

El objetivo de esta fase es implementar macros y tácticas en el meta-lenguaje de Lean 4 para automatizar la derivación deductiva de nuestra Lógica de Primer Orden (FOL). Nuestro objetivo es aliviar la carga de probar manualmente igualdades algebraicas paso por paso mediante `Derives.xxx`.

## 1. Implementación de Macros y Tácticas (`Tactics.lean`)
- [ ] **Tácticas de Identidad Algebraica**:
  - Implementar macro `derive_refl` para simplificar `Derives.refl`.
  - Implementar macro `derive_symm` para automatizar `derive_eq_symm`.
  - Diseñar `derive_subst` para ocultar la instanciación manual del `substFormula`.
- [ ] **Buscador de Axiomas Automático**:
  - Crear una táctica de Lean 4 pura (usando `Lean.Elab.Tactic`) que resuelva las llamadas a `Derives.hyp` inspeccionando la lista `Γ` automáticamente.

## 2. Erradicación de `sorry` en Pruebas de Suma (`ArithmeticAddProofs.lean`)
- [ ] **Caso Base**: Reemplazar `sorry` en `lemma_zero_add_base` utilizando las nuevas tácticas de igualdad y transitividad.
- [ ] **Caso Paso**: Reemplazar `sorry` en `lemma_zero_add_step_eq` utilizando las nuevas tácticas para derivar `0 + succ(k) = succ(k)` asumiendo `0 + k = k`.

## 3. Verificación de Integridad
- [ ] Compilar con `lake build` para garantizar que las nuevas tácticas cierran los `sorry` y eliminan las advertencias de compilación para esos teoremas específicos, allanando el camino para usar estas tácticas universalmente en el proyecto.
