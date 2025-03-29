
//Ej1.3.c
XXXXXXXXXXXXXXXXXXX //include stdio
XXXXXXXXXXXXX //cabecera de main
{
//Crear un array de tipo int llamado array inicializado a {2,4,6,8,10,1,3,5,7,9,11,13,25,22}.
XXXXXXXXXXXXXXXXX //declarar e inicializar el array
//a) Muestra por pantalla los elementos pares.
printf("Muestra por pantalla los elementos de valor par:\n");
XXXXXXXXXXXXXXXX //bucle for
{
XXXXXXXXXXXXXXX //if para detectar los valores pares
{ XXXXXXXXXXXXX } //imprimir el valor y la posicion del elemento array[i]
}
//b) Muestra por pantalla los elementos que ocupan una posicion par.
printf("Muestra por pantalla los elementos que ocupan una posicion par:\n");
XXXXXXXXXXXXXXXX //bucle for
{
XXXXXXXXXXXXX //if para detectar posicion par
{ XXXXXXXXXXXXX } //imprimir el valor y la posicion del elemento array[i]
}
//c) Muestra por pantalla el elemento menor del array.
printf("Muestra por pantalla el elemento menor:\n");
XXXXXXXXXXXXXXXX //declarar la variable "menor" e inicializarla con el primer elemento del array
XXXXXXXXXXXXXX //bucle for con i para explorar los elementos del array a partir del segundo
{
XXXXXXXXXXXXX //if para averiguar si el elemento array[i] es menor que "menor"
{ XXXXXXXXXXX } //en caso afirmativo, actualizar menor
}
XXXXXXXXXXXXXX //imprimir el elemento menor
//d) Muestra por pantalla el elemento mayor que ocupa una posicion par.
printf("Muestra por pantalla el elemento mayor que ocupa una posicion par:\n");
XXXXXXXXXXXXX //declarar la variable "mayor" e inicializarla con el elemento de posicion [0]
XXXXXXXXXXXXXX //bucle for con i para explorar los elementos de posicion par
{
XXXXXXXXXXXXX //if para averiguar si el elemento array[i] es mayor que "mayor"
{ XXXXXXXXXXX } //en caso afirmativo, actualizar mayor
}
XXXXXXXXXXXXXX //imprimir el mayor
//e) Copiar los divisibles por 3 en otro array del tamaño apropiado.
printf("Copiar los divisibles por 3 en otro array del tamaño apropiado.\n");
XXXXXXXXXXXXXX //declarar y poner a 0 una variable para contar cuantos elementos son divisibles por 3
XXXXXXXXXXXXX //bucle for con i para explorar todos los elementos del array
{ XXXXXXXXXXXX //if para averiguar si el elemento array[i] es divisible por 3
{ XXXXXXXXXXX } //en caso afirmativo, incrementar nuestro contador
}
XXXXXXXXXXX //declarar un "array_divisibles" con tantos elementos como diga el contador
XXXXXXXXXXX //declarar una variable indice a cero para este nuevo array
XXXXXXXXXXX //bucle for para explorar de nuevo todo el array original
{
XXXXXXXXXX //if para averiguar si array[i] es divisible por 3
{ XXXXXXXX //en caso afirmativo, meter array[i] en array_divisibles[indice]
XXXXXXXX //incrementar indice
}
}
XXXXXXXXXXX //bucle for para explorar todos los elementos de array_divisibles
{ XXXXXXXXXXXX } //imprimir el elemento array_divisibles[i]
}
//========================================================================================================
//Ej1.4.c
XXXXXXXXXXXXX //include stdio.h
XXXXXXXXXXXXX //include string.h para la funcion strlen
XXXXXXXXXXXXX //cabecera de main
{
//Declara dos cadenas de caracteres de tamaño 10 e inicializalas con algo.
XXXXXXXXXXX //declarar e inicializar cadena1
XXXXXXXXXXX //declarar e inicializar cadena2
//a) Leer la primera cadena de caracteres desde el teclado.
XXXXXXXXXXXX //usar scanf
//b) Muestra por pantalla la cadena de caracteres leida.
XXXXXXXXXXXX //imprimir la cadena1
//c) Muestra por pantalla el tamaño de esa cadena de caracteres.
XXXXXXXXXXXX //imprimir el tamaño en letras de cadena1 (strlen)
XXXXXXXXXXXX //imprimir el tamaño total del array cadena1 (sizeof)
//d) Muestra por pantalla la cadena de caracteres en orden inverso letra a letra usando un bucle
printf("Muestra por pantalla la cadena de caracteres en orden inverso usando un bucle:\n");
XXXXXXXXXXXX //bucle for con i para ir desde el ultimo caracter al primero
{
XXXXXXXXXXX //imprimir cadena1[i]
}
XXXXXXXXXXX //imprimir una linea en blanco ("\n")
}