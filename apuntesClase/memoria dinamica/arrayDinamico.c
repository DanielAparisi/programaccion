#include <stdio.h>
#include <stdlib.h>

int main()
{
  float *p, aux;    //crearemos un array dinámico de datos float, por eso usamos un puntero a float
  int numelem=0, i, j;
  do
  { printf("Dime Nº de elementos del array a crear:");
    scanf("%d", &numelem);     //pedimos por teclado el nº de elementos deseado, que no sea negativo
  } while (numelem<1);

  p = (float *)malloc(numelem*sizeof(float));   //reservamos memoria para el array dinámico, con malloc
  if (p==NULL)			    //malloc devuelve NULL si no hay memoria libre suficiente
  { printf("Error: No hay memoria suficiente."); exit(0); }    //salimos del programa

  printf("Introduzca los datos del array:\n");
  for (i=0; i<numelem; i++)    //Introducimos por teclado los datos del array, cuyo nombre es el del puntero p
    scanf("%f", &p[i]);

    printf("\nLos datos ordenados son:\n");
  for (i=0; i<numelem; i++)    //Imprimimos en pantalla los datos del array
    printf("%g ", p[i]);

  free(p);    //liberamos la memoria antes de terminar el programa
}
