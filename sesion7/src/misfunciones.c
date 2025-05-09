#include "misfunciones.h"

void RecogerDatosFichero ( FILE * pf, int altura, int edad ){

    if(pf != NULL){
        fprintf(pf,"Inroduxca los datos numericos:\n");
        fscanf(pf," %d,%d", &edad ,&altura);
        fprintf(pf,"Los datos recogido por el teclado han sido : %d , %d ",edad, altura );

    }
}