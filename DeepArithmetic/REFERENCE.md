# Guía de Referencia Técnica - DeepArithmetic

Este documento proporciona una vista a nivel de sistema de las decisiones técnicas y abstracciones desarrolladas en la base de código `DeepArithmetic`.

## Conceptos Fundamentales

### 1. Sistema Abstracto de Álgebras (`FreeInductiveAlgebra`)
Debido a la necesidad de no recaer en estructuras del metalenguaje por conveniencia, el proyecto introduce `FreeInductiveAlgebra (U : Type)`. 
Esta clase captura la esencia de un dominio de inducción que tiene un paso base y una construcción de pasos recursiva parametrizada. 
Provee propiedades puras exigidas a sus instancias:
* **Inyectividad (`inj`)**: Todo paso sobre elementos distintos garantiza divergencia.
* **Discriminación (`discr`)**: Ningún paso recursivo puede llegar al elemento base.
* **Inducción (`ind`)**: Si un predicado sobre el dominio aplica al elemento base y se preserva en todos los pasos inductivos (bajo cualquier ramificación del tipo `U`), el predicado aplica a todo el dominio.

### 2. Recursión y Terminación (`wf_rec`)
Para modelar algoritmos como `append` o `reverse` sin comprometer la pureza matemática, las funciones recursivas (`prim_rec`) en semántica no asumen que el lenguaje anfitrión sepa resolverlas.
En su lugar, el sistema define axiomáticamente un **orden estricto `LT (≺)`** provisto como una instancia fundamental de `WellFounded`. 
Cualquier función semántica requiere en tiempo de compilación una prueba de que cada sub-llamada disminuye en este orden de relación constructivista, garantizando finalización determinística demostrada internamente.

### 3. Emulación de Tipos (Many-Sorted Logic en FOL Puro)
La Sintaxis emplea una lógica de primer orden de único dominio (`Term`).
Para emular dominios ricos o sistemas heterogéneos (como la mezcla de *Elementos* y *Listas*), la Semántica hace uso de un dominio basado en una unión disjunta (`A ⊕ S.L`).
Al realizar esto, **todo axioma sintáctico tiene que contener guardas de tipo deductivas**. Si no se guardan (ej. `(IsElem(h) ∧ IsList(t)) ⇒ ...`), un constructor devuelto como *fallback* en casos inválidos provocará que las propiedades de inyectividad y discriminación evalúen a contradicciones matemáticas que hacen caer los axiomas semánticos probados.

### 4. Flujo de Demostraciones de Conexión Sintáctica-Semántica
El fin último del proyecto es probar teoremas de satisfacción (`satisfiesTheory (Modelo) (Axiomas)`).
Para lograr esto contra fórmulas puras que usan variables de De Bruijn e índices de levantamiento sintáctico:
* El modelo usa manipuladores como `shiftEnv` y `updateEnv` para navegar las ramificaciones de los árboles lógicos.
* Se requiere extensionalidad funcional (`funext`) para demostrar que el encadenamiento arbitrario de instanciaciones léxicas (`eval_substFormula_ext`, `eval_liftFormula_ext`) converge lógicamente a los cierres y cuantificadores introducidos por los axiomas sintácticos.

## Estructura de Paquetes (Mapeo)

1. `Foundation/PureAxioms.lean`: Aquí reside el núcleo absoluto que postula la existencia inicial de la estructura sin implementaciones detalladas.
2. `Syntax/`:
   * `Peano.lean`: Fórmulas axiomáticas sintácticas clásicas (suma, sucesor, is_zero).
   * `Lists.lean`: Fórmulas emulando la teoría de Listas con guardas de pertenencia unaria (`isList`, `isElem`).
3. `Semantics/`:
   * `FreeInductiveAlgebra.lean`: Interfaz y lemas del motor de inducción unificada.
   * `Peano/System.lean` & `Lists/System.lean`: Adaptación del motor generalizado a las lógicas concretas (ej. `U` es equivalente a `PUnit` para Peano y a `A` para listas).
   * `Peano/Connection.lean` & `Lists/Connection.lean`: Enlace formal para completar que los esquemas de sistema logran evaluar exitosamente las fórmulas de Teoría pura sin derivaciones circulares.
