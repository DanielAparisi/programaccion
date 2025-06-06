#include "misfunciones.h"



void LeeAlumnos( Alumno *talumno, int numElements ){
    int i;
    
    for ( i = 0; i < numElements; i++) {
        while(getchar() != '\n'); // Limpiar el buffer de entrada
        printf("Introduce tu nombre completo: \n");
        fgets(talumno[i].nombreCompleto, sizeof(talumno[i].nombreCompleto), stdin);
        talumno[i].nombreCompleto[strcspn(talumno[i].nombreCompleto, "\n")] = '\0'; // Eliminar el salto de línea
 
        printf("Introduce la matricula: \n");
        scanf("%d", &talumno[i].matricula);
        while(getchar() != '\n'); // Limpiar el buffer de entrada
        
        printf("Introduce el curso actual en el que te encuentras estudiando\n");
        fgets(talumno[i].InfoCursoActual.nombreDelCurso, sizeof(talumno[i].InfoCursoActual.nombreDelCurso), stdin);
        talumno[i].InfoCursoActual.nombreDelCurso[strcspn(talumno[i].InfoCursoActual.nombreDelCurso, "\n")] = '\0'; // Eliminar el salto de línea

        printf("Introduce el codigo de tu curso actual\n");
        scanf("%d", &talumno[i].InfoCursoActual.codigoCurso);
        while(getchar() != '\n'); // Limpiar el buffer de entrada
   
        printf("Introduce los creditos totales que ofrece ese curso\n");
        scanf("%d",  &talumno[i].InfoCursoActual.creditos);
        while(getchar() != '\n'); // Limpiar el buffer de entrada
       
    }     
}

void MuestraAlumnos(FILE * fp,Alumno *talumno, int numAlumnos) {

    int i;
    for ( i = 0; i < numAlumnos; i++) {
       for (i = 0; i < numAlumnos; i++) {
            printf("\tNombre: %s\n \tMatricula: %d\n  \tCurso Actual: %s\n \tNumero de creditos : %d\n \tCodigo del curso : %d\n", 
                talumno[i].nombreCompleto, 
                talumno[i].matricula, 
                talumno[i].InfoCursoActual.nombreDelCurso, 
                talumno[i].InfoCursoActual.creditos, 
                talumno[i].InfoCursoActual.codigoCurso);
        }
    }
    
}
