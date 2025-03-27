#include <stdio.h>
#include <string.h> // Para strlen()

#define MAX_NOMBRE 20 // Define una constante para el tamaño del nombre

int main() {
    char nombre[MAX_NOMBRE];
    int entero = 0, suma_int;
    float decimal = 0.0f, suma_float;

    printf("Hola mundo\n");

    // Lectura del nombre (corregido para leer cadena completa)
    printf("Nombre: ");
    fgets(nombre, MAX_NOMBRE, stdin);
    // Eliminar el salto de línea que fgets incluye
    nombre[strcspn(nombre, "\n")] = '\0';
    printf("El nombre es: %s\n", nombre);
    //Paraa cadenas
    

    // Lectura del entero
    printf("Dame un entero: ");
    scanf("%d", &entero);
    printf("El entero es: %d\n", entero);

    // Lectura del decimal
    printf("Dame un decimal: ");
    scanf("%f", &decimal);
    printf("El decimal es: %.2f\n", decimal);

    // Limpiar el buffer de entrada para futuras lecturas
    while (getchar() != '\n');

    // Operaciones (corregidas)
    suma_int = entero + (int)decimal; // Conversión explícita
    printf("La suma como entero es: %d\n", suma_int);

    suma_float = (float)entero + decimal; // Conversión explícita
    printf("La suma como flotante es: %.2f\n", suma_float);

    return 0; // Buenas prácticas: siempre retornar un valor en main()
}