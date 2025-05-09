#include "misfunciones.h"

	//cabecera de main para recibir argumentos en la línea de comandos
 int main( int argc, int *argv[]){
   if( argc != 1) {     

        printf("ERROR: debes aportar un nombre de fichero.\n"); exit(0); 
    }
/*
   //b) Crea una función que escriba en el fichero algo leido del teclado. Si el fichero no existe debe crearlo. 
   //Si el fichero existe debe escribir al final del mismo.
   XXXXXXXXXXXXXXXXXXXXXX	//llamamos a la función creaFichero() y le pasamos el nombre del fichero

   //c) Crea una función que muestre el contenido del fichero por pantalla. Si el fichero no existe, emitir mensaje de error
   XXXXXXXXXXXXXXXXXXXXXXX	//llamamos a la función muestraFichero() y le pasamos el nombre del fichero

   //d) Crea una función a la que se le pasen dos caracteres. La función debe recorrer el fichero y cambiar el primer carácter por el segundo
   XXXXXXXXX			//declaramos dos variables de tipo char (a y b)
   printf("Dame la letra a buscar: ");
   XXXXXXXXXXXXX		//leemos la letra en a
   getchar();			//borramos el \n que queda en el buffer del teclado
   printf("Dame letra de reemplazo: ");
   XXXXXXXXXXXXX		//leemos la letra en b
   XXXXXXXXXXXXXXXXX		//llamamos a la funcion cambiaLetras() y le pasamos el nombre del fichero y las dos letras a y b
   XXXXXXXXXXXXXXXXXXXXX	//llamamos a la función muestraFichero para ver el nuevo contenido del mismo
}


//======================================================================================
//FICHERO funciones7.c  (a guardar en la carpeta sesion7/src/):

XXXXXXXXXXXXXXXXXXXXX		//incluimos nuestro fichero de cabecera, que contiene las declaraciones de nuestras funciones

XXXXXXXXXXXXXXXXXXXXXXXXXX	//cabecera de la función creaFichero, recibe una cadena nombreFich con el nombre del fichero
{
   XXXXXXXXX				//declaramos un puntero a FILE pf
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamamos a fopen para abrir el fichero en modo "append" (a)
   XXXXXXXXXXXXXXX			//si se ha producido un error de apertura de fichero
   {  printf("ERROR de apertura del fichero %s\n", nombreFich);
      return;				//salimos de la función
   }
   XXXXXXXXXXXXXXXX			//declaramos una cadena de 100 caracteres
   printf("Dame un texto a grabar, seguido de Enter: ");	
   XXXXXXXXXXXXXXXXXXXXXXX		//leemos por teclado una frase para la cadena (con fgets - stdin)
   XXXXXXXXXXXXXXX			//grabamos la cadena en el fichero (fputs)
   XXXXXXXXXXXXXXX			//si hay error de grabación
      printf("ERROR al grabar en el fichero.\n");
   XXXXXXXXXX				//cerramos el fichero
}

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



*/
