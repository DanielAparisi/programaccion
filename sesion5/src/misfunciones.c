#include "misfunciones.h"	

tCumpleanios tomaDatos(void){

  tCumpleanios aux ; //struct en este caso es aux, asi se define la cadena

  //declaramos una variable struct auxiliar "aux"
  printf("Dame Nombre: "); 	
  scanf("%19[^\n]s", aux.nombre); //el tamaño es MAX-1 para dejar un byte final es \0, el & no se pone es una excepcion cuando estamoms lleyendo un array de chars 
  
  do {  
    printf("Dame Dia del cumpleaños (1-31): "); 
    scanf("%d", &aux.fecha.dia); //aqui si que le guardamos tambien su direccion de memoria
  } while (aux.fecha.dia < 1 || aux.fecha.dia > 31);	

  do {  

    printf("Dame Mes del cumpleaños (1-12): "); 	//leemos el mes por teclado (introducir el nº de mes)
    scanf("%u", &aux.fecha.mes);

  } while (aux.fecha.mes < 1 || aux.fecha.mes > 31);	
  
  //mientras el mes no sea del 1 al 12
  getchar();				//borramos el \n del buffer del teclado, que queda tras el último scanf
  
  return aux;
}

void muestraDatos(tCumpleanios dato){	//funcion para imprimir una estructura de tipo tCumpleanios el dato es un nombre inventado para esa variable receptora tcumpleanios 

  printf("Nombre: %s\tDia: %u\tMes: %u\n", dato.nombre, dato.fecha.dia, dato.fecha.mes);

}

void buscaAbril(tCumpleanios array[], int tam)	{
  int encontrado=0;			//variable de tipo booleano (0 o 1)(falso o cierto)
  for( int i = 0; i < tam; i++ )	{

    if( array[i].fecha.mes == Abril ){//Poner Abril es igual  que poner 4, todo eso grcias al enum
      printf("las personas nacidas en abril son:%s\n",&array[i].nombre);
      encontrado = 1;
    } 
  }	
  if(!encontrado){ // encontrado == 0 es igual !encontrado
    printf("ninguno");
  }
	
}

void buscaUltimo(tCumpleanios array[], int tam) {
  int posicUltimo=0;			//variable para guardar la posición del elemento buscado, inicialmente a 0
  for( int i = 1; i < tam; i++)		//bucle para explorar el array desde el 2º elemento 
  {
    if( array[i].fecha.mes > array[posicUltimo].fecha.mes)	//si el mes actual es mayor que el de posicUltimo
    {  
       	posicUltimo = i ; //
    }
    else if (  array[i].fecha.mes = array[posicUltimo].fecha.mes)	
    {
      if(array[i].fecha.dia > array[posicUltimo].fecha.mes ) {
        posicUltimo = i;		
      }
    }
  }
  //mostramos los 3 datos del elemento buscado que está en la posición posicUltimo:
 // muestraDatos(XXXXXXXXXXXXXXXXXX);

}
/*
XXXX buscaIguales(XXXXXXXXXXXXXXX, XXXXXXX)	//funcion para buscar cumpleaños iguales, recibe el array de estructuras
{
  int imprimido[tam];		//array para indicar qué elementos ya han sido imprimidos (puede haber más de 2 iguales)
  for (int i=0; i<tam; i++)  
     imprimido[i]=0;    	//en principio todos a 0 falso (ninguno ha sido imprimido)
  XXXXXXXXXXXXXXXXXXXXXXXX	//bucle en i para el primer elemento a comparar (desde 0 hasta tam-1)
  {
    XXXXXXXXXXXXXXXXXXXXXXXX	//bucle en j para el 2º elemento a comparar (desde el i+1 en adelante)
    {
      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//si el mes y dia coinciden en elementos [i] y [j]
      {
         if (imprimido[i]==0)		//si el primer elemento [i] no está imprimido
         {  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//imprimir los datos del elemento [i]
            XXXXXXXXXXXXXXXXX		//ponemos imprimido[i] a cierto (1)
         }
         XXXXXXXXXXXXXXXXXXXX		//si el segundo elemento [j] no está imprimido
         {  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//imprimir los datos del elemento [j]
            XXXXXXXXXXXXXXXXX		//ponemos imprimido[j] a cierto (1)
         }
      }
    }
  }
}

*/




