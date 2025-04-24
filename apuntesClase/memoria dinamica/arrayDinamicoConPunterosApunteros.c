#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  float **p;    //crearemos un array dinámico de punteros a float (necesario un puntero doble a float)
  int filas=2, cols=2, i, j;

   do
  { printf("Dime Nº de filas y columnas del array a crear: ");
    scanf("%d %d", &filas, &cols);     	//pedimos por teclado el nº de elementos deseado
  } while (filas<=0 || cols<=0);

  //reservamos memoria para un array de punteros a float, tantos como filas tenga el array de datos:
  p = (float **)calloc(filas, sizeof(float *));
  if (p==NULL)				//si falta memoria, salimos del programa
  { printf("Error: No hay memoria suficiente."); exit(0); }

  for (i=0; i<filas; i++)
  {  p[i] = (float *)calloc(cols, sizeof(float));   //reservamos memoria para cada fila por separado
     if (p[i]==NULL) 				    //si falta memoria, reducimos el nº de filas
     { printf("Falta memoria, sólo caben %d filas.\n", i); filas=i; }
  }
  if (filas==0) { free(p); exit(0); }    //si no pudimos reservar ninguna fila de datos, terminamos el programa

 printf("\nAddress location pointer:\t%p", &p);
 printf("\nAddress double pointer:\t\t%p", p);
 printf("\nAddress first position:\t\t%p", *p);
 printf("\nAddress second position:\t%p", *(p+1));
 
 printf("Introduzca los datos numéricos del array:\n");    //tomamos los datos desde el teclado
  for (i=0; i<filas; i++)    
     for (j=0; j<cols; j++)
     {  printf("p[%d][%d]=", i, j);  scanf("%f", &p[i][j]);  }

  printf("\nLos datos introducidos son:\n");		    //imprimimos los datos en pantalla
  for (i=0; i<filas; i++)
  {  for (j=0; j<cols; j++)
         printf("%g\t", p[i][j]);
     printf("\n");
  }

 // getting access to an individual value 
 
 printf("\nContent %f", **p);
 printf("\nContent %f", *(*(p+1)+1));
 
  //liberamos la memoria antes de terminar el programa:
  for (i=0; i<filas; i++)  free(p[i]);    //primero liberamos las filas
  free(p);				  //luego liberamos el array de punteros
}