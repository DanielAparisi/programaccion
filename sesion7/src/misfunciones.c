#include "misfunciones.h"		//incluimos nuestro fichero de cabecera, que contiene las declaraciones de nuestras funciones

void  creaFichero(char *nombreFich){
   				//declaramos un puntero a FILE pf
   	//llamamos a fopen para abrir el fichero en modo "append" (a)
   			//si se ha producido un error de apertura de fichero
   {  printf("ERROR de apertura del fichero %s\n", nombreFich);
      return;				//salimos de la función
   }
   			//declaramos una cadena de 100 caracteres
   printf("Dame un texto a grabar, seguido de Enter: ");	
   		//leemos por teclado una frase para la cadena (con fgets - stdin)
			//grabamos la cadena en el fichero (fputs)
   			//si hay error de grabación
      printf("ERROR al grabar en el fichero.\n");
   				//cerramos el fichero
}
/*

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//cabecera de la función muestraFichero, recibe una cadena nombreFich con el nombre del fichero
{
   XXXXXXXXX				//declaramos un puntero a FILE pf
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamamos a fopen para abrir el fichero en modo "read" (r)
   XXXXXXXXXXXXXXX			//si se ha producido un error de apertura de fichero
   {  printf("ERROR: el fichero %s no existe.\n", nombreFich);	//informamos por pantalla que el fichero no existe
      XXXXXXX				//salimos de la función
   }
   XXXXXXXXXXXXXX			//declaramos una cadena de 100 caracteres
   printf("El contenido del fichero %s es:\n", nombreFich);
   XXXXXXXXXXXXXXXXXXXXXXX		//leemos la primera frase del fichero en la cadena (fgets)(hasta el \n del fichero)
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//mientras no sea el fin del fichero y no se produzca un error de lectura
   {
      XXXXXXXXXXXXXXXXXXXX		//imprimimos la cadena en pantalla
      XXXXXXXXXXXXXXXXXXXXX		//leemos la siguiente frase del fichero en la cadena (fgets)(hasta el \n)
   }
   XXXXXXXXXXXXXXXXXXX			//si se ha producido un error de lectura
      printf("ERROR al leer el fichero %s.\n", nombreFich);	//imprimimos mensaje de error en pantalla
   XXXXXXXXXX				//cerramos el fichero
}

//SOLUCION CARGANDO TODO EL TEXTO EN MEMORIA:
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//cabecera de la función cambiaLetras
//recibe una cadena nombreFich con el nombre del fichero, y las variables "a" y "b" con las letras a buscar y reemplazar
{
   XXXXXXX				//declaramos el puntero a FILE pf
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamamos a fopen para abrir el fichero en modo "r+"
   XXXXXXXXXXXXXXX			//si se ha producido un error de apertura
   {  printf("ERROR: el fichero %s no existe.\n", nombreFich); XXXXXXXXX  }	//mensaje de error y salimos de la función
   XXXXXXXXXXXXXXXXX			//declaramos una cadena de 100 caracteres para leer una frase
   char cadenaTotal[1000] = "";		//declaramos una cadenaTotal de 1000 caracteres donde concatenaremos todas las frases
					//y la inicializamos a cadena vacía
   XXXXXXXXXXXXXXXXXXXXXXX		//leemos la primera frase del fichero en la cadena (fgets)(lee hasta el \n)
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//mientras no sea el fin del fichero y no se produzca un error de lectura
   {
      XXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//concatenamos la cadena al final de cadenaTotal (strcat)
      XXXXXXXXXXXXXXXXXXXXXX		//leemos la siguiente frase del fichero en la cadena (fgets)(lee hasta el \n)
   }
   XXXXXXXXXXXXXXXXXX			//si se ha producido un error de lectura del fichero
      printf("ERROR al leer el fichero %s.\n", nombreFich);	//imprimimos mensaje de error
   XXXX					//si no
   {  
      XXXXXXXXXXXXXXXXXXXXXXXXXXXX	//bucle for para acceder a cada letra de cadenaTotal
      {
         XXXXXXXXXXXXXXXXXXXX		//si la letra cadenaTotal[i] es igual a la de la variable "a"
            XXXXXXXXXXXXXXXX		//cambiamos esa letra por la variable "b"
      }
      XXXXXXXXXXXXX			//movemos el apuntador de L/E al principio del fichero (rewind)
      XXXXXXXXXXXXXXXXXXXXXX		//grabamos toda la cadenaTotal en el fichero (fputs)
      XXXXXXXXXXXXXXX			//si se ha producido error al grabar
         printf("ERROR al grabar el fichero %s.\n", nombreFich);	//imprimimos mensaje de error
      XXXX				//si no
         printf("El fichero %s ha sido modificado\n", nombreFich);
   }
   XXXXXXXXXX				//cerramos el fichero
}

*/

/*
SOLUCION LEYENDO LETRA A LETRA Y USANDO fseek:
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//cabecera de la función cambiaLetras
//recibe una cadena nombreFich con el nombre del fichero, y las variables "a" y "b" con las letras a buscar
{
   XXXXXX			//declaramos el puntero a FILE pf
   XXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamamos a fopen para abrir el fichero en modo "r+"
   XXXXXXXXXXXXXX			//si se ha producido un error de apertura
   {  printf("ERROR: el fichero %s no existe.\n", nombreFich); return;  }	//mensaje de error y salimos de la función
   XXXXXXXXX			//declaramos variable char para leer una letra del fichero
   XXXXXXXXXXXXXXX		//leemos la primera letra del fichero (fgetc)
   XXXXXXXXXXXXXXXXXXXXXXXXXXX	//mientras no sea el fin del fichero y no se produzca un error de lectura
   {
      XXXXXXXXXXXXXXXXXXX	//si la letra es igual a la de la variable "a"
      {  XXXXXXXXXXXXXXXXXXXXX	//retrocedemos una posición en el fichero (fseek) 
         XXXXXXXXXXXX		//grabamos la variable "b" (fputc)
      }
      XXXXXXXXXXXXXXXXXXXX	//leemos la siguiente letra del fichero (fgetc)
   }
   XXXXXXXXXXXXXX		//si se ha producido error al acceder al fichero
      printf("ERROR de acceso al fichero %s.\n", nombreFich);	//imprimimos mensaje de error
   XXXX				//si no
      printf("El fichero %s ha sido modificado\n", nombreFich);
   XXXXXXXX			//cerramos el fichero
}
*/


