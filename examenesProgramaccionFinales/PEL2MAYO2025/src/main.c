#include "misfunciones.h"


int main(int argc, char *argv[]){
    FILE * file;
    registro *p;
    int n;

    file = fopen("datos1.txt","w");
  for (int i = 1; i < argc; i++) {
        fprintf(file, "%s\n", argv[i]);
    }

    fclose(file);

    p =(registro *)malloc(n * sizeof(registro));


    return  0;
}