
#include "misfunciones.h" 

void imprimeCadena(char array[]){
      printf("la cadena es: %s",array);
}

void imprimeSinComas(char array[]){
  int i;
  
  //bucle for para recorrer todo el array letra a letra hasta el \0 final
   for(i = 0; i < 25; i++){
     if( array[i] == ',' && array[i] == '\0' && array[i] == '\t')	{
         if( array[i] >= 'A' && array[i] <= 'Z'){

            array[i]  -=  ('A'-'a');
            printf("%s",array[i]);
         }	else {
            printf("%s",array[i]);
         }
         //se imprime la letra tal cual
      }
   }
}
/*
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX		//cabecera de la funcion modificaSinComas
//funcion para modificar una cadena "cad" quitándole comas y espacios
{
  XXXXXXXXXXXXXXXXXXXXXXXXX		//bucle en i para recorrer todo el array hasta el \0 final
  {
     XXXXXXXXXXXXXXXXXXXXXXXXXXXX		//si la letra es coma o espacio
     {
        XXXXXXXXXXXXXXXXXXXXXXXXX		//bucle en j para desplazar hacia adelante todas las letras que estén por detrás
        {  XXXXXXXXXXXXXXXXXX  }
        XXXXX					//decrementamos i, así volveremos a explorar la nueva letra en la misma posición
     }
     else if (XXXXXXXXXXXXXXXXXXXXXXXXX)	//si es una letra mayuscula
        XXXXXXXXXXXXXXXXXX			//la convertimos en minuscula
  }
}

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX		//cabecera de la funcion esPalindromo
//averiguamos si la cadena de entrada "cad" es palindromo, sin modificar la cadena original
{
  XXXXXXXXXXXXXX			//declarar variable entera "n" e inicializarla con la longitud de letras de cad
  XXXXXXXX				//declarar variable entera "palin" y ponerla a 1 para indicar si cad es palindromo (inicialmente cierto (1))
  XXXXXXXXXXXXXXX			//declarar cadena auxiliar con mismo tamaño que la cadena original
  XXXXXXXXXXXXXXX			//copiamos la cadena original en auxiliar, para no estropear la cadena original
  XXXXXXXXXXXXXXXXXXXXXXX		//llamar a modificaSinComas para quitar comas y espacios en la cadena auxiliar
  XXXXXXXXXXXXXXX			//calculamos en n la longitud de letras de auxiliar
  XXXXXXXXXXXXXXXXXXXXXXX		//bucle en i para ir comparando caracteres en la cadena auxiliar,
  {  					//uno por el principio aumentando [i], y otro por el final disminuyendo [n-i-1]
     XXXXXXXXXXXXXXXXXXXX		//si encontramos un caracter diferente
     {  XXXXXXXXXXXXXXX  }		//ponemos palin a falso (0) y salimos del bucle
  }  
  XXXXXXXX				//si palin vale 1
    printf("La cadena \"%s\" SI ES palindromo\n\n", cad);	//imprimimos SÍ ES palindromo
  XXXX					//si no
    printf("La cadena \"%s\" NO ES palindromo\n\n", cad);	//imprimimos NO ES palindromo
}

//----------------------------------------------------------------------------------------------------------


*/

