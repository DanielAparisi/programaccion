#include <stdio.h>

#define MAX 5 // Definición de MAX que faltaba

int main() {
    int i, num_veces;
    int array[7] = {1, 2, 3, 4, 5, 6, 0}; // Array completo inicializado

    for (i = 0; i < MAX; i++) {
        printf("Copiar me impide aprender\n");
    }

    printf("Elija un numero: ");
    scanf("%d", &num_veces);
    printf("El numero es: %d\n", num_veces);

    for (i = 0; i < num_veces; i++) {
        printf("Copiar me impide aprender\n");
    }

    printf("El segundo, cuarto y sexto elemento del array son: %d, %d, %d\n", array[1], array[3], array[5]);

    for(i = 0; i < 7; i++) {
        printf("%d ", array[i]);       
    }
    printf("\n"); // Nueva línea

    i = 0; // Reiniciar i para el while
    while (i < 7) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return 0; 
}
