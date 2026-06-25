# Architectural Decision Records (ADRs)

Este documento registra las decisiones arquitectónicas clave del proyecto `DeepArithmetic` (y sus proyectos hermanos `DeepPeano` / `DeepAczel`).

## 1. Jerarquía de Namespaces Anidados y Separación Sintaxis/Semántica
**Fecha**: 2026-06-24
**Decisión**: Se establece una separación estricta entre la sintaxis puramente formal (lógica de primer orden) y los modelos semánticos en Lean 4.
**Estructura**:
- `DeepArithmetic.Syntax`: Contiene las teorías puras en FOL (`PeanoTheory` y `ListTheory`).
- `DeepArithmetic.Semantics`: Contiene las definiciones de las álgebras y modelos (`PeanoSystem`, `ListSystem`).
- `DeepArithmetic.Foundation`: Contiene los axiomas puros opacos y las demostraciones fundacionales (`Initiality`, `PureAxioms`).
**Justificación**: Esta separación garantiza que la metateoría (FOL) no se mezcle con la infraestructura matemática de Lean, manteniendo el proyecto impecable y apto para razonamiento sobre modelos.

## 2. Prohibición de Axiomas Dispersos
**Fecha**: 2026-06-24
**Decisión**: Queda **prohibido** el uso de `axiom` (y en particular `private axiom`) o `private theorem` en cualquier lugar del proyecto más allá de lo estrictamente imprescindible al principio del sistema (es decir, en los módulos de `Foundation/PureAxioms`).
**Justificación**: Mantener la computabilidad del mayor grado posible de código y evitar inconsistencias. Los axiomas deben estar hiperlocalizados y aislados.

## 3. Unificación bajo FreeInductiveAlgebra
**Fecha**: 2026-06-24
**Decisión**: Las matemáticas de **Peano** (números naturales) y de **Listas Homogéneas** se unifican semánticamente bajo una estructura genérica llamada `FreeInductiveAlgebra`. 
**Justificación**: Evita duplicar código metamatemático complejo. El principio de Inicialidad y la derivación de recursión primitiva desde inducción se prueban una sola vez para la estructura abstracta y se heredan para Peano y para Listas.
