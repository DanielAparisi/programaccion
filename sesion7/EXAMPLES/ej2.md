// FUNCIONES FERROR, FEOF Y CLEARERR

#include <stdio.h>

int main()
{
  FILE *pf;
  pf = fopen("C:\datos.txt", "r");
  if (pf==NULL)
  { printf("ERROR: fichero no existe."); exit(1); }

  fprintf(pf, "Hola");   //operación de grabación en fichero incompatible con el modo "r", producirá error
  if (ferror(pf))
  { printf("ERROR: dato no puede grabarse.");
    clearerr(pf);
  }

  while (!feof(pf) && !ferror(pf))  //típico bucle de lectura secuencial del fichero hasta que llegue al final del fichero
  {
    //Operacion de lectura de un dato
  }

  if (feof(pf))
    printf("Fin de fichero alcanzado\n");
  else if (ferror(pf))
    printf("Error de acceso al fichero\n");

  fclose(pf);
}
