// FUNCIONES FOPEN Y FCLOSE

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *pf;
  pf = fopen("C:\datos.txt", "w+");
  if (pf==NULL)
  { printf("ERROR de apertura del fichero."); exit(1); }

  //... operaciones de grabacion y lectura del fichero

  fclose(pf);
}
