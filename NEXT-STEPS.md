# 🚀 NEXT STEPS: Teoría de Autómatas en Lógica de Primer Orden (Fase 14)

El objetivo de esta fase es elevar nuestro modelo abstracto implementando una **Máquina de Turing (TM)** puramente funcional dentro del marco deductivo de la Lógica de Primer Orden (FOL). Utilizaremos un enfoque relacional/predicativo para sortear la falta de tipos compuestos y mutabilidad.

## 1. Modelo Relacional de la TM (`TuringMachine.lean`)
- [ ] **Estructuras Constantes**:
  - `tm_q0` (estado inicial).
  - `tm_blank` (símbolo en blanco).
  - `dir_left`, `dir_right` (direcciones de movimiento de la cabeza).
- [ ] **Reglas Relacionales (Predicados)**:
  - Definir la matriz de transición: `tm_delta(q, c, q_next, w, dir)`.
  - Definir la relación de paso único: `tm_step(q, L, R, q_next, L_next, R_next)`, modelando las permutaciones sobre la cinta (Listas Izquierda y Derecha) considerando los casos de borde (cinta vacía = `tm_blank`).
  - Definir el motor de ejecución iterativa de Peano: `tm_run(q, L, R, steps, q_final, L_final, R_final)`.

## 2. Validación de Invariantes Lógicas (`TuringProofs.lean`)
- [ ] **Teorema de la Invarianza Inactiva**:
  - Formular esquemáticamente que para `steps = n_zero`, el autómata no realiza mutaciones en su cinta ni cambia su estado.
  - Expresión: `tm_run(q, L, R, n_zero, q_f, L_f, R_f) ⇒ (q = q_f ∧ L = L_f ∧ R = R_f)`.

## 3. Integración en el Universo FOL
- [ ] Importar `TuringMachine` y `TuringProofs` en `DeepArithmetic.lean`.
- [ ] Ejecutar el árbol deductivo de Lean 4 (`lake build`) para sellar la validez de la sintaxis y los axiomas estructurales.
