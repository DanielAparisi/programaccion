#include "misfunciones.h"

int main() {
  int i;
  setvbuf(stdout, NULL, _IONBF, 0);
  setlocale(LC_ALL, ""); 

  tCumpleanios UnaPersona; 			// Declaramos una variable UnaPersona de tipo tCumpleanios
  tCumpleanios Persona[MAX_CUMPLEANIOS]; 	// Declaramos un array Persona de tipo tCumpleanios

  //b) Crea una función que lea del teclado el nombre y la fecha de nacimiento de un alumno y lo guarde en la estructura UnaPersona:
  UnaPersona = tomaDatos();		//asignamos a UnaPersona lo que devuelva la función tomaDatos()
  printf("La variable UnaPersona tiene estos datos:\n");
  muestraDatos(UnaPersona);		//imprimir en pantalla los datos guardados en UnaPersona
  
  //c) Usa la función anterior para rellenar el array Persona:
  printf("\nIntroduce los datos del array:\n");
  for( i = 0; i < MAX_CUMPLEANIOS; i++) {
      Persona[i] = tomaDatos();
  }

  printf("\nLos datos introducidos son:\n");
  for( i = 0; i < MAX_CUMPLEANIOS; i++) {

    muestraDatos(Persona[i]);

  }

  printf("\nLos nacidos en Abril son:\n");
  buscaAbril( Persona, MAX_CUMPLEANIOS);

  //e) Crea una función que busque en el array el alumno que cumple los años más tarde (en el año) y lo muestre por pantalla:
  printf("\nLa persona que cumple años más tarde es:\n");
  buscaUltimo( Persona, MAX_CUMPLEANIOS);

  //f) Crea una función que busque en el array todos los alumnos cuyo cumpleaños coincide con el de otro alumno y muestra todos por pantalla:
  printf("\nLas personas con cumpleaños iguales son:\n");
  buscaIguales(Persona, MAX_CUMPLEANIOS);
  

  return 0;
}


