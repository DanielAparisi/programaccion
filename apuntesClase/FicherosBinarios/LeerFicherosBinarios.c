#include <stdio.h>

typedef struct  {
    char nombre [50];
    char apellido [50];
    char sexo ;
    float tiempo ;
} atleta_t ;


void main () {
    atleta_t atleta ;
    FILE * pFichero = NULL ;
    pFichero = fopen (" miFicheroBinario . dat "," rb ") ;

    if ( pFichero != NULL ){

        printf (" Leemos de uno en uno y mostramos : \n ");
        fread (& atleta , sizeof ( atleta_t ) ,1 , pFichero ); // Leemos por si el fichero esta vacio
        while (! feof ( pFichero )) {
            printf ("\ tTiempo de % s %s : %.2 fs \ n", atleta . nombre , atleta . apellido , atleta . tiempo ) ;
            fread (& atleta , sizeof ( atleta_t ) ,1 , pFichero );
        }
        fclose ( pFichero );

    } else {
        printf (" Error al abrir el fichero . Existe ?\ n ");
    }
}