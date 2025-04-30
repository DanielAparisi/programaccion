#include "misfunciones.h"

int main(int argc, char *argv[]) {
    int i;


    printf("El programa es :%s", argv[0]);
    if ( argc < 2){
        printf("\nno se encontraron argumentos en linea de comandos del programa %s\n", argv[i]);
    } else{
        printf("\nlos argumento son :%s\n", argc - 1);
        for( i = 0; i <argc ; i++){
            printf ("\nlos argumentos son: %d\n", argv[i]);
            printf ("\nlos argumentos de dato entero son: %d\n", atoi(argv[i]));
            printf("\nlos argumentos de dato real son: %.2f\n", atof(argv[i]));
    
        }
       
    }   
}
