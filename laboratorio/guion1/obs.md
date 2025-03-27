---------> La frase nombre[strcspn(nombre, "\n")] = '\0';


La línea nombre[strcspn(nombre, "\n")] = '\0'; es una técnica común en C para eliminar el salto de línea (\n) que fgets() incluye al final de la cadena leída. Vamos a desglosarla:

Explicación detallada:
fgets() y el problema del \n:

Cuando usas fgets() para leer una cadena (como un nombre), esta función captura todo lo que el usuario escribe, incluyendo el ENTER (\n).

Ejemplo: Si el usuario escribe "Juan" y presiona ENTER, fgets() guarda "Juan\n\0".

Esto puede causar problemas al comparar o procesar la cadena más adelante.

¿Qué hace strcspn?:

strcspn(nombre, "\n") busca la posición del primer \n en la cadena nombre.

Si encuentra \n, devuelve su índice (ejemplo: 4 para "Juan\n").

Si no encuentra \n, devuelve la longitud de la cadena (útil para evitar desbordamientos).

Asignación del terminador nulo (\0):

nombre[...] = '\0' reemplaza el \n con un terminador nulo, truncando la cadena en esa posición.

Resultado: "Juan\n" → "Juan\0".


