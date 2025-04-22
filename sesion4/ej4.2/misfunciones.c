#include <stdio.h>
#include "misfunciones.h"


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

    return *max = array[0];

}
