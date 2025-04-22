#include <stdio.h>

# define MAX_CUMPLEANIOS 5
# define MAX_NOMBRE 20

enum tMes { Enero , Febrero , Marzo , Abril , Mayo , Junio , Julio , Agosto , Septiempre , Octubre ,
Noviembre , Diciembre };

struct _fecha {
  unsigned int dia ;
  enum tMes mes ;
};

typedef struct _fecha tFecha ;


typedef struct {
  char nombre [ MAX_NOMBRE ];
  tFecha fecha ;
} tCumpleanios ;


int main(void){
  tCumpleanios UnaPersona ; // Declaramos una variable de tipo tCumpleanios
  tCumpleanios Persona [ MAX_CUMPLEANIOS ]; // Declaramos un array de tipo tCumpleanios

  printf("nombre del alumno\n");
  //scanf("%20[^\n]s",tCumpleanios.nombre);

  return 0;
}