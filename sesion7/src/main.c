#include "misfunciones.h"


int main( int argc, char *argv[]){
    int i;
    
    FILE * pf = NULL ;

    printf("El programa  es:%s",argv[0]);

    if( argc < 2){

        printf("No encontraron argumentos en lines de comandos:(\n" );
    } else {
        for ( i = 0; i < argc; i++)
        {
           printf("Los arguemntos recojidos en lineas de comandos son :%s\n", argv[i]);

        }
    }

    pf = fopen ("./miPrimerFichero.txt","w+"); // Open a TEXT file
    if ( pf == NULL ){
        printf ("Error opening %s.txt. Does it exist?\n", argv[argc - 1]);
        exit(1);
    }

    fclose(pf);

    return 0;
}