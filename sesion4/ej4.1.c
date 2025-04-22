#include <stdio.h>
#include <string.h>

float CalculaMaximoYminimo(float *max,float *min, float array[],int numOfElements);

int main(void){

    float array[10] = {112.32,564.33,786.42,982.765,821.111,230.960,456.720,347.212,753.999,};
    float maximo,minimo,media,varianza;
    int nElements = strlen(array);

    printf("El maximo y minimo elemento del arrray es\n");
    CalculaMaximoYminimo(&maximo,&minimo,array,nElements);
    printf("maximo:%.2f\tminimo:%.2f\n", maximo,minimo);

    return 0;
}

float CalculaMaximoYminimo(float *max,float *min, float array[], int numOfElements){
    array[0] = *max = *min;

    int i;

    for( i = 0; i < numOfElements; i++){
        if( array[i] > array[0]){
            *max = array[i];
        } else if(array[i] < array[0]){
            *min = array[i];
        }
    }

    return *max,*min;
    
}
float mediaYvarianza(float *media,float *Varianza, float array[]){


}


