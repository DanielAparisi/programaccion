
//Comando de compilación:  gcc ej3.2.c misfunciones.c -o ej3.2
#include <stdio.h>	
#include "misfunciones.h"     

int main() {
  //a) Crea un programa (el main) que muestre las cadenas cadena_pal y cadena_nopal:
  //declarar cadenas e inicializarlas:
  char cadena_pal[] = "Yo dono rosas, oro no doy";	//esta cadena cadena_pal es un palindromo
  char cadena_nopal[] = "Esto puede ser que cese";	//ésta cadena cadena_nopal no es un palindromo
  printf("cadena_pal:%s\n", cadena_pal);
  printf("\ncadena_nopal:%s\n", cadena_nopal);	//imprimir las dos cadenas con printf


  //b) Crea una función que muestre en pantalla una cadena, y pruebala.
  printf("Mostrar cadenas:\n");
  imprimeCadena(cadena_pal); 
  printf("\n");	
  imprimeCadena(cadena_nopal);
  printf("\n\n");	
  
 //c) Crea una segunda función que MUESTRE una cadena letra a letra pero sin comas ni espacios y todo en minúsculas.
  printf("Cadenas sin comas ni espacios:\n");
  printf("\n");		//llamar a la funcion imprimeSinComas para imprimir cadena_pal

  imprimeSinComas(cadena_pal); 
  printf("\n\n");	//llamar a la funcion imprimeSinComas para imprimir cadena_nopal


}
/*
 

  //e) Crea una función que MODIFIQUE una cadena para que no tenga ni comas ni espacios y esté todo en minúsculas.
  printf("Cadenas modificadas sin comas ni espacios:\n");
  XXXXXXXXXXXXXXXXXXXXXXXXXX; printf("%s\n", cadena_pal);		//llamar a modificaSinComas con cadena_pal. Esto modifica a las cadenas iniciales
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXX; printf("%s\n\n", cadena_nopal);	//llamar a modificaSinComas con cadena_nopal

  //f) Crea una función que compruebe si una cadena es palíndromo.
  strcpy(XXXXXXXXXXXXXXXXXXXXXXX, XXXXXXXXXXXXXXXXXXXXXXX);   	//volvemos a cargar las cadenas iniciales en cadena_pal y cadena_nopal
  strcpy(XXXXXXXXXXXXX, XXXXXXXXXXXXXXXXXXX);
  XXXXXXXXXXXXXXXXXXXXXXXXX		//llamamos a esPalindromo pasándole cadena_pal
  XXXXXXXXXXXXXXXXXXXXXXXX		//llamamos a esPalindromo pasándole cadena_nopal
}

/

*/
