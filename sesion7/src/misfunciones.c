#include "misfunciones.h"	

void  creaFichero(char *nombreFich){
   FILE * fp;
   fp  = fopen("./texto.txt","a");

   if( fp == NULL) {
      perror("ERROR de apertura del fichero\n"); //sirve para imprimir un mensaje de error descriptivo en la salida estándar de errores (stderr).
      exit(1);				
   } else {
      
      printf("Dame un texto a grabar, seguido de Enter: ");
      fgets(nombreFich, 100,stdin); //GRABAMOS EL ARCHIVO
      fputs(nombreFich, fp);

      if( ferror(fp)){
         printf("ERROR al grabar en el fichero.\n");
        
      }
   }
    fclose(fp);
}

void MuestraFichero(char *NombreFichero){

   FILE * file;
   
   file = fopen("./texto.txt","r");

   if( file == NULL){
      perror("Error Al intentar abrir el fichero");
      exit(1);
   } else {
      printf("El nombre del archivo es %s", NombreFichero);
      char cadAux[100];

      if(fgets(cadAux, sizeof(cadAux),file) != NULL ) {  
         printf("%s", cadAux);  
      }
   }

   fclose(file);

}

void cambiaLetras(char *NombreFichero, char a, char b){

   FILE * fp;
   int i;
   fp = fopen("./text.txt","r");

   if( fp != NULL){
      char cadAux[1000];
      while (!ferror(fp) && !feof(fp)) {
         for( i = 0; i < sizeof(cadAux); i++){
            if( cadAux[i] == 'a'|| cadAux[i] == 'e'|| cadAux[i] == 'i'|| cadAux[i] == 'o'|| cadAux[i] == 'u' ){
               cadAux[i] == a;
               a == b;
            }
         }
      }

   } else {

      printf("Error al abrir el fichero %s", NombreFichero);
      exit(1);
   }





}	



/*
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

