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
/*

void buscaAbril(tCumpleanios array[], int tam)	//funcion para buscar los nacidos en Abril, recibe el array de estructuras
{
  int encontrado=0;			//variable de tipo booleano (0 o 1)(falso o cierto)
  XXXXXXXXXXXXXXXXXXXXXXX		//bucle en i para explorar todo el array
  { XXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//si el mes del elemento actual es Abril
    {  XXXXXXXXXXXXXXXXXXXXXXXXXX	//imprimimos el nombre de la persona
       encontrado=1;			//ponemos encontrado a cierto
    }
  }
  XXXXXXXXXXXXXXX			//si no hemos encontrado ninguno de Abril
    printf("Ninguno\n");
}

void buscaUltimo(XXXXXXXXXXXXXXXX, XXXXXXXXX)		//funcion para buscar el ultimo cumpleaños del año, recibe el array de estructuras
{
  int posicUltimo=0;			//variable para guardar la posición del elemento buscado, inicialmente a 0
  XXXXXXXXXXXXXXXXXXXXXXX		//bucle para explorar el array desde el 2º elemento 
  {
    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX	//si el mes actual es mayor que el de posicUltimo
    {  
       XXXXXXXXXX			//actualizamos posicUltimo con i
    }
    else if XXXXXXXXXXXXXXXXXXXXXXX	//si el mes actual es igual que el de posicUltimo
    {
      XXXXXXXXXXXXXXXXXXX		//si el dia actual es mayor que el de posicUltimo
      {
         XXXXXXXXXXXXXXXX		//actualizamos posicUltimo con i
      }
    }
  }
  //mostramos los 3 datos del elemento buscado que está en la posición posicUltimo:
  muestraDatos(XXXXXXXXXXXXXXXXXX);
}

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




