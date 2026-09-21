# Programación (C)

Repositorio personal con los guiones de prácticas, apuntes y exámenes de la asignatura de
**Programación**, cursada en **Telecomunicaciones** en la **Universidad de Alcalá (UAH)**.
Todo el código está en **C** y se compila con **GCC**.

## Estructura

| Carpeta | Contenido |
| --- | --- |
| [sesion1/](sesion1/) | Primeros programas: `printf`/`scanf`, bucles, arrays de enteros y cadenas de caracteres |
| [sesion2/](sesion2/) | Precisión de los `double`, manipulación de cadenas y primer programa dividido en varios ficheros fuente |
| [sesion3/](sesion3/) | Funciones sobre arrays (máximo, mínimo, media) y tratamiento de cadenas (palíndromos) |
| [sesion4/](sesion4/) | Paso de parámetros por referencia, cálculo de media y varianza, y ordenación por el método de la burbuja |
| [sesion5/](sesion5/) | Estructuras (`struct`), enumerados y organización del proyecto en `src/` + `include/` |
| [sesion6/](sesion6/) | Argumentos en línea de comandos (`argc` / `argv`) y funciones recursivas |
| [sesion7/](sesion7/) | Ficheros de texto: `fopen`, `fgetc`, `fputs`, `fgets`, `fprintf`… con [ejemplos comentados](sesion7/EXAMPLES/) |
| [session8/](session8/) | Ficheros binarios y lectura de un fichero de datos (`imdbMOVIES.txt`) sobre un array de estructuras |
| [apuntesClase/](apuntesClase/) | Apuntes sueltos de clase: punteros, memoria dinámica, listas enlazadas, árboles binarios, ficheros… |
| [examen-12mayo2025/](examen-12mayo2025/) | Examen del 12 de mayo de 2025 (array dinámico de alumnos) |
| [examenesProgramaccionFinales/](examenesProgramaccionFinales/) | Exámenes finales y parciales (PEL1, PEL2) con el [temario y estrategia de examen](examenesProgramaccionFinales/readme.md) |

Cada sesión incluye su propio `readme.md` / `notas.md` con el enunciado del guion y el comando de
compilación correspondiente.

## Cómo compilar

A partir de la sesión 5 los proyectos siguen la estructura `src/` (fuentes) + `include/` (cabeceras):

```bash
gcc -o ejercicio -I./include ./src/main.c ./src/misfunciones.c
./ejercicio
```

En las sesiones anteriores los ficheros están juntos en la misma carpeta:

```bash
gcc main.c misfunciones.c -o programa
./programa
```

## Convenciones

- `misfunciones.c` contiene las funciones de usuario y `misfunciones.h` sus declaraciones prototipo,
  protegidas con compilación condicional (`#ifndef` / `#define` / `#endif`).
- En los guiones, las `XXXXX` son los huecos que hay que rellenar: marcan la parte del código que
  toca escribir en cada apartado.
