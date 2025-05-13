#include "misfunciones.h"

void LeeRegsitro( Alumno *talumno, int numElements ){

    printf("Introduce tu nombre completo: \n");
	gets(&talumno->nombreCompleto);

    printf("Introduce la matricula: \n");
	scanf("%d",&talumno->matricula);

    printf("Introduce el curso actual en el que te encuentras estudiando\n");
    gets(&talumno->InfoCursoActual.nombreDelCurso);


	printf("Introduce el codigo de tu curso actual\n");
	scanf("%d",&talumno->InfoCursoActual.codigoCurso);

    printf("Intoruce los creditos totales que ofrece ese curso\n");
    scanf("%d",&talumno->InfoCursoActual.creditos);

	while(getchar() != '\n') { } // vacio la consola por si habia elementos guardados 

}
void MuestraAlumnos(Alumno *talumno, int numAlumnos) {
	printf("Nombre: %s, Matricula: %d,  Curso Actual: %s, Numero de creditos : %d, Codigo del curso : %d\n", talumno->nombreCompleto, talumno->matricula, talumno->InfoCursoActual.nombreDelCurso, talumno->InfoCursoActual.creditos, talumno->InfoCursoActual.codigoCurso);
}