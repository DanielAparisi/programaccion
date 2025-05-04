#include "misfunciones.h"

void uneArgumentos( int argc,  char *argv[]){
    int i;
    int longitudTotal = 0; //con esta variable sumamos todos los cracteres de todos los argumentos 

    for ( i = 1 ; i < argc; i++) { 

        longitudTotal += strlen(argv[i]);

    }

    char cadenaTotal[longitudTotal + 1];
    strcpy(cadenaTotal,""); //copiamos la cadena total como cadena vacia 
    
    for ( i = 1; i < argc; i++) {
        strcat(cadenaTotal,argv[i]);
    }
    
    printf("los Argumentos  unidos quedan asi %s\n", cadenaTotal);
   
}

void ImprimeDoble( int argc,  char *argv[]){
    int i;

    for( i = 1; i < argc; i++){
        if(  1 <= atoi(argv[i])  ){

            printf("\nSu valor es %d\n", 2*atoi(argv[i]));
            
        } else {

            printf("No es un valor positivo la cadena ");
        }
    }

}

unsigned long factorial( int n){
    int i;

    if( n == 0) {

        return (unsigned long)1;

    } else {

        return n * factorial(n - 1 );
    }
    
}