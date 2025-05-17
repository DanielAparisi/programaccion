#include "misfunciones.h"

int main(){
    FILE * file;
    int i;
    Alumno *talumno;
    int nAlumnos;

    file = fopen("Registro.txt","a+");

    do {
        printf("Introduxca el numero de alumnos : \n");
        scanf("%d",&nAlumnos);
    } while( nAlumnos <= 0);

    talumno = (Alumno * )malloc(nAlumnos * sizeof(Alumno));

    if (talumno == NULL) {
        printf("ERROR, no fue posible conseguir memoria dinamica");
        exit(1);
    }

    getchar();//Nos aseguramos de limpiar el buffer.
    //Leemos los alumnos y los almacenamos por teclado.

    LeeAlumnos(talumno, nAlumnos);
 
	// Visualizacion del array dinamico
	MuestraAlumnos(file,talumno, nAlumnos);

    if( file != NULL){
        printf("ERROR, no se puedo abrir el fichero correctamente");
    }
    while (!ferror(file) && !feof(file)) {
        
    }
    
    return 0;
}