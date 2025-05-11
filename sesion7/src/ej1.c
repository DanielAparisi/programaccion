#include "misfunciones.h"

int main(int argc, char *argv[]) {
   if (argc!=2)
   {  printf("ERROR: debes aportar un nombre de fichero.\n"); exit(0);  }

   //b) Crea una función que escriba en el fichero algo leido del teclado. Si el fichero no existe debe crearlo. 
   //Si el fichero existe debe escribir al final del mismo.
   creaFichero(argv[1]);	//llamamos a la función creaFichero() y le pasamos el nombre del fichero

   //c) Crea una función que muestre el contenido del fichero por pantalla. Si el fichero no existe, emitir mensaje de error
   MuestraFichero(argv[1]);	//llamamos a la función muestraFichero() y le pasamos el nombre del fichero

   //d) Crea una función a la que se le pasen dos caracteres. La función debe recorrer el fichero y cambiar el primer carácter por el segundo
   char a, b;			//declaramos las dos variables de tipo char (a y b)
   printf("Dame la letra a buscar: ");  
   a = getchar(); 		//leemos en a la letra a buscar
   getchar();			//borramos el \n del buffer del teclado
   printf("Dame la letra de reemplazo: ");  
   scanf("%c", &a); 		//leemos en b la letra de reemplazo (otra forma con scanf)
   cambiaLetras(argv[1], a, b);	//llamamos a la funcion cambiaLetras() y le pasamos el nombre del fichero y las dos letras a y b
   MuestraFichero(argv[1]);	//llamamos a la función muestraFichero para ver el nuevo contenido del mismo
}
