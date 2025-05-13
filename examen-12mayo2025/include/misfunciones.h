#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef EXAMEN
#define EXAMEN

typedef struct{

    char nombreDelCurso[40];
    char codigoCurso[40];
    int creditos;

} CursoActual;


typedef struct {

    char nombreCompleto [50];
    int matricula;
    CursoActual InfoCursoActual;

} Alumno;

void LeeRegistro( Alumno *alumno, int numOfAlumnos );
void MuestraAlumnos(Alumno *talumno, int numAlumnos);

#endif 