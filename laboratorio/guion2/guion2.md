
GUION DE LA PRACTICA S02
//ej2.1.c
XXXXXXXXXXXXX //Include stdio.h
XXXXXXXXXXXXX //Include math.h (para la funcion fabs)
XXXXXXXXXXX //cabecera de main
{
//a) En una variable de tipo double guarda el resultado de multiplicar 0.3 por 3, y luego sumarle 0.1.
double a = 0.3 * 3 + 0.1;
//b) Compara esa variable con 1 y muestra por pantalla si son Iguales o Diferentes.
XXXXXXXXXXX //if para averiguar si a es igual que 1
XXXXXXXXXXXX //imprimir "Iguales"
XXXXX //si no
XXXXXXXXXXXX //imprimir "Diferentes"
//c) Añade un comentario en el codigo que explique por que ambos numeros son diferentes.
//d) Muestra por pantalla la variable con 100 decimales.
XXXXXXXXXXXX //printf con 100 decimales
//e) Compara la variable con 1 de manera "correcta" y muestra por pantalla si son Iguales o Diferentes.
if (fabs(a-1)<0.000001) //fabs devuelve el valor absoluto float (siempre positivo) de su argumento
XXXXXXXXXXXXXX //imprimir "Iguales"
XXXX //si no
XXXXXXXXXXXXXX //imprimir "Diferentes"
}
//=========================================================================================================
//ej2.2.c
XXXXXXXXXXXXXXXXX //include stdio
XXXXXXXXXXXXXXXXX //include string.h (para la funcion strlen y strcat)
XXXXXXXXXXXXXX //cabecera de main
{
//a) Crea una variable que sea una cadena de caracteres de tamaño 20 y guarda en ella un pequeño texto leido del teclado
XXXXXXXXXXXXXXXX //declarar la cadena
printf("Introduce un texto con algunas minúsculas: ");
scanf("%19[^\n]s", cadena); //lee desde el teclado una cadena de hasta 19 caracteres y permite espacios en blanco
//el único caracter terminador de datos es la tecla Enter (\n)
//OTRA SOLUCION PEOR: fgets(cadena,20,stdin); //leer la cadena por teclado, con hasta 19 caracteres
//deja en la cadena el \n final de la tecla Enter, y hay que eliminarlo
//Para eliminar el \n final (si existe):
//if (cadena[strlen(cadena)-1] == '\n') //si el último caracter de la cadena es el \n
// cadena[strlen(cadena)-1] = '\0'; //convertirlo en un \0
//b) Cambia las letras minusculas por mayusculas
XXXXXXXXXXXXXXXXXXX //imprimir la cadena original inicial
int i=0; //variable para el control del bucle
XXXXXXXXXXXXXX //bucle WHILE con i para explorar la cadena letra a letra hasta el caracter final \0
{
XXXXXXXXXXXXX //si el caracter actual está entre 97 y 122 (códigos ASCII de las letras minusculas)
XXXXXXXXXXXXXXXX //le restamos 32 al caracter actual para convertirlo a mayusculas
XXXXXXXXX //incrementamos i
}
XXXXXXXXXXXXXX //imprimir la nueva cadena modificada
//c) Cambia las vocales por '*'
i=0;
XXXXXXXXXXXXXXX //bucle WHILE con i para explorar la cadena hasta el caracter final \0
{
XXXXXXXXXXXX //si el caracter es una vocal mayuscula
XXXXXXXXXXXXXX //cambiar el caracter por un '*'
XXX //incrementamos la i
}
XXXXXXXXXXXXX //imprimir la cadena modificada
//d) Crea una segunda cadena de caracteres y concaténala con la primera
XXXXXXXXXXXXXX //declarar e inicializar con " HOLA" una segunda cadena2
XXXXXXXXXXXXX //añadir esta cadena2 al final de cadena (strcat)
XXXXXXXXXXXX //imprimir la cadena modificada
//e) Pon un caracter \0 en medio de la cadena de caracteres y muestra el resultado por pantalla
XXXXXXXXXXXXXXXX //poner un \0 en el cuarto caracter de la cadena
XXXXXXXXXXXXX //imprimir la cadena modificada
//f) Añade un comentario en el codigo que explique por qué no muestra la cadena entera.
}
//===========================================================================================================
//EJERCICIO 3:
//Programa compuesto por 3 ficheros fuente: ej2.3.c + misfunciones.c + misfunciones.h
//Comando de compilación: gcc ej2.3.c misfunciones.c -o ej2.3
//a) Crea un fichero "misfunciones.h" donde colocar las declaraciones prototipo de tus funciones (ver abajo).
//b) Crea un fichero "misfunciones.c" donde colocar las definiciones de tus funciones.
//c) Crea una funcion encuentra_minimo que reciba como argumento de entrada un array de enteros (su nombre y su nº de elementos) y devuelva el
valor minimo del array. Escríbela en el fichero misfunciones.c
//d) Crea una funcion que calcula_media que reciba un array de enteros (su nombre y su nº de elementos) y devuelva el valor medio de sus
elementos. Escríbela en el fichero misfunciones.c
//e) Crea un programa main con un array de enteros de 8 elementos. Escríbelo en el fichero ej2.3.c.
//FICHERO ej2.3.c:
XXXXXXXXXXXXXX //include stdio
#include "misfunciones.h" //incluimos aquí nuestro fichero de cabecera misfunciones.h (entre comillas dobles)
XXXXXXXXXXXX //cabecera de main
{
XXXXXXXXXXXXX //declarar el array e inicializarlo con 8 valores cualesquiera
//f) Utiliza las dos funciones anteriores y muestra por pantalla el valor minimo y la media del array.
XXXXXXXXXXXXXX //declarar una variable "minimo" y cargarla con lo que devuelva la funcion encuentra_minimo
XXXXXXXXXXXXXX //declarar una variable "media" y cargarla con lo que devuelva la funcion calcula_media
XXXXXXXXXXXXXX //imprimir la variable minimo
XXXXXXXXXXXXXX //imprimir la variable media
//g) Crea un array de enteros de mas de 20 elementos y utiliza con él las funciones anteriores. Muestra los dos resultados por pantalla
(desde el main).
XXXXXXXXXXXXXX //declarar e inicializar el array
XXXXXXXXXXXXXX //calcular la variable minimo llamando a encuentra_minimo
XXXXXXXXXXXXXX //calcular la variable media llamando a calcula_media
XXXXXXXXXXXXXX //imprimir la variable minimo
XXXXXXXXXXXXXX //imprimir la variable media
}
//------------------------------------------------------------------------------------------------------
//FICHERO misfunciones.c:
XXXXXXXXXXXXXX //cabecera de la funcion encuentra_minimo (mirar en misfunciones.h el prototipo deseado)
{ int minimo = array[0]; //variable local, se carga con el elemento primero del array
XXXXXXXXXXXX //bucle con i para explorar el array desde su segundo elemento
{ XXXXXXXXXXXX //si encontramos un elemento menor que minimo
XXXXXXXXXXXXX //metemos en minimo ese elemento
}
XXXXXXXXXXX //retorna el valor del minimo
}
XXXXXXXXXXXXXX //cabecera de la funcion calcula_media (mirar en misfunciones.h el prototipo deseado)
{ XXXXXXXXXXXXX //declarar variable suma e inicializarla a cero
XXXXXXXXXXXX //bucle con i para explorar todo el array
XXXXXXXXXX //vamos sumando en suma todos los elementos del array
XXXXXXXXXXXX //declarar variable media (que pueda contener decimales) y calcular su valor
XXXXXXXXXXXX //retornar la variable media
}
//---------------------------------------------------------------------------------------------------------
//FICHERO misfunciones.h:
#include <stdio.h>
#ifndef MISFUNCIONES_H //compilacion condicional, se compila sólo si "no está definida" (ifndef) la constante MISFUNCIONES_H
#define MISFUNCIONES_H //define la constante MISFUNCIONES_H (basta su nombre, no hace falta darle valor)
int encuentra_minimo(int array[], int num); //prototipo de la funcion encuentra_minimo (recibe un array de datos int y su numero de
elementos)
float calcula_media(int array[], int num); //prototipo de la funcion calcula_media (recibe un array de datos int y su numero de
elementos)
#endif //final de la compilacion condicional