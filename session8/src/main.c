#include "misfunciones.h"

int main()	 {
   setlocale(LC_ALL, "es_ES.UTF-8"); // Configurar la localización para español
   system("chcp 65001"); // Configurar la consola para UTF-8 
   FILE * pf;	//declaramos un puntero a FILE pf
   pf = fopen("imdbMOVIES.txt","r");	//llamamos a fopen para abrir el fichero imdbMOVIES.txt en modo "read" (r)


   if (pf != NULL){

    printf("ERROR: el fichero imdbMOVIES.txt no existe\n"); exit(0);  

   }			
    
   pelis array[300];	//array estatico de 300 estructuras
   pelis *arrayDin;	//puntero para crear el array dinamico, puntero de tipo dato estructura
   int numRegs;		//indicara el numero de registros del fichero (= numero de elementos de los arrays)

   //b) Crea una funcion que lea el fichero y guarde toda la informacion en memoria estatica (en un array estatico):

   numRegs = leeFichero1(pf, array,300);	//le pasamos el puntero a FILE y el array estatico (nombre y tamaño)
   //devuelve el numero de registros que tiene el fichero (deben ser 250)
/*
   //c) Crea una funcion que lea el fichero y guarde toda la informacion en memoria dinamica (en un array dinamico):
   numRegs = leeFichero2(XXXXXXXXXXXXXXXX);	//le pasamos el puntero a FILE y el puntero arrayDin POR REFERENCIA
   //devuelve el numero de registros que tiene el fichero (deben ser 250)
*/
   //d) Crea una funcion que encuentre la pelicula mas moderna y muestre toda su informacion por pantalla:
  // masModerna(XXXXXXXXXXXXXXXXXXXX);	//le pasamos el array (su nombre y su numero de registros)

   //e) Crea una funcion que encuentre la pelicula de los ultimos 10 años que tenga mayor numero de votos y muestre toda su informacion por pantalla
  // mayorVotos(XXXXXXXXXXXXXXXX);	//le pasamos el array (su nombre y su numero de registros)

   //XXXXXXXXXXXXXXXX	//liberar el array dinamico (solo si usamos leeFichero2 con memoria dinamica)
  // XXXXXXXXXXX		//cerrar el fichero
}