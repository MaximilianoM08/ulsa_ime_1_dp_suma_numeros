# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
Lo que hace es hacer una sumatoria de 5 números, en los cuales solo se aceptan valores númericos, este programa serviría para hacer sumas simples como para llevar finanzas o sacar promedios. Todo esto, mientras se mantenga en suma simple, para los promedios se podría implementar la división en el futuro
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 5 números decimales

**Salidas:**
1. 1 número decimal

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Recibir valor númerico
- Aceptar decimales

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Aceptarlos porque asi lo decidí para que abarque mas números

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Que el dato es númerico, se realiza una suma y da un resultado

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 52, 20, 32.3, 10, 17 | 131.3 |
| 2 | 8, 12, 30, 2.5, 6.7 | 59.2 |
| 3 | 10.3, 20.7, 30.2, 40.6, 50.1 | 151.9 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** Sí

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
PS C:\Users\max_m\OneDrive\Documentos\DocumentosDisenoDeProgramasime_1_dp_001\ulsa_ime_1_dp_suma_numeros> ./suma.exe
Suma de 5 numeros
Ingresa numero
1
Ingresa numero
2
Ingresa numero
3
Ingresa numero
4
Ingresa numero
5
suma: 15
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
No pasó nada, el programa funcionó correctamente, el compilador no dijo nada, creo que el valor inicial si es importante para que realice la suma correctamente pero en este caso como no había nada escrito capaz y lo tomo como 0.0 por default

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | 15 | Sí |
| Todos ceros | 0 ×5 | 0 | 0 | Sí |
| Con negativos | -1 al -5 | -15 | N/A | No |
| Decimales | 0.5 ×5 | 2.5 | 2.5 | Sí |
| Todos iguales | 7 ×5 | 35 | 35 | Sí |
| Caso propio 1 | 3.5, 4, -2, -1, 6.7 | 11.2 | N/A | No |
| Caso propio 2 | 0, 20, 20, 20, 7 | 67 | 67 | Sí |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | No reconocía como válido números negativos | Agregué un else if con condición para números menores o iguales a 0 | Sí |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| De momento nada | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Que tengo que empezar a diseñar mejor la receta, teniendo en cuenta cualquier posible cosa que no pueda ser entendida al 100%

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
La manera en la que llevé a cabo mi diseño de la receta porque me quedé únicamente con la base que nos dió el profe y no intenté agregar más cosas para que fuera más claro

**¿Qué fue lo más difícil y cómo lo resolví?**
No me reconocía ningún valor como válido y fui con el profe por ayuda y resultó ser un error que no corría por el isdigit

**¿Qué pregunta me quedó sin responder?**
¿Por qué a mi no me funcionó el isdigit y a varios de mis compañeros si?

## 13. Lista de verificación antes de entregar (Fase 5)

- [Sí] Llené todas las secciones (no quedan `_____`)
- [Sí] Mi programa compila sin advertencias
- [Sí] Probé todos los casos de la tabla
- [Sí] Hice al menos 3 commits con mensajes claros
- [Sí] Hice `git push` y verifiqué mi fork en GitHub
- [Sí] Entregué el enlace de mi fork en Classroom