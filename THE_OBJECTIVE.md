# THE OBJECTIVE: Arquitectura de la Lógica Pura y el Universo $V$

## 1. El Propósito Fundamental
El objetivo de este proyecto es construir un **Demostrador de Teoremas Fundacional** desde cero en Lean 4, basado en Lógica de Primer Orden pura con igualdad (FOL^=). 
No buscamos apoyarnos ciegamente en la teoría de tipos de Lean, sino usar Lean como metalenguaje para compilar, verificar y ejecutar nuestro propio universo lógico ($V$), completamente independiente, computable y decidible.

## 2. Lo Que Ya Hemos Logrado
1. **El Motor Lógico (FOL^=):** Implementación impecable de la sintaxis abstracta de FOL (Términos con índices de De Bruijn, Fórmulas) y sus conectivas lógicas clásicas.
2. **El Sistema Deductivo Sintáctico:** Implementación de `Derives` (`⊢`), un sistema de Deducción Natural intuicionista y clásico con soporte para reescritura en subexpresiones (`rewrite_at`).
3. **El Theory Framework:** Una arquitectura que evalúa verdades semánticas (`Models`) y demostraciones sintácticas (`Proves`), soportando **Esquemas Infinitos de Axiomas** nativamente.
4. **La Base de Conjuntos (ZFC Extendido):** Reconstrucción del universo matemático a través de primitivas estrictamente separadas. A diferencia del ZFC puro de Kuratowski, hemos inyectado constructores algebraicos (`n_succ`, `tup`, `l_cons`) y *Axiomas de Separación* para garantizar que el tipo de cada objeto matemático sea inherentemente inconfundible (Listas $\neq$ Tuplas $\neq$ Naturales $\neq$ Conjuntos puros).

## 3. Lo Que Estamos Construyendo Ahora (Fase Actual)
Estamos dotando a los Naturales de un motor computacional sintáctico autosuficiente:
1. **Aritmética Primitiva:** Inyección de símbolos funcionales (`add`, `mult`, `sub`, `div`, `mod`) y relaciones (`<`) directamente en el nivel lógico de FOL^=.
2. **Representaciones Base 2 y Base 10 (Nivel Objeto):** No como simples traductores meta, sino como funciones puras dentro del sistema FOL (`to_binary(x)`, `to_base10(x)`) regidas por axiomas recursivos utilizando nuestra nueva división euclídea y resto. Esto permite que el sistema demuestre teoremas formales sobre sus propios bits y dígitos.

## 4. El Objetivo Definitivo: El Universo $V$
El fin último del proyecto es consolidar el Universo de Conjuntos Hereditariamente Finitos ($V$) modelado como un árbol infinito generado por listas:
$$V := \text{node}(\text{List}\langle V \rangle)$$

Sobre esta estructura, todas las matemáticas computables se fundamentarán en un único principio rector, el **Axioma de $\epsilon$-Inducción (Fundación)**:
$$\forall P \ \Big( \forall x \ \big( \forall y \ (y \in x \implies P(y)) \implies P(x) \big) \implies \forall z \ P(z) \Big)$$

Con esto, el sistema poseerá una limpieza simétrica a la de la Aritmética de Peano, pero con la potencia descriptiva de la Teoría de Conjuntos de Aczel, capaz de representar y razonar deductivamente sobre listas, árboles, grafos y algoritmos a nivel sintáctico estricto.
