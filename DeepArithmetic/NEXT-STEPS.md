# Siguientes Pasos Inmediatos (NEXT-STEPS)

Tras haber completado exitosamente la arquitectura base semántica y la demostración fundamental de la aritmética de Peano, la prioridad inmediata se enfoca en finalizar el soporte equivalente para la Teoría de Listas Homogéneas y cimentar la recursión axiomática.

### 1. Completar la Demostración de Conexión de Listas (`listSystem_satisfies_listTheory`)
Actualmente, el archivo `DeepArithmetic/Semantics/Lists/Connection.lean` contiene los esquemas principales usando `simp`, pero persisten pasos sin finalizar (`sorry`) debido a la complejidad de evaluar expresiones `evalFormula` en dominios de suma disjunta `A ⊕ S.L`.
- **Tarea**: Implementar las demostraciones manuales desplegando `evalTerm` para los casos de inyectividad (`cons_inj`) y comportamiento recursivo (`append_nil`, `append_cons`).
- **Tarea**: Escribir la demostración semántica del esquema de inducción de listas (`listInductionSchema`), replicando el abordaje exhaustivo (usando `eval_substFormula_ext`) que fue tan exitoso en Peano.

### 2. Implementar Computabilidad Rigurosa en Listas
Demostrar en la práctica la exigencia axiomática de finalización (computabilidad) desarrollada en `FreeInductiveAlgebra`.
- **Tarea**: Definir explícitamente y probar la función `length` y `reverse` para `ListSystem` utilizando `S.prim_rec` o directamente recursión bien fundada `wf_rec`.
- **Tarea**: Construir pruebas de disminución probando que al aplicar un sub-paso sobre `cons h t`, el remanente `t` es estrictamente menor según el orden inductivo `≺` semántico.

### 3. Refinamiento de Lemas de Extensionalidad (Evaluación Sintáctica)
- **Tarea**: Extraer los patrones repetitivos de demostración de evaluación semántica (la combinación de `eval_substFormula_ext` + `funext` + casos en entorno) a macros de pruebas genéricas o lemas reutilizables para aliviar la verbosidad de futuras pruebas FOL sintácticas.
