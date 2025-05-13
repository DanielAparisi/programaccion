#include "misfunciones.h"

int main(void) {
	Alumno *alumnos; // array DINAMICO donde cada posicion es un objeto de tipo tficha, es decir, un alumno
	int nalumnos;

	// lectura del numero de alumnos
	do {
		printf("Introduzca el numero de elementos del array dinámico\n\n");
		scanf("%d", &nalumnos);
	} while(nalumnos <= 0); 
	
	// creacion del array dinamico
	Alumno *alumnos = (Alumno *)malloc(nalumnos * sizeof(Alumno));
	if(alumnos == NULL) {
		printf("ERROR: no hay memoria suficiente\n");
		return -1;
	}

	// Inicializacion del array dinamico
	nalumnos = LeeAlumnos(alumnos, nalumnos);
 
	// Visualizacion del array dinamico
	MuestraAlumnos(&alumnos, nalumnos);

	// Liberacion de memoria 
	// free(palumno);
	LiberaMemoria(alumnos, nalumnos);

	return 0;
}
