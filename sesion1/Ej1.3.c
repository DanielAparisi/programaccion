
//Ej1.3.c

#include <stdio.h> 
#define MAX 13
int main() {    
    int array_de_enteros[14] = {2,4,6,8,10,1,3,5,7,9,11,13,25,22};
    
    //a) Muestra por pantalla los elementos pares.
        int i;
        for( i = 0; i <MAX ; i++ ){
            if( array_de_enteros[i] % 2 == 0 ){
                printf("\nlos elementos pares del array son : %d\n", array_de_enteros[i]);
            }
        }
    //b) Muestra por pantalla los elementos que ocupan una posicion par.
        for( i = 0; i <MAX ; i++ ){
            if( i %2 == 0 ){
                printf("\nlos elementos que ocupan una posicion par son : %d\n", array_de_enteros[i]);
            }
        }
   
    //c) Muestra por pantalla el elemento menor del array.
        for( i = 0; i <MAX ; i++ ){
            if( array_de_enteros[0] > array_de_enteros[i]){
                printf("\nEl elemento menor del array : %d\n", array_de_enteros[i]);
            }
        }
   
    //d) Muestra por pantalla el elemento mayor que ocupa una posicion par.
    int ElMayor = array_de_enteros[0]; //Inicializamos mayor con array_de_enteros[0] (valor 2), ya que es el primer elemento en una posición par.

    for( i = 0; i <MAX ; i++ ){
        if( i % 2 == 0 ){
            if( array_de_enteros[i]> ElMayor){

                ElMayor = array_de_enteros[i]; //Comparamos array_de_enteros[i] con mayor. Si el elemento actual es mayor, actualizamos mayor.
               
            }
        }
    }
    printf("\nEl el elemento mayor que ocupa una posicion par. es: %d\n", ElMayor);

    //e) Copiar los divisibles por 3 en otro array del tamaño apropiado.
    int IsdivisiblePor3Array[14] = {2,4,6,8,10,1,3,5,7,9,11,13,25,22};

    for ( i = 0; i < MAX; i++) {

        if( IsdivisiblePor3Array[i] % 3 == 0){

            printf("\nLos divisbles por 3 son : %d\n", IsdivisiblePor3Array[i]);

        }
      
    }

    return 0;
   
}



