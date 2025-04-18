#include <stdio.h>
#include <string.h>

#define MAX 12
float encuentra_minimo(float array[], int numOfEl ) ;
float calcula_media(float array[],int numOfEl );
float encuentra_maximo (float array[],int numOfEl);
void mostrarTemperaturas(float array[], int numOfEl);

 
int main() {

    float temperaturas [MAX] = {112.32,564.33,786.42,982.765,821.111,230.960,456.720,347.212,753.999,503.659,432.005,348.654};
    float minimo,maximo,media;
    int i;

  
    printf("\tEl array es:\n");
    mostrarTemperaturas(temperaturas, 12);
    
    minimo = encuentra_minimo(temperaturas,MAX);
    printf("\tla menor  temperaturas es :%.2f\n", minimo);

    maximo = encuentra_maximo (temperaturas, MAX);
    printf("\tla mayor  temperaturas es :%.2f\n", maximo);

    media = calcula_media(temperaturas,MAX);
    printf("\tla media del array de temperatura es :%.2f\n", media);

    return 0;
}


float encuentra_minimo(float array[], int numOfEl ) {
    float minimo = array[1];     //variable local, se carga con el elemento primero del array
    for(int i = 0; i <numOfEl ; i++){
        if( array[i] < minimo){
            minimo = array[i];
        }
    }       //retorna el valor del minimo

    return minimo;
}

float calcula_media(float array[],int numOfEl ){   
    int suma = 0, i;
    float media= 0;

    for(i = 0; i < numOfEl ; i++){
        suma += array[i];
    }

    media = suma/numOfEl;

    return media;
}

float encuentra_maximo (float array[],int numOfEl){

    float ElMayor = array[0]; 
    int i;
    
    //Inicializamos mayor con array_de_enteros[0] (valor 2), ya que es el primer elemento en una posición par.
    for( i = 0; i <numOfEl ; i++ ){    
        if( array[i]> ElMayor){
                ElMayor = array[i];       
        }
    }
    return ElMayor;
}

void mostrarTemperaturas( float array[], int numOfEl){ //no se pretende que devuelva nada
    int i;

    for(i = 0; i< numOfEl; i++){
        printf("\t%.2f\n", array[i]);
    }
    
}
