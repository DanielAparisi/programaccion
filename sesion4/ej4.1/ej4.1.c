#include <stdio.h>
#include "misfunciones.h"

int main(){
  setlocale(LC_ALL, "");
  setvbuf(stdout, NULL, _IONBF, 0);
  //a) Crea un programa (el main) con un array de floats con 10 elementos (y dale valores).
  float array[10] = {8.2, 0, 10.5, 20, 0, 15.6, 18.1, 7, 9.8, 12};
  int tam = sizeof(array)/sizeof(float);

  float maximo, minimo, media, varianza;		//variables para depositar los resultados
  calcula_maximo_y_minimo(array,tam,&maximo,&minimo);	//llamada a la función
  calcula_media_y_varianza(array, tam,&media,&varianza);
  
  	
  printf("El máximo es: %.2f\n", maximo);		//imprimir el máximo, deberia ser 20
  printf("El mínimo es: %.2f\n", minimo);		//imprimir el minimo, deberia ser 0
  printf("la media es: %.2f\n", media);			//imprimir la media, deberia ser 10.12
  printf("La varianza es: %.2f\n", varianza);		//imprimir la varianza, deberia ser 41.3356
}





