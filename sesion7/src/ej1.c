#include "misfunciones.h"


int main( int argc, char *argv[]){
    int i , edad, altura;
    
    FILE * pf = NULL ;

    printf("El programa  es:%s",argv[0]);

    if( argc < 2){

        printf("No encontraron argumentos en lines de comandos:(\n" );
    } else {
        for ( i = 0; i < argc; i++)
        {
           printf("Los arguemntos recojidos en lineas de comandos son : %s\n", argv[i]);

        }
    }

    pf = fopen ("./miPrimerFichero.txt","w+"); // Open a TEXT file
    if( pf != NULL){
        for ( i = 1; i < argc; i++) {
             fprintf(pf, "\nlos argumentos de entrada son:\n");
             fputs(argv[i],pf);
             fprintf(pf,"\n");
        }
    }else {
        printf("Error");
    }
    fclose(pf);

    pf = fopen("./miSegundoArchivo.txt", "w+");
    if (pf != NULL) {
        printf("Edad y altura del chaval\n");
        scanf("%d %d", &edad, &altura);

        fprintf(pf, "Los datos introducidos han sido: %d %d\n", edad, altura);

        // Reposiciono el cursor al inicio del archivo para leer
        fseek(pf, 0, SEEK_SET);//Importantisimo

        printf("\nLeyendo del archivo...\n");
        char buffer[50];
        while (fgets(buffer, 50, pf) != NULL) {
            printf("%s", buffer);
        }

        fclose(pf);
    } else {
        printf("Error");
    }
    return 0;
}
