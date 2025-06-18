
#include "misfunciones.h"

tRegistroEstudiantes  *leerDatos(void){
    tRegistroEstudiantes *estudiante;

    estudiante = (tRegistroEstudiantes *)malloc(sizeof(tRegistroEstudiantes));

    printf("nombre del estudinate :\t");
    fgets(estudiante->nombre, sizeof(estudiante->nombre) , stdin);
    printf("\n curso del curso:\t");
    fgets(estudiante->curso.nombreCurso,sizeof(estudiante->curso.nombreCurso) ,stdin);
    printf("\n Id curso:\t");
    scanf("%d",&estudiante->curso.IdCurso);
    printf("\n Matricula del curso:\t");
    scanf("%d",&estudiante->IdMatricula);
    printf("\n numero de creditos del curso :\t");
    scanf("%d",&estudiante->curso.creditos);
    
}

tRegistroEstudiantes mostrarDatos(){
    
}
