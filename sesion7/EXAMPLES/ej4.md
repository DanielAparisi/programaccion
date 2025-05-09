// FUNCIONES FPUTC Y FGETC
// Programa para leer una frase letra a letra desde teclado y grabarla en un fichero de texto

#include <stdio.h>
int main()
{
  FILE *pf;
  char car;

  printf("Introduce una frase a grabar, terminando con ENTER:\n");
  pf=fopen("Texto.txt", "w+"); 		//abrimos el fichero en modo grabación
  if (pf==NULL)
  { printf("ERROR al abrir el fichero Texto"); exit(1); }

  car=getchar();    			//leer primer caracter del teclado
  while (car!='\n' && !ferror(pf))     	//mientras no sea la tecla ENTER (\n)
  { fputc(car, pf); car=getchar(); }   	//grabar caracter en fichero y leer siguiente del teclado

  if (ferror(pf))  printf("ERROR al grabar en el fichero");

  rewind(pf);     			//mueve el apuntador de L/E al principio del fichero y desactiva ferror
  printf("\nEl texto grabado es:\n");

  car = fgetc(pf);   			//leer la primera letra desde el fichero
  while (!feof(pf) && !ferror(pf))           //mientras no se lea el final del fichero y no haya error
  {  printf("%c",car); car = fgetc(pf);  }   //imprimir letra en pantalla y leer siguiente del fichero

  if (ferror(pf)) printf("ERROR al leer el fichero");
  fclose(pf);
}
