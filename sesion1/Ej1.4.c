//Ej1.4.c
#include <stdio.h>   


int main() {

    char cadena1[10] = "nucvfiep" ; //cuando se inicializan con nada, se rellena por defcto con basura
    char cadena2[10] = "vgrevre" ;

    //a) Leer la primera cadena de caracteres desde el teclado.
    printf("Introduzca la primera cadena de caracteres : ");
    scanf("%9[^\n]s\n", cadena1); 
   
    //b) Muestra por pantalla la cadena de caracteres leida.
   printf("La cadena LEIDA es: %s", cadena1);

    //c) Muestra por pantalla el tama o de esa cadena de caracteres.
    int tamañoArray = sizeof(cadena1)/sizeof(char); 

    printf("\nEl array ocupa unos %d bytes\n", tamañoArray);
  
    //d) Muestra por pantalla la cadena de caracteres en orden inverso letra a letra usando un bucle
    
    int i;
    for( i = tamañoArray - 1 ; i >= 0; i--){

        printf(" %c", cadena1[i]);

    }
   return 0;
}
