#include <stdio.h>
#define MAX 14

int main(){
    int array[] = {2,4,6,8,10,1,3,5,7,9,11,13,25,22};
    int i,mayor,menor, contador = 0,array_divisibles , indice = 0 ;
    printf("Muestra por pantalla los elementos de valor par:\n");

    for(i = 0; i<MAX; i++){ //el valor ------> array[i] || posiccion ------> i
        if(i % 2 == 0 ){
            printf("%d, %d\n", array[i], i);
        }

    }

    printf("Muestra por pantalla los elementos que ocupan una posicion par:\n");
    for ( i = 0; i < MAX; i++)
    {
        if( array[i] % 2){
            printf("%d, %d\n", array[i], i);
        }
    }

    printf("Muestra por pantalla el elemento menor:\n");
    array[1] = menor;
    for (i = 1; i < MAX; i++)
    {
        if( array[i] < menor){
            menor = array[i];
            printf("%d", menor);
        }
    }
   

    array[0] = mayor;
    for (i = 0; i < MAX; i++)
    {
        if( array[i] > mayor){
            mayor = array[i];
            printf("%d", mayor);
        }
    }
   
    printf("Copiar los divisibles por 3 en otro array del tamaño apropiado.\n");
    for(i = 0; i<MAX ; i++){
        if( array[i] %3 == 0){
            contador++;
        }
    }

   //array_divisibles[contador];

   for(int i = 0; i < MAX; i++) {
       if(array[i] % 3 == 0) {
           //array_divisibles[indice] = array[i];
           indice++;
       }
   }
   
   
} /////////------------> OBSERVACIONES IR DECLARANDO VARIABLES A ,EDIDA QUEVAMSO CREANDO EL DOCUMENTO NO AL PRINICPIO