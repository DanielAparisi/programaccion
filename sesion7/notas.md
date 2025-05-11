En el código del main, la función getchar() se utiliza para leer caracteres individuales desde la entrada estándar (el teclado). Aquí está el desglose de cómo se usa en este caso
a = getchar(); // leemos en 'a' la letra a buscar


getchar(); // borramos el '\n' del buffer del teclado Propósito: Elimina el carácter de nueva línea (\n) que queda en el buffer después de que el usuario presiona la tecla Enter.
Razón: Cuando el usuario ingresa un carácter y presiona Enter, el carácter ingresado se almacena en a, pero el carácter de nueva línea (\n) generado por la tecla Enter permanece en el buffer. Si no se elimina, afectará la siguiente lectura con getchar().