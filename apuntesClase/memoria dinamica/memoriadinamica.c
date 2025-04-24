#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int i, j, size_lista, size_divisibles=0;    
  int lista[10] = {2, 4, 6, 8, 12, 15, 7, 9, 10, 100};
  int *divisibles;
  
  size_lista = sizeof(lista)/sizeof(int);
  
  for(i=0; i<size_lista; i++)
  {
      if( lista[i] % 4 == 0 )
       size_divisibles++;
  }
  
  divisibles = (int *)malloc(size_divisibles*sizeof(int));
  
  for(i=0, j=0; i<size_lista; i++)
  {
      if( lista[i] % 4 == 0 )
      {
       *(divisibles+j) = lista[i];
       j++;
      }
  }
  
  
  printf("\nElements divisible by four:");
  
  for(i=0; i<size_divisibles; i++)
  {
      printf("\t%d", divisibles[i]);
  }
  
  printf("\n");
  free(divisibles);
}