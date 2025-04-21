
#include "misfunciones.h" 

void imprimeCadena(char array[]){
   printf("la cadena es: %s",array);
}

void imprimeSinComas(char array[]){
  int i,j;
  
  //bucle for para recorrer todo el array letra a letra hasta el \0 final
   for(i = 0;  array[i]; i++){ // '\0' === 0
     if( array[i] != ','  && array[i] != ' ')	{
         for ( j = 0; array[j]  != '\0' ; j++)
         {
            array[j] =  array[ j + 1 ];
         }
         i--;  
      }
   }
}
void modificaSinComas(char *array){
   int i;
   char *p = (char *)&array;

   for( i = 0 ; array[i] != '\0' ; i++ ){
      if( array[i] != ','  && array[i] != ' '){
         if( array[i] >= 'a' && array[i] <= 'z') { //si la posicion de i es minuscula 
            printf("%c",array[i] - 32); //mirar codigo ASCII
         }	else {
            printf("%c",array[i]);
         }
      }
   }




}

/*


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



