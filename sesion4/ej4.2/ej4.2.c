#include <stdio.h>
#include <string.h>

void muestraArray( double array[], int tam);    
float anulaMaximo(double array[], float *max, int tam);
float intercambiaMaximo(double array[], float *max, int tam);
float MaximoValor(double array[], float *max, int tam);

int main(void){

    double array[10] = {8.2, 0, 10.5, 20, 0, 15.6, 18.1, 7, 9.8, 12};
    int tam = sizeof(array)/sizeof(double);
    float maximo;
    
    printf("El array inicial es:\n");
    muestraArray(array,tam);

    maximo = 0;

    maximo = MaximoValor(array,&maximo,tam);
    printf("El maximo del array es:%.2f\n");

    maximo = 0;
  
    maximo = anulaMaximo(array, &maximo,tam);
    printf("el maximo anulado%.2f\n", maximo);

    maximo = 0;
    
    maximo = intercambiaMaximo(array, &maximo,tam );
    printf("el valor máximo de un array intercambiado por el valor del primer elemento del array\n",maximo);

    return 0;
}

void muestraArray( double array[], int tam){
    int i;

    for( i = 0; i <tam; i++){
        printf("%.2f\n", array[i]);
    }
}
float MaximoValor(double array[], float *max, int tam){
    
    int i;
    *max = array[0];
    for( i= 0 ; i < tam; i++){

        if( array[i] > *max){
            *max = array[i];
        }
        
    }
    
    return *max;
}
float anulaMaximo(double array[], float *max, int tam){

    int i;
    *max = array[0];
    for( i= 0 ; i < tam; i++){

        if( array[i] > *max){
            *max = array[i];
        }
    }
  return  *max = 0;
}
float intercambiaMaximo(double array[], float *max, int tam){
    int i;
    *max = array[0];
    for( i= 0 ; i < tam; i++){

        if( array[i] > *max){
            *max = array[i];
        }
    }
   return  *max = array[0];
}