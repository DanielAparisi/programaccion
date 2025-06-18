#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PEL2
#define PEL2

typedef struct {
    char nombreCurso[50];
    char idCurso[10];
    int creditos;

} registroCurso;

typedef struct  {
    char nombre[50];
    int IdMatricula;
    registroCurso registroC;

}registro;

void leer();




#endif