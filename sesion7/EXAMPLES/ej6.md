// FUNCIONES FPUTS Y FGETS

// Programa para leer desde teclado sucesivas cadenas de caracteres y grabarlas en un fichero
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200

int main()
{ FILE *pf;
  char cad[N], nomfi[13];

  printf("Introduce nombre del fichero a grabar: ");
  fgets(nomfi, 13, stdin);  //leer hasta 12 caracteres desde el teclado (se añade el \0 final)

  if (nomfi[strlen(nomfi)-1]=='\n')   	//eliminar posible caracter final \n si existe
    nomfi[strlen(nomfi)-1] = '\0';	//un nombre de fichero nunca debe contener un \n
  else
    while (getchar()!='\n');           	//borrar posibles caracteres de más escritos en el buffer del teclado
					//equivalente al fflush(stdin) de Windows

  if ((pf=fopen(nomfi, "w+"))==NULL)     //abrir fichero en modo escritura
  { printf("ERROR al abrir el fichero %s\n", nomfi); exit(1); }

  printf("Introduzca textos terminados con ENTER; pulse CTRL+D para terminar\n\n");
  while (fgets(cad, N, stdin)!=NULL)   	//leer desde el teclado, máximo N-1 caracteres, cad contendrá el \n final
  { fputs(cad, pf); }                  	//grabar en el fichero; terminado cuando pulsamos CTRL+D

  if (ferror(pf)) printf("Error al grabar en el fichero");
  rewind(pf);  				//apuntador de L/E al principio del fichero y desactivación de ferror

  printf("\nLos textos leídos son:\n\n");
  while (fgets(cad, N, pf)!=NULL)      	//leer desde el fichero hasta el final de fichero
    printf("%s", cad);			//imprimimos las cadenas en pantalla
  if (ferror(pf)) printf("ERROR al leer en el fichero");

  fclose(pf);
}

