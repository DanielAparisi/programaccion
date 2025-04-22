//FUNCIONES:

#include "misfunciones.h"
void calcula_maximo_y_minimo(float array[], int tam, float *max, float *min) {
    		
    *max = *min = array[0];		//bucle for desde el elemento segundo del array
    for( int i = 1; i < tam; i++ ){
        if( array[i] > *max){
            *max = array[i];		//guardar en maximo el elemento actual
        }
        if(array[i] < *min)		//si el elemento actual es menor que el minimo
        {
            *min = array[i];	//guardar en minimo el elemento actual
        }
    }
} //FUNCIONA BIEN

void calcula_media_y_varianza( float *array,int tam, float *media, float *varianza){
    float suma = 0.0;
    int i;

    for( i = 0; i < tam; i++) {
        suma += array[i];  
    }
    *media = suma/tam; 

    suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += powf(array[i] - *media, 2); //powf es una libreria de math.h
    }
    *varianza = suma/tam;
}
