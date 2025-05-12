#include <stdio.h>
#include <stdlib.h>

int main() {
    // Escritura en un fichero binario
    FILE *file = fopen("datos.bin", "wb");
    if (file == NULL) {
        perror("Error al abrir el fichero para escritura");
        return 1;
    }

    int numeros[] = {10, 20, 30, 40, 50};
    size_t elementos_escritos = fwrite(numeros, sizeof(int), 5, file);
    if (elementos_escritos != 5) {
        perror("Error al escribir en el fichero");
    }
    fclose(file);

    // Lectura desde un fichero binario
    file = fopen("datos.bin", "rb");
    if (file == NULL) {
        perror("Error al abrir el fichero para lectura");
        return 1;
    }

    int buffer[5];
    size_t elementos_leidos = fread(buffer, sizeof(int), 5, file);
    if (elementos_leidos != 5) {
        perror("Error al leer del fichero");
    }
    fclose(file);

    // Mostrar los datos leídos
    printf("Datos leídos del fichero:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}

Resumen: Cómo trabajar con ficheros binarios
Trabajar con ficheros binarios implica leer o escribir datos en un formato no textual, como imágenes, archivos ejecutables o datos serializados. A continuación, se describen los pasos básicos:


Escritura:

Se abre el fichero en modo binario ("wb").
Se escribe un array de enteros en el fichero usando fwrite.
Lectura:

Se abre el fichero en modo binario ("rb").
Se leen los datos del fichero en un buffer usando fread.
Manejo de errores:

Se verifica si el fichero se abre correctamente.
Se comprueba si la cantidad de datos leídos/escritos coincide con lo esperado.
Cierre del fichero:

Se usa fclose para liberar los recursos asociados al fichero.
Guarda este código en un archivo .c, compílalo y ejecútalo para probarlo.

------Funcion que lea un fichero y lo gabre en uno binario ---------

#include <stdio.h>
#include <stdlib.h>

void copiarATextoBinario(const char *ficheroTexto, const char *ficheroBinario) {
    // Abrir el fichero de texto para lectura
    FILE *fileTexto = fopen(ficheroTexto, "r");
    if (fileTexto == NULL) {
        perror("Error al abrir el fichero de texto");
        return;
    }

    // Abrir el fichero binario para escritura
    FILE *fileBinario = fopen(ficheroBinario, "wb");
    if (fileBinario == NULL) {
        perror("Error al abrir el fichero binario");
        fclose(fileTexto);
        return;
    }

    // Leer el contenido del fichero de texto y escribirlo en el binario
    char buffer[1024];
    size_t bytesLeidos;
    while ((bytesLeidos = fread(buffer, 1, sizeof(buffer), fileTexto)) > 0) {
        fwrite(buffer, 1, bytesLeidos, fileBinario);
    }

    // Cerrar los ficheros
    fclose(fileTexto);
    fclose(fileBinario);

    printf("El contenido del fichero de texto se ha copiado al fichero binario.\n");
}

int main() {
    const char *ficheroTexto = "entrada.txt";
    const char *ficheroBinario = "salida.bin";

    copiarATextoBinario(ficheroTexto, ficheroBinario);

    return 0;
}

--------Aquí tienes una función en C que lee un fichero binario y muestra su contenido por pantalla---------


#include <stdio.h>
#include <stdlib.h>

void mostrarFicheroBinario(const char *ficheroBinario) {
    // Abrir el fichero binario para lectura
    FILE *fileBinario = fopen(ficheroBinario, "rb");
    if (fileBinario == NULL) {
        perror("Error al abrir el fichero binario");
        return;
    }

    // Leer y mostrar el contenido del fichero binario
    char buffer[1024];
    size_t bytesLeidos;
    printf("Contenido del fichero binario:\n");
    while ((bytesLeidos = fread(buffer, 1, sizeof(buffer), fileBinario)) > 0) {
        for (size_t i = 0; i < bytesLeidos; i++) {
            printf("%c", buffer[i]); // Mostrar como caracteres
        }
    }

    // Cerrar el fichero
    fclose(fileBinario);
    printf("\n");
}

int main() {
    const char *ficheroBinario = "salida.bin";

    mostrarFicheroBinario(ficheroBinario);

    return 0;
}



















//PRACTICA S08
//============

//FICHERO ej8.1.c (a guardar en la carpeta sesion8/src/):

XXXXXXXXXXXXXX		//incluimos nuestro fichero de cabecera funciones7.h, que contiene las declaraciones de nuestras funciones

//a) Crea una estructura adecuada para almacenar toda la informacion de cada pelicula:
     //Hecho en el fichero funciones8.h

XXXXXXXXXXX	//cabecera de main 
{
   XXXXXXXX	//declaramos un puntero a FILE pf
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamamos a fopen para abrir el fichero imdbMOVIES.txt en modo "read" (r)
   if (XXXXXXXX)			//si se ha producido un error de apertura de fichero
   {  printf("ERROR: el fichero imdbMOVIES.txt no existe\n"); exit(0);  }

   pelis array[300];	//array estatico de 300 estructuras
   //pelis *arrayDin;	//puntero para crear el array dinamico
   int numRegs;		//indicara el numero de registros del fichero (= numero de elementos de los arrays)

   //b) Crea una funcion que lea el fichero y guarde toda la informacion en memoria estatica (en un array estatico):
   numRegs = leeFichero1(XXXXXXXXXXXXXXXXX);	//le pasamos el puntero a FILE y el array estatico (nombre y tamaño)
   //devuelve el numero de registros que tiene el fichero (deben ser 250)
/*
   //c) Crea una funcion que lea el fichero y guarde toda la informacion en memoria dinamica (en un array dinamico):
   numRegs = leeFichero2(XXXXXXXXXXXXXXXX);	//le pasamos el puntero a FILE y el puntero arrayDin POR REFERENCIA
   //devuelve el numero de registros que tiene el fichero (deben ser 250)
*/
   //d) Crea una funcion que encuentre la pelicula mas moderna y muestre toda su informacion por pantalla:
   masModerna(XXXXXXXXXXXXXXXXXXXX);	//le pasamos el array (su nombre y su numero de registros)

   //e) Crea una funcion que encuentre la pelicula de los ultimos 10 años que tenga mayor numero de votos y muestre toda su informacion por pantalla
   mayorVotos(XXXXXXXXXXXXXXXX);	//le pasamos el array (su nombre y su numero de registros)

   //XXXXXXXXXXXXXXXX	//liberar el array dinamico (solo si usamos leeFichero2 con memoria dinamica)
   XXXXXXXXXXX		//cerrar el fichero
}


//======================================================================================
//FICHERO funciones8.c  (a guardar en la carpeta sesion8/src/):

XXXXXXXXXXXXXXXXXXXX		//incluimos nuestro fichero de cabecera, que contiene las declaraciones de nuestras funciones

int leeFichero1(XXXXXXXXXXXXXXXXXXXXXXXXXXXX)	//recibe el puntero a FILE y el array estatico (puntero y numero de elementos)
{
   int i=0;
   int numregs;		//indicara el numero de registros que tiene el fichero
   char cabecera[200];	//cadena para leer la linea de cabecera del fichero y descartarla
   printf("Leyendo registros del fichero...    ");
   XXXXXXXXXX			//llevamos el apuntador L/E al principio del fichero (rewind)
   fgets(XXXXXXXXXXXXXXXXXXX);	//leer primer registro del fichero y descartarlo

   //leer siguiente registro del fichero sobre el elemento array[0]:
   fscanf(pf, "%d %d %d %d %s", XXXXXXXXX, XXXXXXXXX, XXXXXXXXX, XXXXXXXXX, XXXXXXXXX);

   while (XXXXXXXXXXXXXXXXXXXXXXX)   //mientras no lleguemos al final del fichero, no haya error de lectura y no nos pasemos del numero total de elementos del array
   {  i++;
      //leer siguiente registro del fichero sobre el elemento array[i]:
      fscanf(XX, XXXXXXXXXXXXXXXX, XXXXXXXXX, XXXXXXXXX, XXXXXXXXX, XXXXXXXXX, XXXXXXXXX);
   }
   numregs = i;		//el ultimo valor de i indica el numero de registros del fichero
   printf("Tenemos %d registros\n\n", numregs);		//deben salir 250 registros

   XXXXXXXXXXXXXXXXXX	//bucle for para imprimir en pantalla todos los registros del array
      printf("%d: Nombre: %s\tAño: %d\tRanking: %d\tVotos: %d\tMetascore: %d\n", i+1, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX); 

   return XXXXXXXXX	//retornar el numero de registros del fichero
}

/*
int leeFichero2(XXXXXXXXXXXXX)	//recibe el puntero a FILE y el puntero arrayDin pasado por referencia (con puntero pp doble **)
{
   int i=0;
   char cabecera[200];	//cadena para leer la linea de cabecera del fichero y descartarla
   int numregs;		//indicara el numero de registros que tiene el fichero
   pelis regAux;	//registro auxiliar
   pelis *array;	//puntero para crear el array dinamico

   //PRIMERO HAY QUE AVERIGUAR CUANTOS REGISTROS TIENE EL FICHERO:
   printf("Leyendo registros del fichero...    ");
   XXXXXXXXX		//llevamos el apuntador L/E al principio del fichero
   XXXXXXXXXXXXXXXX	//leer primer registro del fichero y descartarlo (fgets)

   //leer siguiente registro del fichero sobre el registro auxiliar:
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   while (XXXXXXXXXXXXXXX)	//mientras no lleguemos al final del fichero y no haya error de lectura
   {  i++;
      //leer siguiente registro del fichero sobre el registro auxiliar:
      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   }
   numregs = i;		//el ultimo valor de i indica el numero de registros del fichero
   printf("Tenemos %d registros\n\n", numregs);		//deben salir 250 registros

   //AHORA CREAMOS EL ARRAY DINAMICO CON TANTOS ELEMENTOS COMO NUMERO DE REGISTROS:
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//llamar a malloc para crear el array dinamico con el puntero array
   if (XXXXXXXXXXX)	//si falla malloc
   {  printf("ERROR: falta memoria\n"); return 0;  }

   //AHORA CARGAMOS EL ARRAY CON LOS DATOS LEIDOS DEL FICHERO:
   i = 0;
   XXXXXXXXXXX		//llevar el apuntador L/E al principio del fichero
   XXXXXXXXXXXXXXX	//leer primer registro del fichero y descartarlo (fgets)

   //leer siguiente registro del fichero sobre el elemento array[0]:
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXXXXXXXX	//mientras no se llegue al final del fichero y no haya error de lectura
   {  i++;
      //leer siguiente registro del fichero sobre el elemento array[i]:
      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   }
   XXXXXXXXXXXXXXXX	//desactivar el indicador feof() (clearerr)
   XXXXXXXXXXXX		//copiar el puntero array en el puntero arrayDin de main (mediante el puntero pp)
   return XXXXXXXXX	//retornar el numero de registros del fichero
}
*/

void masModerna(XXXXXXXXXXXXXXXXX)	//recibe el array de estructuras
{
   //PRIMERO AVERIGUAMOS CUAL ES EL AÑO MAS ALTO:
   int maxAnyo = array[0].year;		//variable para calcular el año mas alto
   for (XXXXXXXXXXXXXXXXXXXXXXXX)	//bucle en i para calcular el año mas alto
     if (XXXXXXXXXXXXXXXXX)		//si el año actual es mayor que el año maximo
        XXXXXXXXXXXXXXXXXXXXX		//actualizar el año maximo
   printf("El año mas alto es %d\n", maxAnyo);	//debe salir 2021

   //AHORA IMPRIMIMOS TODAS LAS PELICULAS DE ESE AÑO (pueden ser varias):
   printf("Las peliculas mas modernas son:\n");
   for (XXXXXXXXXXXXXXXXXXXXXXXXXX)	//bucle para imprimir todas las peliculas que tengan el año igual al maximo
     if (XXXXXXXXXXXXXXXXXX)		//si el año actual es igual al maximo
        printf("Nombre: %s\tAño: %d\tRanking: %d\tVotos: %d\tMetascore: %d\n", XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX);
}

void mayorVotos(XXXXXXXXXXXXXXXXX)	//recibe el array de estructuras
{
   //PRIMERO AVERIGUAMOS POR TECLADO CUAL ES EL AÑO ACTUAL:
   int anyoActual = 0;			//variable para tomar por teclado el año actual
   do
   { printf("\nDime cual es el año actual: "); scanf(XXXXXXXXXXXXXXXXXX);
   } while (XXXXXXXXXXXXXX);		//solo se aceptan numeros mayores o iguales que 2020

   //AHORA AVERIGUAMOS CUAL ES EL Nº VOTOS MAS ALTO DE LOS ULTIMOS 10 AÑOS:
   int max = -1;			//variable para calcular el nº votos mas alto
   for (XXXXXXXXXXXXXXXXXXXXXXXXXXX)	//bucle para calcular el nº votos mas alto
     if (XXXXXXXXXXXXXXXXXXXXXXXXXXX)   //si el año es de los 10 ultimos (>= que anyoActual-10) y el nº votos actual es mayor que el maximo
        XXXXXXXXXXXXXXXXXXXXXXXXX	//actualizar el nº votos maximo
   printf("\nEl nº votos maximo es %d\n", max);   //deben salir 1117695

   //AHORA IMPRIMIMOS LAS PELICULAS CON ESE Nº VOTOS MAS ALTO:
   printf("Las peliculas con mayor nº votos de los ultimos 10 años son:\n");   
   for (XXXXXXXXXXXXXXXXXXXXXXX)	//bucle para imprimir todas las peliculas que tengan el nº votos igual al maximo
     if (XXXXXXXXXXXXXXXXXXXXXXXX)	//si el nº votos actual es igual al maximo y el año es de los 10 ultimos
        printf("Nombre: %s\tAño: %d\tRanking: %d\tVotos: %d\tMetascore: %d\n", XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX);
   //debe salir 1 pelicula (Joker) con nº votos maximo 1117695
}



//===============================================================================
//FICHERO funciones8.h  (a guardar en la carpeta sesion8/include/):

#include <stdio.h>
#include <stdlib.h>

#ifndef _SESION8	//compilacion condicional: "if not defined" (ifndef) la constante simbolica _SESION8
  #define _SESION8	//definimos la constante simbolica

  typedef struct
  {  int ranking;
     int year;
     int votes;
     int metascore;
     char name[70];
  } pelis;		//"pelis" es el nombre del TIPO de dato struct

  //declaraciones prototipo de mis funciones:
  int leeFichero1(FILE *pf, pelis *array, int num);
//int leeFichero2(FILE *pf, pelis **pp);
  void masModerna(pelis *array, int numElems);
  void mayorVotos(pelis *array, int numElems);

#endif		//final del bloque de compilacion condicional


