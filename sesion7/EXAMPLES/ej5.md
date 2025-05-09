// FUNCIONES FPUTC Y FGETC
// Programa para copiar un fichero en otro byte a byte, con argumentos en línea de ordenes.
// Equivalente al comando "copy" del sistema operativo Windows.
// Fichero fuente de nombre CCOPY.c para generar un ejecutable de nombre CCOPY.exe.

/* El programa acepta dos argumentos desde la linea de órdenes: el nombre del fichero origen
   y el nombre del fichero de destino (con o sin ruta de directorios). El programa confirma 
   que el fichero origen existe. También chequea si el fichero de destino ya existe y en tal 
   caso pide confirmación de sobreescritura. El programa muestra finalmente el número 
   de bytes copiados. Forma de uso:  CCOPY nombreFicheroOrigen nombreFicheroDestino
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *pf1, *pf2;
  char resp, byte;
  long count=0;
  if (argc!=3)  			//mal uso del comando
    { printf("ERROR. Use este formato: CCOPY FicheroOrigen FicheroDestino\n"); exit(1); }

  pf1=fopen(argv[1],"rb");
  if (pf1==NULL)  			//fichero origen no existe
    { printf("ERROR: Fichero %s no existe\n",argv[1]); exit(1); }

  if ((pf2=fopen(argv[2],"rb"))!=NULL)  //fichero destino ya existe
  { 
    printf("ATENCION: Fichero %s existe. ¿Sobreescribir? (S/N): ",argv[2]);
    do
       resp=toupper(getchar()); 
    while (resp!='S' && resp!='N');
    fclose (pf2);			//cerramos pf2 que estaba abierto para lectura
    if (resp!='S') { printf("Ningún fichero copiado\n"); exit(0); }
  }
  
  if ((pf2=fopen(argv[2],"wb"))==NULL)  //abrir fichero destino en modo escritura
    { printf("ERROR al abrir fichero %s\n",argv[2]); exit(1); }

  byte = fgetc(pf1);			//leemos el primer byte de origen
  while (!feof(pf1) && !ferror(pf1) && !ferror(pf2)) 	//mientras no lleguemos al final del fichero y no haya errores
  { fputc(byte,pf2);			//grabamos el byte en fichero destino
    count++;				//incrementamos el contador de bytes copiados
    byte = fgetc(pf1);			//leemos siguiente byte del fichero origen
  } 

  if (ferror(pf1)!=0) 			//si hubo error en el fichero origen
     printf("ERROR al leer fichero %s\n", argv[1]);
  else if (ferror(pf2)!=0)		//si hubo error en el fichero destino
     printf("ERROR al grabar fichero %s\n", argv[2]);
  else					
     printf ("%ld bytes copiados\n", count);

  fclose(pf1); fclose(pf2);		//cerramos ambos ficheros
}
