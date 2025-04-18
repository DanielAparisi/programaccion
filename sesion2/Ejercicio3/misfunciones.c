#include "misfunciones.h"
int encuentra_minimo(int array[], int numOfEl ) {
    int minimo = array[0];     //variable local, se carga con el elemento primero del array
    for(int i = 0; i <numOfEl ; i++){
        if( array[i] < minimo){
            minimo = array[i];
        }
    }       //retorna el valor del minimo

    return minimo;
}

float calcula_media(int array[],int numOfEl ){   
       int suma= 0, i;
       float media= 0;

       for(i = 0; i < numOfEl ; i++){
            suma += array[i];
       }


       media = suma/numOfEl;

    return media;
}