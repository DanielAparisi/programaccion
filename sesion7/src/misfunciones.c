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

void cambiaLetras(char *NombreFichero, char a, char b) {

   FILE *fp;
   fp = fopen(NombreFichero, "w+"); // Apertura en modo lectura y escritura

   if (fp == NULL) {
      printf("Error al abrir el fichero %s\n", NombreFichero);
      exit(1);
   }
   fseek(fp, 0, SEEK_SET); // Colocamos el puntero al inicio del fichero
   long LongitudDelFichero = ftell(fp); // Obtenemos la longitud del fichero
   rewind(fp); // Colocamos el puntero al inicio del fichero

   for( int i = 0; i < LongitudDelFichero; i++){
      if( NombreFichero[i] == a){
         a = b;
      }
   }

   if (ferror(fp))
      printf("ERROR al grabar el fichero %s.\n", NombreFichero);
   else
      printf("El fichero ha sido modificado correctamente.\n");

   fclose(fp);

   
}
