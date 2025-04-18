#include <stdio.h>                
#include "misfunciones.h"    

int main()  {
    int a[8] = {23,34,555,32,43,55,100,88}; 
    int minimo;
    float media;


    minimo = encuentra_minimo(a, 8);
    printf("El menor elemento del array es :%d\n", minimo);

    media = calcula_media(a,8);
    printf("la media del array es: %.2f\n", media );
  
}
