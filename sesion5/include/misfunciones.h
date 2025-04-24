#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
//los ficheros .h sirven también para guardar declaraciones globales de constantes simbólicas y tipos de datos enum y struct

#ifndef _SESION5	//compilacion condicional: "if not defined" (ifndef) la constante simbólica _SESION5
  #define _SESION5	//definimos la constante simbólica

  // Definicion de constantes:
  #define MAX_CUMPLEANIOS 5
  #define MAX_NOMBRE 20

  // Esto es un enumerado. Es un tipo entero unsigned int que unicamente puede tomar esos valores:
  //            1         2       3      4     5      6      7      8         9         10        11          12
  enum tMes { Enero=1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiempre, Octubre, Noviembre, Diciembre }; //LOS VALORES DEL TIPO ENUMERADOSON SIEMPRE LOS UNSIGNED INT %U o %d 

  // Esto es una estructura:
  struct _fecha
  {
    unsigned int dia; //%u o %d
    enum tMes mes;
  };

  // Renombramos al struct para que sea mas fácil de usar:
  typedef struct _fecha tFecha;

  // Declaramos otro struct y lo renombramos en la misma declaracion (dos instrucciones en una):
  typedef struct
  {
    char nombre[MAX_NOMBRE];
    tFecha fecha;			//una estructura dentro de otra
  } tCumpleanios;

  //declaraciones prototipo de mis 5 funciones (copiar las cabeceras de las funciones y poner ; al final):
  
  tCumpleanios tomaDatos(void);
  void muestraDatos(tCumpleanios dato);

#endif		//final del bloque de compilacion condicional



