#include "misfunciones.h"

int main() {

  setvbuf(stdout, NULL, _IONBF,0);
  setlocale(0, ""); // por defecto: configuración regional

  //a) Crea un programa (el main) con los enumerados y estructuras de la página anterior:
  tCumpleanios UnaPersona; 			// Declaramos una variable UnaPersona de tipo tCumpleanios
  tCumpleanios Persona[MAX_CUMPLEANIOS]; 	// Declaramos un array Persona de tipo tCumpleanios

  //b) Crea una función que lea del teclado el nombre y la fecha de nacimiento de un alumno y lo guarde en la estructura UnaPersona:
  UnaPersona = tomaDatos();		//asignamos a UnaPersona lo que devuelva la función tomaDatos()
  printf("La variable UnaPersona tiene estos datos:\n");
  muestraDatos(UnaPersona);		//imprimir en pantalla los datos guardados en UnaPersona
  /*
      //c) Usa la función anterior para rellenar el array Persona:
    printf("\nIntroduce los datos del array:\n");
      //bucle en i para recorrer todo el array
    {
          //asignamos al elemento actual del array Persona lo devuelto por la función tomaDatos()
    }
    printf("\nLos datos introducidos son:\n");
          //bucle en i para recorrer el array
    {
          //imprimir los datos del elemento actual del array con la función muestraDatos()
    }

    //d) Crea una función que busque en el array los nacidos en Abril y los muestre por pantalla:
    printf("\nLos nacidos en Abril son:\n");
        //llamamos a la función buscaAbril() pasándole el array como argumento de entrada (nombre y nº de elementos)

    //e) Crea una función que busque en el array el alumno que cumple los años más tarde (en el año) y lo muestre por pantalla:
    printf("\nLa persona que cumple años más tarde es:\n");
      //llamamos a la función buscaUltimo() pasándole el array como argumento de entrada

    //f) Crea una función que busque en el array todos los alumnos cuyo cumpleaños coincide con el de otro alumno y muestra todos por pantalla:
    printf("\nLas personas con cumpleaños iguales son:\n");
      //llamamos a la función buscaIguales() pasándole el array como argumento de entrada
  */
 
}


