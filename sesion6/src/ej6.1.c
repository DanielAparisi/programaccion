#include "misfunciones.h"

int main(int argc, char *argv[]) {
    int i;
    int longitudTotal = 0; //con esta variable sumamos todos los cracteres de todos los argumentos 

    printf("El programa es :%s\n", argv[0]);

    if ( argc < 2){

        printf("\nno se encontraron argumentos en linea de comandos del programa %s\n", argv[i]);

    } else if(argc >= 2) {

        printf("\nHay %d Argumentos \n", argc - 1);

        for( i = 1; i < argc  ; i++){

            printf ("\nlos argumentos son: %s\n", argv[i]);
            
        } 

        uneArgumentos(argc, &*argv);

        printf("El doble de su valor es :");
        ImprimeDoble(argc, &*argv);
        
    }   



    return 0;
}
