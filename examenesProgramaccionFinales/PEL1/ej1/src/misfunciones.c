
#include "misfunciones.h"

tRegistroEstudiantes  *leerDatos(void){
    tRegistroEstudiantes *estudiante;

    estudiante = (tRegistroEstudiantes *)malloc(sizeof(tRegistroEstudiantes));

    printf("nombre :\t");
    fgets(estudiante->nombre, 100, stdin);
    printf("\n curso:\t");
    fgets(estudiante->curso.nombreCurso,100 ,stdin);
    printf("\n Id curso:\t");
    scanf("%.2lg",estudiante->curso.IdCurso);
    printf("\n Matricula:\t");
    scanf("%.2lg",estudiante->IdMatricula);
    printf("\n numero de creditos:\t");
    scanf("%d",estudiante->curso.creditos);
    
}