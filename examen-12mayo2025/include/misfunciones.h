#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef EXAMEN
#define EXAMEN

typedef struct{

    char nombreDelCurso[70];//[noombre y primer apellido]
    int codigoCurso; //[0,25]
    int creditos; //[0,60]

} CursoActual;


typedef struct {

    char nombreCompleto [50]; //nombre y primerApellido
    int matricula;//3 numeros MAX : ej: 387
    CursoActual InfoCursoActual;
    

} Alumno;

void LeeAlumnos( Alumno *alumno, int numOfAlumnos );
void MuestraAlumnos(FILE * file ,Alumno *talumno, int numAlumnos);

#endif 