#include "misfunciones.h"


int main( int argc, char *argv[]){

    int i;
    printf("El programa es:%s",argv[0]);
    printf("El programa tiene %d",argc -1);

    if( argc < 2){

        printf("No encontraron argumentos en lines de comandos:(\n" );
    } else {
        for ( i = 0; i < argc; i++)
        {
           printf("Los arguemntos recojidos en lineas de comandos son : %s\n", argv[i]);

        }
    }

    
    return 0;
}
