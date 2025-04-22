
#include "misfunciones.h" 

void imprimeCadena(char array[]){
   printf("la cadena es: %s",array);
}

void modificaSinComas(char *array){
  int i,j;
  
  //bucle for para recorrer todo el array letra a letra hasta el \0 final
   for(i = 0;  array[i]; i++){ // '\0' === 0//
     if( array[i] == ',' || array[i] == ' ')	{ //IMPORTANTE LOS OPERADORE LOGICOS 
         for ( j = i; array[j]  != '\0' ; j++) 
         {
            array[j] =  array[ j + 1 ];
         }
         i--;  
      } else if( array[i] >= 'A' && array[i] <= 'Z'){
         array[i] += 32;
      }
   }
}  

void imprimeSinComas(char array[]){
   int i;
  
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



void esPalindromo(char *array) {
  int n = strlen(array) ;
  int palin = 1, i;	//creamos un lo equivalente a un estado estado palin === true 
  char arrayAux[ n +1];	 //incluimos el '\0'
  strcpy(arrayAux,array);		
  modificaSinComas(arrayAux);		
  n = strlen(arrayAux);	
   
  for( i = 0 ; arrayAux[i] < n; i++ )	{  				
     if( arrayAux[i] != array[n-i-1]){ 
      palin = 0; //palin === false, cambiamos el estado
      break;
     }		
  }  
   if( palin == 1){
      printf("La cadena \"%s\" SI ES palindromo\n\n", array);	
   }else {
      printf("La cadena \"%s\" NO ES palindromo\n\n", array);	
   }
   
}
