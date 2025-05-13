#include "misfunciones.h"

int main(){
    int i;
    Alumno *talumno;
    int nAlumnos;

    do {
        printf("Introduxca el numero de alumnos : \n");
        scanf("%d",&nAlumnos);
    } while( nAlumnos >= 0);

    Alumno *talumno = (Alumno * )malloc(nAlumnos * sizeof(Alumno));

    if (talumno == NULL) {
        printf("ERROR, no fue posible conseguir memoria dinamica");
        exit(1);
    }
    getchar();//Nos aseguramos de limpiar el buffer.
    //Leemos los alumnos y los almacenamos por teclado.

    nAlumnos = LeeAlumnos(talumno, nAlumnos);
 
	// Visualizacion del array dinamico
	MuestraAlumnos(&talumno, nAlumnos);

    //Declaramos el Array Dinamico.
   for ( i = 0; i < nAlumnos; i++){
    MuestraAlumnos(&talumno[i], nAlumnos);

    free(talumno);
   }
   
    return 0;
}