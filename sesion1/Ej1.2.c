
//Ej1.2.c
#include <stdio.h>
#define MAX 1000

int main(){
    //a) Crea un programa que muestre por pantalla la frase "Copiar me impide aprender" 10000 veces.
    int i;
    for(i = 0; i<MAX; i++){
        printf("\nCopiar me impide aprender");
    }
    
    //b) Lee del teclado un numero entero y muestra la frase anterior tan solo ese numero de veces.
    int entero;
    printf("\nintroduzca un numero entero : ");
    scanf("%d", &entero);

    for(i = 0; i<entero; i++){
        printf("\nCopiar me impide aprender");
    }
    
    //c) Crea un array denominado array de 6 elementos e incicializalo con 1,2,3,4,5,6.
    //d) Muestra por pantalla el segundo, cuarto y sexto elemento del array (posiciones 1, 3 y 5).
    //e) Recorre el array con un for e imprime todos los valores.
    //f) Haz lo mismo usando un while o un do while.

    int array[6] = {1,2,3,4,5,6};

    printf("\nel segundo, cuarto y sexto elemento del array son :%d, %d, %d", array[1],array[3],array[5]);

    for(i = 0; i < 6; i++){
        printf("\n%d", array[i]);
    }
    
    while( i < 6 ){
        printf("\n%d", array[i]);
        i++;
    }

    //g) Añade un comentario en el codigo que explique cual de las dos opciones (e o f) te ha resultado mas facil y por que.
    //Prefiero la opcion (e) personalmente por la legibilidad del codigo.

    return 0;
}
