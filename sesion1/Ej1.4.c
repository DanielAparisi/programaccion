//Ej1.4.c
#include <stdio.h>   
#include <string.h>

int main() {

    char cadena1[10] = {}; //cuando se inicializan con nada, se rellena por defcto con basura
    char cadena2[10] = {};

    //a) Leer la primera cadena de caracteres desde el teclado.
    printf("Introduzca la primera cadena de caracteres : ");
    scanf("10[^\n]s", cadena1); 
   
    //b) Muestra por pantalla la cadena de caracteres leida.

    
  
    //c) Muestra por pantalla el tama o de esa cadena de caracteres.
    int tamañoArray = sizeof(cadena1)/sizeof(char);

    printf("\nEl array ocupa unos %d bytes\n");
  
    //d) Muestra por pantalla la cadena de caracteres en orden inverso letra a letra usando un bucle
    printf("la cadena de caracteres en orden inverso es :");

    
  
   return 0;
}

