# 🗓️ PLANNING

Este documento traza la estrategia de alto nivel y el plan de ejecución de las próximas fases del proyecto **DeepArith**.

## Fase 1: Fundaciones Lógicas y Axiomáticas (COMPLETADA)
- Integración de FOL y Teoría de Conjuntos básica.
- Definición de tipos algebraicos disjuntos con semántica de Von Neumann para viabilizar la $\epsilon$-Inducción universal.
- Construcción de las primitivas aritméticas.
- Automatización básica (macros `derive_apply`, `derive_mp`).

## Fase 2: El Motor de Inducción (PRÓXIMA SESIÓN)
**Objetivo:** Validar que el framework es capaz de razonar inductivamente a partir de los axiomas.
- **Paso 1:** Desarrollar en Lean 4 la prueba detallada de la $\epsilon$-Inducción para la suma:
  - Instanciar la premisa general.
  - Subdemostrar el caso del conjunto vacío (`n_zero`).
  - Subdemostrar el paso para sucesores (`n_succ`) utilizando `ax_succ_in`.
- **Paso 2:** Concluir el Teorema `is_nat(y) ⇒ succ(x) + y = succ(x + y)`.
- **Paso 3:** Demostrar la conmutatividad de la suma `is_nat(y) ∧ is_nat(x) ⇒ x + y = y + x`.

## Fase 3: Representaciones Aritméticas (A FUTURO)
**Objetivo:** Elevar el cálculo unario a sistemas posicionales.
- **Paso 1:** Diseñar las funciones lógicas `to_binary(x)` y `to_base10(x)` en el lenguaje objeto de `TheoryFramework`.
- **Paso 2:** Formalizar la división euclídea (`n_div`, `n_mod`) en los axiomas básicos y usar esto para extraer los dígitos.
- **Paso 3:** Demostrar usando nuestro esquema de inducción que la transformación `to_binary(x)` finaliza.

## Reglas y Directivas del Proyecto
- **La Infraestructura es el Rey:** Cualquier patrón repetitivo en las pruebas debe extraerse como una nueva macro en `Tactics.lean` en lugar de copiar y pegar código Lean verboso.
- **Nivel Objeto Puro:** Ningún teorema aritmético puede usar el motor `Nat` interno de Lean 4. Todo ocurre bajo el velo del constructor `Derives`.
