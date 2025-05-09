// FUNCIONES FPRINTF Y FSCANF

// Ejemplo de uso de funciones fprintf y fscanf
#include <stdio.h>
int main()
{ FILE *pf;
  char cad[200];	//variables de prueba de diversos tipos
  int i=1;
  long a=99999;
  float b=3.14;

  if ((pf=fopen("datos", "r"))==NULL)		//El fichero no existe, lo abrimos en modo escritura
  { 
    if ((pf=fopen("datos", "w"))==NULL)
      { printf("ERROR al abrir el fichero\n"); exit(1); }
    fprintf(pf, "Linea %d: %7ld %9.2f\n", i, a, b);		//grabamos 1ª linea de texto
    fprintf(pf, "Linea %d: %7ld %9.2f\n", ++i, a/2, b*2);	//grabamos 2ª linea de texto
    printf("El fichero no existía, lo hemos creamos. Ejecute de nuevo el programa\n");
  }
  else						//El fichero ya existe, queda abierto en modo lectura
  { 
    printf("Contenido de texto del fichero:\n");
    fgets(cad, 200, pf); printf("%s", cad);	//leemos en cad la 1ª linea del fichero (hasta el \n)
    fgets(cad, 200, pf); printf("%s", cad);	//leemos en cad la 2ª linea del fichero (hasta el \n)
    rewind(pf);
    printf("\nVariables leidas con fscanf:\n");	
    fscanf(pf, "%s %d: %ld %f\n", cad, &i, &a, &b);		//cargamos en las variables los valores de la 1ª línea de texto
    printf("cad=%s i=%d a=%ld b=%.2f\n", cad, i, a, b);		//imprimimos en pantalla las variables
    fscanf(pf, "%s %d: %ld %f\n", cad, &i, &a, &b);		//cargamos en las variables los valores de la 2ª línea de texto
    printf("cad=%s i=%d a=%ld b=%.2f\n", cad, i, a, b);		//imprimimos en pantalla las variables
  }
  fclose(pf);
}

/*
RESULTADO EN PANTALLA:

1ª EJECUCIÓN:
El fichero no existía, lo hemos creamos. Ejecute de nuevo el programa

2ª EJECUCIÓN:
Contenido de texto del fichero:
Linea 1:   99999      3.14
Linea 2:   49999      6.28

Variables leidas con fscanf:
cad=Linea i=1 a=99999 b=3.14
cad=Linea i=2 a=49999 b=6.28
*/
