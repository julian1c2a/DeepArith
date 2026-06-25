# DeepArithmetic

**DeepArithmetic** es un framework fundacional desarrollado en Lean 4 cuyo objetivo es modelar conceptos computacionales profundos (como la aritmética de Peano y las listas homogéneas) desde un nivel axiomático puro y conectarlos de forma rigurosa a la Lógica de Primer Orden (FOL).

El proyecto nace con una meta constructivista estricta: modelar y demostrar teoremas sobre sistemas axiomáticos evitando depender intrínsecamente del metalenguaje subyacente (por ejemplo, evitando apoyarse en `Nat` de Lean para establecer inducción o recursión de forma "gratuita"). Toda la computabilidad debe ser probada a través de reglas semánticas y garantizada mediante modelos evaluables formales.

## Objetivos del Proyecto

1. **Constructivismo Riguroso**: No utilizar `axiom` o `private theorem` fuera del núcleo más estricto y aislado (`Foundation/PureAxioms`), forzando a que las propiedades emerjan estructuralmente.
2. **Puente Sintaxis-Semántica**: Emular una lógica de múltiples tipos (Many-Sorted Logic) sobre FOL puro, garantizando que todo axioma sintáctico evaluado en el modelo semántico sea probadamente válido.
3. **Terminación Axiomática de Computación**: Obligar a que las definiciones computables recursivas (`prim_rec`, `wf_rec`) incluyan demostraciones semánticas de finalización basadas en órdenes estrictos axiomáticos (`LT` o `≺`), desligando el cómputo de las dependencias mágicas del sistema anfitrión.
4. **Generalización Algebraica**: Abstraer la forma en la que los sistemas de Peano o Listas se generan utilizando álgebras libres (`FreeInductiveAlgebra`).

## Arquitectura de Capas

El proyecto está estructurado con namespaces anidados que garantizan el encapsulamiento:

- `DeepArithmetic.Foundation`: Contiene los axiomas opacos y los cimientos matemáticos inyectados por la base. Todo el uso de axiomatización impura está contenido y aislado aquí.
- `DeepArithmetic.Syntax`: Provee las definiciones puramente formales y sintácticas de la teoría usando el cálculo De Bruijn (fórmulas FOL como `isList`, `cons_inj`, `zero_ne_succ`).
- `DeepArithmetic.Semantics`: Construye los modelos interpretativos. Esta capa define cómo se computan las funciones de forma determinista y cómo evalúan y satisfacen los axiomas definidos en la Sintaxis.

## Estado Actual

El proyecto actualmente ha logrado:
* Unificar la inducción de constructores mediante la generalización de `FreeInductiveAlgebra`.
* Implementar recursión bien fundada estricta (`wf_rec`) a nivel semántico.
* Completar exitosamente la prueba completa de satisfacción semántica para el Esquema de Inducción de Peano (`peanoSystem_satisfies_peanoTheory`).
* Establecer el marco unificado para extender los mismos éxitos a la teoría de Listas Homogéneas (`Lists`).
