#include "misfunciones.h"

int main(int argc, char *argv[]) {
    int i;
   
    printf("El programa es :%s\n", argv[0]);

    if ( argc = 2){

        printf("\nHay %d Argumentos \n", argc - 1);

        for( i = 1; i < argc  ; i++){

            printf ("\nlos argumentos son: %s\n", argv[i]);
            
        } 
        int n = atoi(argv[1]);
        unsigned long  result = factorial(n);
        printf("El factorial del primer argumento es %lu", result);
        

    } else if(argc != 2) {

      exit(0);

    }   
    return 0;
}
