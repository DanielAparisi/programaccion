#include <stdio.h>

int main(){
    int array[] = {2,4,6,8,10,1,3,5,7,9,11,13,25,22};
    int i,mayor,menor, isDivisiblepor3,array_divisibles,indice;
    printf("Muestra por pantalla los elementos de valor par:\n");

    for(i = 0; i<13; i++){ //el valor ------> array[i] || posiccion ------> i
        if(i % 2 == 0 ){
            printf("%d, %d\n", array[i], i);
        }

    }

    printf("Muestra por pantalla los elementos que ocupan una posicion par:\n");
    for ( i = 0; i < 13; i++)
    {
        if( array[i] % 2){
            printf("%d, %d\n", array[i], i);
        }
    }

    printf("Muestra por pantalla el elemento menor:\n");
    array[1] = menor;
    for (i = 1; i < 13; i++)
    {
        if( array[i] < menor){
            menor = array[i];
            printf("%d", menor);
        }
    }
   

    array[0] = mayor;
    for (i = 0; i < 13; i++)
    {
        if( array[i] > mayor){
            mayor = array[i];
            printf("%d", mayor);
        }
    }
   
    printf("Copiar los divisibles por 3 en otro array del tamaño apropiado.\n");
    isDivisiblepor3 = 0;
    for(i = 0; i < 0; i++){
        if( i % 3 == 0 ){
            i++;
        }
    } 
    array_divisibles = array[i];
    indice = 0;

    for(i = 0; i < 13; i++){
        printf("%d", array_divisibles[i]);
    }
   
} 