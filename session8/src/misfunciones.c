#include "misfunciones.h"
	//incluimos nuestro fichero de cabecera, que contiene las declaraciones de nuestras funciones

int leeFichero1(FILE *file, pelis ArrayAlmacenado[], int MAXNUM) {
    int i = 0;
    int numregs; // Indicará el número de registros que tiene el fichero
    char cabecera[200]; // Cadena para leer la línea de cabecera del fichero y descartarla

    printf("Leyendo registros del fichero...    ");
    rewind(file); // Nos aseguramos de que el puntero de lectura/escritura del fichero está al principio.
    fgets(cabecera, 200, file); // Leer y descartar la línea de cabecera

    // Leer el siguiente registro del fichero sobre el elemento array[0]:
    fscanf(file, "%d %d %d %d %s", &ArrayAlmacenado[i].ranking, &ArrayAlmacenado[i].votes, 
           &ArrayAlmacenado[i].year, &ArrayAlmacenado[i].metascore, ArrayAlmacenado[i].name);

    while (!ferror(file) && !feof(file) && i < MAXNUM) { // Mientras no haya errores y no se alcance el final del fichero
        i++;
        // Leer el siguiente registro del fichero sobre el elemento array[i]:
        fscanf(file, "%d %d %d %d %s", &ArrayAlmacenado[i].ranking, &ArrayAlmacenado[i].votes, 
               &ArrayAlmacenado[i].year, &ArrayAlmacenado[i].metascore, ArrayAlmacenado[i].name);
    }

    numregs = i; // El último valor de i indica el número de registros del fichero
    printf("Tenemos %d registros\n\n", numregs); // Deben salir 250 registros

    for (i = 0; i < numregs; i++) {
        printf("%d: Nombre: %s\tAño: %d\tRanking: %d\tVotos: %d\tMetascore: %d\n", 
               i + 1, ArrayAlmacenado[i].name, ArrayAlmacenado[i].year, 
               ArrayAlmacenado[i].ranking, ArrayAlmacenado[i].votes, ArrayAlmacenado[i].metascore);
    }

    return numregs; // Retornar el número de registros del fichero
}


int leeFichero2(FILE *pf, pelis **pp)	//recibe el puntero a FILE y el puntero arrayDin pasado por referencia
{
   int i=0;
   char cabecera[200];	//cadena para leer la linea de cabecera del fichero
   int numregs;		//indicará el nº de registros que tiene el fichero
   pelis regAux;	//registro auxiliar
   pelis *array;	//puntero para crear el array dinámico

   //PRIMERO HAY QUE AVERIGUAR CUANTOS REGISTROS TIENE EL FICHERO:
   printf("Leyendo registros del fichero...    ");
   rewind(pf);		//llevamos el apuntador L/E al principio del fichero
   fgets(cabecera, 200, pf);	//leer primer registro del fichero y descartarlo

   //leer siguiente registro del fichero sobre el registro auxiliar:
   fscanf(pf, "%d %d %d %d %s", &regAux.ranking, &regAux.year, &regAux.votes, &regAux.metascore, regAux.name);
   while (!feof(pf) && !ferror(pf))	//mientras no lleguemos al final del fichero
   {  i++;
      //leer siguiente registro del fichero sobre el registro auxiliar:
      fscanf(pf, "%d %d %d %d %s", &regAux.ranking, &regAux.year, &regAux.votes, &regAux.metascore, regAux.name);
   }
   numregs = i;		//el ultimo valor de i indica el numero de registros del fichero
   printf("Tenemos %d registros\n\n", numregs);

   //AHORA CREAMOS EL ARRAY DINAMICO CON TANTOS ELEMENTOS COMO NUMERO DE REGISTROS:
   array = (pelis *)malloc(sizeof(pelis) * numregs);	//llamar a malloc para crear el array dinamico con el puntero array
   if (array==NULL)	//si falla malloc
   {  printf("ERROR: falta memoria\n"); return 0;  }

   //AHORA CARGAMOS EL ARRAY CON LOS DATOS LEIDOS DEL FICHERO:
   i = 0;
   rewind(pf);		//llevar el apuntador L/E al principio del fichero
   fgets(cabecera, 200, pf);	//leer primer registro del fichero y descartarlo

   //leer siguiente registro del fichero sobre el elemento array[0]:
   fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
   while (!feof(pf) && !ferror(pf))	//mientras no se llegue al final del fichero
   {  i++;
      //leer siguiente registro del fichero sobre el elemento array[i]:
      fscanf(pf, "%d %d %d %d %s", &array[i].ranking, &array[i].year, &array[i].votes, &array[i].metascore, array[i].name);
   }
   clearerr(pf);	//desactivar el indicador feof()
   *pp = array;		//copiar el puntero array en el puntero arrayDin de main
   return numregs;	//retornar el numero de registros del fichero
}

/*
*/


/*
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


*/

