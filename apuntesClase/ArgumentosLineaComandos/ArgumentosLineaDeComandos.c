#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int esnumero(char *cad)		//devuelve 1 (cierto) si la cadena cad es numérica
{
   for (int i=0; i<strlen(cad); i++)
   {  if ( (cad[i]<'0' || cad[i]>'9') && (cad[i]!='+') )  //si no es un dígito del 0 al 9
         return 0;
   }
   return 1;
}

int main(int argc, char *argv[])
{

  // Check that the program receives only 1 argument (argc = 2)

  if( argc != 2)
  {
      printf("\nError:\tIncorrect number of arguments.\nUse:\t./ programName argument1\n");
      exit(1);
  }

  // Check that the argument is a positive number

  if (!esnumero(argv[1]))	
  {
      printf("\nError:\tThe argument must be a positive number.\nUse:\t./ programName positiveNumber\n");
      exit(2);
  }  
 
  printf("\nArgument received:\t%d\n", atoi(argv[1])); 
  exit(0);
  
}


