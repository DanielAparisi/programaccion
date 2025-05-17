#include <stdio.h>


typedef struct {
    char nombre [50];
    char apellido [50];
    char sexo ;
    float tiempo ;
} atleta_t ;

void main ()

    size_t tamArray = sizeof ( arrayAtletas ) / sizeof ( atleta_t ) ; // Calcular numero elementos array
    size_t elementosEscritos =0;
    FILE * pFichero = NULL ; // Crear el descriptor de fichero


    pFichero = fopen ( " miFicheroBinario . dat " ," wb " ) ; 

    if ( pFichero != NULL ) { // Escribir el array de atletas en el fichero
    elementosEscritos = fwrite ( arrayAtletas , sizeof ( atleta_t ) , tamArray , pFichero ) ;
    if ( elementosEscritos != tamArray )  {
        printf ( " Error al escribir \ n " ) ;
     } else {} 
        fclose ( pFichero ) ;
    } else {
    printf ( " Error al crear el fichero \ n " ) ;
    }
}
