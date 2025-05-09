#include "misfunciones.h"


int main( int argc, char *argv[]){
    int i;
    char buffer[50];
    FILE * fp;
    
    fp = fopen("./testo.txt","w+");

    if( fp != NULL){
        mostrarArgumentosPorLineasDeComandos(fp, argc, *&argv);
    } else {
        printf("Error, no se encontro el Archivo");
    }

    return 0;
}
