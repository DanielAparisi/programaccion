#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#ifndef SESSION
#define SESSION
#define MAX_RAND 15000000

typedef struct {

    int IdCurso;
    char nombreCurso[40];
    int creditos;

} tRegistroCurso;

typedef struct {
    
    int IdMatricula;
    char nombre[50];
    tRegistroCurso curso;

} tRegistroEstudiantes;

tRegistroEstudiantes  *leerDatos(void);

#endif