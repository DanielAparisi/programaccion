/*
a) En una variable de tipo double guarda el resultado de
multiplicar 0.3 por 3, y luego sumarle 0.1.
b) Compara esa variable con 1 y muestra por pantalla si son
Iguales o Diferentes.
c) Añade un comentario en el código que explique por qué
ambos números son diferentes.
d) Muestra por pantalla la variable con 100 decimales.
e) Compara la variable con 1 de manera "correcta" y muestra por
pantalla si son Iguales o Diferentes.
*/

#include <stdio.h>
#include <string.h>

int main(){

    float resultado;

    resultado = (0.3 * 3) + 0.1;

    if( resultado == 1) {
        printf("Son iguales\n");
    } else {
        printf("diferentes\n");
    }    

    //no son ighuales ya qeu uno es tipo float y el otro es int ; es decir resultado es 1.000000 =/= 1

    printf("la variable con 100 decimales es:  %.100f\n", resultado);

    resultado = (int)resultado;

    if( resultado == 1) {
        printf("Son iguales\n");
    } else {
        printf("diferentes\n");
    }    

    return 0;
}