
//Comando de compilación:  gcc ej3.2.c misfunciones.c -o ej3.2
#include <stdio.h>	
#include "misfunciones.h"     

int main() {
  //a) Crea un programa (el main) que muestre las cadenas cadena_pal y cadena_nopal:
  //declarar cadenas e inicializarlas:
  char cadena_pal[] = "Yo dono rosas, oro no doy";	//esta cadena cadena_pal es un palindromo
  char cadena_nopal[] = "Esto puede ser que cese";	//ésta cadena cadena_nopal no es un palindromo

  printf("cadena_pal:%s\n", cadena_pal);
  printf("cadena_nopal:%s\n", cadena_nopal);	//imprimir las dos cadenas con printf
  printf("\n\n");	

  //b) Crea una función que muestre en pantalla una cadena, y pruebala.
  printf("Mostrar cadenas:\n");
  imprimeCadena(cadena_pal); 
  printf("\n");	
  imprimeCadena(cadena_nopal);
  printf("\n\n");	
  
 //c) Crea una segunda función que MUESTRE una cadena letra a letra pero sin comas ni espacios y todo en minúsculas.
  printf("Cadenas sin comas ni espacios:\n");
  imprimeSinComas(cadena_pal); 
  printf("\n");	
  imprimeSinComas(cadena_nopal);

  printf("\n"); 
 //llamar a la funcion imprimeSinComas para imprimir cadena_nopal

  //e) Crea una función que MODIFIQUE una cadena para que no tenga ni comas ni espacios y esté todo en minúsculas.
  printf("Cadenas modificadas sin comas ni espacios:\n");
  modificaSinComas(cadena_pal);
  printf("\n%s", cadena_pal);
  modificaSinComas(cadena_nopal);
  printf("\n%s\n", cadena_nopal);
  
 //f) Crea una función que compruebe si una cadena es palíndromo.
  strcpy(cadena_pal,"Yo dono rosas, oro no doy");   	
  strcpy(cadena_nopal, "Esto puede ser que cese" );
  esPalindromo(cadena_pal);
  esPalindromo(cadena_nopal);

}