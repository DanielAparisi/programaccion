#include <stdio.h>
#include "misfunciones.h"
int main(void){

    setvbuf(stdout, NULL, _IONBF,0);
    setlocale(0, ""); // por defecto: configuración regional

    double array[10] = {8.2, 0, 10.5, 20, 0, 15.6, 18.1, 7, 9.8, 12};
    int tam = sizeof(array)/sizeof(double);
    float maximo;
    
    printf("El array inicial es:\n");
    muestraArray(array,tam);

    maximo = MaximoValor(array,&maximo,tam);
    printf("El maximo del array es: %.2f\n", maximo);

    maximo = anulaMaximo(array, &maximo,tam);
    printf("el maximo anulad es: %.2f\n", maximo);

    maximo = intercambiaMaximo(array,&maximo,tam);
    printf("el valor maximo de un array intercambiado por el valor del primer elemento del array es:%.2f \n",maximo);

    return 0;
}
