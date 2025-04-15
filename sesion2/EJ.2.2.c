/*
a) Crea una variable que sea una cadena de caracteres de
tamaño 10 y guarda en ella un pequeño texto leido del teclado.
b) Cambia las letras minúsculas por mayúsculas.
c) Cambia las vocales por ’x’.
d) Crea una segunda cadena de caracteres y concatenala con la
primera.
e) Pon un carácter \0 en medio de la cadena de caracteres y
muestra el resultado por pantalla.
f) Añade un comentario en el código que explique por qué no
muestra la cadena entera.
*/

#include <stdio.h>
#include <string.h>



int main(){
    char array[10] = "";
    char array2[] = "Holaaaaa";
    int i;

    printf("Introuzca una cadena de caracteres :\n");
    scanf("%10[^\n]s", array);

    while ( array[i] != '\0'){

        if( array[i] >= 'a' && array[i] <= 'z'){ //SI EL CODIGO ASCII ESTA ENTRE 97 === 'a' Y 122 === 'z' SON MINUSCULAS

             array[i]  -=  ('a'-'A'); //RESTAMOS LAS MINUSCULAS A LAS MAYUSCULAS  
        }
         
        i++;
    }
    printf("La cadena en mayusculas es : %s\n",array);

    i = 0; //<--------- BUENA PRACTICA ENTRE BUCLES ------------>
    while (array[i] != '\0'){

        if (array[i] == 'A'||array[i] =='E'||array[i] =='I'||array[i] =='O'||array[i] =='U') //condiciones completas IMPORTANTISIMO <-------------
        {
           array[i] = '*';
        }
        i++;
    }
    printf("La cadena modificada es : %s\n", array);

    strcat(array,array2);
    printf("El Array concatenado es :%s\n", array);

    array[3] = '\0';
    printf("%s", array);

    //No se llega a mostarr la cadena entera porque para nosotros cuando vemos \0 significa que la cadena ya se ha acabado
    
    
  return 0;

}