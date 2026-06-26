# 🚀 NEXT STEPS: Demostración Inductiva Maestra (Opción A)

El objetivo de esta fase es construir el árbol de deducción natural para el teorema de paso inductivo de la suma en `ArithmeticProofs.lean`:
`is_nat(y) ⇒ succ(x) + y = succ(x + y)`

Para mantener el código manejable, ejecutaremos el siguiente plan detallado:

## 1. Ampliación de la Infraestructura de Tácticas (`Tactics.lean`)
Antes de construir los árboles de prueba, implementaremos macros auxiliares que encapsulen patrones repetitivos de deducción natural:
- [x] **`derive_trans`**: Macro para encadenar demostraciones de igualdades (`A = B` y `B = C` implica `A = C`) de forma transparente sin invocar manualmente las complejas reglas de transitividad de la igualdad en `FOL`.
- [x] **`derive_elim_or`**: Macro para dividir casos fácilmente cuando lidiamos con las disyunciones, especialmente útil para el axioma de Von Neumann (`y ∈ x ∨ y = x`).

## 2. Desarrollo de Lemas Auxiliares (`ArithmeticProofs.lean`)
Dividiremos la demostración por inducción en piezas lógicas autocontenidas:
- [x] **Lema Base (`lemma_add_base`)**: Prueba de `P(n_zero)`, es decir, `is_nat(n_zero) ⇒ succ(x) + n_zero = succ(x + n_zero)`. Utilizará `ax_add_zero`.
- [x] **Lema del Paso Inductivo (`lemma_add_step`)**: Prueba de `P(k) ⇒ P(n_succ(k))`. Utilizará la transitividad de la igualdad (`derive_trans`), la hipótesis inductiva clásica `P(k)`, y el axioma `ax_add_succ`.

## 3. Ensamblaje Final del Teorema de Inducción
- [ ] **Teorema Final (`derives_succ_add`)**: Componer la demostración final invocando `ax_epsilon_induction` y demostrando que la propiedad se conserva a través de `ax_succ_in` usando la macro `derive_elim_or`.

## 4. Demostración de Conmutatividad (Meta Extendida)
- [ ] Una vez tengamos `succ(x) + y = succ(x + y)`, utilizarlo para probar el teorema global `is_nat(x) ∧ is_nat(y) ⇒ x + y = y + x`.
