# 🎯 THE OBJECTIVE: Deep Arithmetic on Pure Logic

## Visión General
El proyecto **DeepArith** es una exploración y formalización matemática profunda que busca construir toda la aritmética (y tipos computacionales básicos como Listas y Tuplas) desde los cimientos más primitivos de la lógica de primer orden (FOL), utilizando el asistente de demostraciones **Lean 4** como anfitrión.

Nuestro objetivo no es usar los números naturales nativos de Lean, sino **construir un Universo $V$ algebraico a "Nivel Objeto"**, donde nosotros mismos definimos la sintaxis lógica, las reglas de inferencia deductiva (Deducción Natural) y los axiomas fundacionales. Sobre este motor, definiremos propiedades computables y demostraremos que terminan y son correctas.

## Arquitectura del Universo $V$ (Teoría de Conjuntos + Tipos Algebraicos)
Hemos diseñado un universo híbrido extremadamente elegante:
1. **Lógica Pura:** Todo opera bajo un motor de deducción natural (`Derives Γ P`) rigurosamente formalizado usando los índices de De Bruijn para el manejo higiénico de variables cuantificadas.
2. **Fundamentos ZFC-like:** Tenemos axiomas básicos de conjuntos (Extensionalidad, Par, Unión, Vacío).
3. **El Esquema Universal ($\epsilon$-Inducción):** En lugar de tener un axioma de inducción Peano ad-hoc, disponemos de un poderoso axioma de $\epsilon$-Inducción de Fundación y Recursión:
   `∀ P ( ∀ x ( ∀ y (y ∈ x ⇒ P(y)) ⇒ P(x) ) ⇒ ∀ z P(z) )`
   Esto permite demostrar propiedades estructurales para cualquier conjunto del universo.
4. **Primitivas Disjuntas Algebraicas:** En lugar de codificar naturales y listas como conjuntos puros (lo cual es pesado y opaco), los introducimos como primitivas funcionales (`n_zero`, `n_succ`, `l_nil`, `l_cons`, `tup`).
   - Están separados por axiomas de desigualdad estricta (un natural jamás será una lista o una tupla).
   - **El Enfoque Von Neumann:** Para habilitar la $\epsilon$-Inducción universal sobre estas primitivas disjuntas, inyectamos semántica de pertenencia estructural ("por dentro" se comportan como los ordinales de Von Neumann):
     `∀ y ∀ x, x ∈ n_succ(y) ⇔ x ∈ y ∨ x = y`

## Representación Aritmética a Nivel Objeto
Hemos volcado la aritmética en el sistema:
- Símbolos: `n_add`, `n_mult`, `n_sub`, `n_pred`
- Las operaciones se definen recursivamente sobre `n_succ` en la axiomatización de la teoría.
- **Predicado `is_nat(x)`**: Definido mediante lógica de segundo orden emulada en FOL para restringir las propiedades universales exclusivamente a la rama de los números naturales del universo $V$.

## Hitos Alcanzados (Lo Hecho)
- [x] Construcción del framework sintáctico de fórmulas FOL.
- [x] Motor de deducción natural (`Derives`) validado en Lean 4.
- [x] Arquitectura de Axiomas y separación de tipos (Naturales, Listas, Tuplas).
- [x] Macros y Tácticas de Lean (`derive_apply`, `derive_mp`) para automatizar el instanciamiento de axiomas y Modus Ponens, aliviando la carga de construir árboles lógicos a mano.
- [x] Resolución de la brecha de $\epsilon$-Inducción inyectando los axiomas de pertenencia `ax_zero_in` y `ax_succ_in`.
- [x] Entorno compilando de manera nativa y robusta bajo Lean v4.31.0 y repositorios Git sincronizados.

## Lo Que Queremos Hacer (Próximos Pasos)
1. **La Demostración Inductiva Maestra:** Construir el árbol de prueba en `ArithmeticProofs.lean` para deducir `succ(x) + y = succ(x + y)` asumiendo `is_nat(y)` mediante la $\epsilon$-Inducción.
2. **Propiedades Computacionales:** Programar a nivel objeto funciones que transformen estos números unarios a binario puro (`to_binary(x)`) y base 10 (`to_base10(x)`).
3. **División Euclídea:** Definir `n_div` y `n_mod` y probar su terminación y corrección respecto a la representación posicional.
