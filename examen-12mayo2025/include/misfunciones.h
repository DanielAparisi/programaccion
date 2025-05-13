#include <stdio.h>
#include <stdlib.h>
#include <string>

#ifndef EXAMEN
#define EXAMEN

typedef struct {

    char nombreCompleto [50];
    int matricula;
    CursoActual InfoCursoActual;

} Registro;


typedef struct{

    char nombreDelCurso[40];
    char codigoCurso[40];
    int creditos;

} CursoActual;


#endif 