# Planificación a Largo Plazo (PLANNING)

El proyecto `DeepArithmetic` no es solo una demostración de concepto para la Aritmética de Peano, sino el cimiento de una librería fundacional profunda capaz de razonar sobre la semántica constructivista axiomática.

A continuación se detallan las grandes metas a largo plazo de este proyecto:

## 1. Unificación Universal de Tipos Inductivos en FOL
- **Metaprogramación y Tácticas Automáticas**: Actualmente, la conexión entre la sintaxis FOL (ej. `PeanoTheory`) y la semántica de evaluación (`PeanoSystem`) se demuestra con fuerza bruta sobre el álgebra. El objetivo es construir macros o tácticas (elab) en Lean 4 que dado un tipo recursivo, generen la firma FOL y demuestren automáticamente su consistencia semántica apoyándose en `FreeInductiveAlgebra`.
- **Álgebras Heterogéneas Generalizadas**: Ampliar la suma disjunta utilizada en `Lists` (`A ⊕ S.L`) a un motor generalizado que soporte múltiples constructores de tipos dependientes mutuamente, sirviendo como una implementación de "Many-Sorted Logic" incrustada estructuralmente.

## 2. DeepAczel (Conjuntos No Bien Fundados)
- **Axioma de Anti-Fundación**: Extender el framework más allá del constructivismo de árboles finitos para soportar grafos cíclicos y la teoría de conjuntos no bien fundados de Aczel.
- **Bisimulación como Igualdad**: Modelar sistemas de transiciones y co-inducción a nivel axiomático semántico estricto, creando un `CoFreeInductiveAlgebra` dual a la estructura actual.

## 3. Teoremas Fundacionales Mayores
- **Incompletitud de Gödel**: Una vez que las listas genéricas y la representación de sintaxis sean completamente formales en este modelo semántico cerrado, desarrollar una codificación de Gödel interna a `DeepArithmetic` para demostrar formalmente la imposibilidad de la prueba de consistencia dentro de la estructura misma.
- **Verificación Computacional Pura**: Definir modelos abstractos de máquinas de Turing donde las transiciones de estado se demuestran axiomáticamente deterministas y finitas, utilizando nuestra relación estricta `LT` (`≺`) construida y probada semánticamente.
