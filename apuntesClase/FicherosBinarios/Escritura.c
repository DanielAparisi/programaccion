#include <stdio.h>

typedef struct {
    char nombre [50];
    char apellido [50];
    char sexo ;
    float tiempo ;
} atleta_t ;

void main () {

    atleta_t arrayAtletas [] = {
        {" Usain "," Bolt ",'h' ,9.58} ,{" Tyson "," Gay ",'h' ,9.69} ,
        {" Yohan "," Blake ",'h' ,9.69} ,{" Asafa "," Powell ",'h' ,9.72} ,
        {" Florence "," Griffith Joyner ",'m' ,10.49} , {" Carmelita "," Jeter ",'m' ,10.64} ,
        {" Marion "," Jones ",'m' ,10.65} , {" Shelly - Ann "," Fraser - Pryce ",'m' ,10.70}
    };

    size_t tamArray = sizeof ( arrayAtletas )/ sizeof ( atleta_t ) ; // Calcular numero elementos array
    size_t elementosEscritos =0;

    FILE * pFichero = NULL ; // Crear el descriptor de fichero
    pFichero = fopen (" miFicheroBinario . dat "," wb ") ; 

    if ( pFichero != NULL ) {
        elementosEscritos = fwrite ( arrayAtletas , sizeof ( atleta_t ) , tamArray , pFichero );
    if( elementosEscritos != tamArray )  {
        printf (" Error al escribir \n") ;
    }
        fclose ( pFichero );
    } else {
    printf (" Error al crear el fichero \n") ;
    }
}
