# PLANNING: Estrategia de Desarrollo para la Siguiente Fase

La arquitectura lógica base está completa. El objetivo estratégico a partir de ahora es **arrancar el Motor de Deducción (Derives)** y someter a prueba nuestra aritmética a Nivel Objeto, demostrando que FOL^= es capaz de computar y verificar axiomas por sí mismo.

## 1. Validación de la Aritmética
La prioridad estratégica es validar que los axiomas definidos en `Arithmetic.lean` no solo compilan en Lean, sino que son funcionalmente operativos en el sistema de deducción `FOL.Derives`.
- **Fase A:** Teoremas Triviales (Instanciación de axiomas sin inducción).
- **Fase B:** Teoremas Inductivos (Aplicar el esquema de $\epsilon$-inducción sobre los números naturales para probar conmutatividad y asociatividad).

## 2. Automatización de la Deducción (Tácticas Meta)
Escribir árboles de demostración a mano en `Derives` (ej. `Derives.mp (Derives.forall_elim ... ) ...`) es insostenible para teoremas largos. 
- **Estrategia:** Desarrollaremos un conjunto de *Macros/Tácticas en Lean 4* que construyan los árboles de deducción sintáctica automáticamente a partir de comandos de alto nivel (como un "mini-tactic framework" propio para nuestra FOL).

## 3. Demostración sobre Representaciones
Una vez la aritmética básica esté consolidada, el siguiente hito estratégico es probar propiedades sobre `to_binary(x)` y `to_base10(x)`:
- Demostrar que para un número concreto, la evaluación de `to_binary(x)` termina.
- Establecer un teorema de correspondencia entre el tamaño de la lista binaria y el logaritmo en base 2 del número.
