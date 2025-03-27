GUION DE LA PRACTICA S01
//Ej1.1.c
XXXXXXXXX //include del stdio.h
XXXXXXXXX //Cabecera de main
{
//a) Crea un programa que muestre por pantalla "Hola Mundo!".
printf(XXXXXXXXX //Imprimir el mensaje
//b) Lee del teclado tu nombre y muestralo por pantalla.
XXXXXXXXXXXXXXX //Declarar una variable de cadena de caracteres llamada nombre de 20 caracteres
XXXXXXXXXXXXXX //Leer la variable desde el teclado, con gets(), fgets() o con scanf()
printf(XXXXXXXXXX //Imprimir la cadena en pantalla
//c) Lee del teclado un numero entero.
XXXXXXXXXXXX //Declarar una variable entera int
printf("Dame un entero: ");
XXXXXXXXXXX //Leer la variable desde el teclado con scanf
XXXXXXXXXXX //Imprimir la variable en pantalla
//d) Lee del teclado un numero decimal.
XXXXXXXXXXXX //Declarar una variable de tipo float
printf("Dame un numero decimal: ");
XXXXXXXXXXXX //Leer la variable desde el teclado con scanf
XXXXXXXXXXXX //Imprimir la variable en pantalla
//e) Suma ambos numeros en una variable de tipo entero y muestra el resultado.
XXXXXXXXXXXX //declarar una variable entera suma y calcular en ella la suma de las 2 variables anteriores
XXXXXXXXXXXX //Imprimir la variable suma
//f) Suma ambos numeros en una variable de tipo real y muestra el resultado.
XXXXXXXXXXXX //declarar una variable float suma_float y calcular en ella la suma de las 2 variables anteriores
XXXXXXXXXXXX //Imprimir la variable suma_float
//g) Añade un comentario en el codigo que explique por qué los resultados difieren.
//XXXXXXXXXXXXXXXXXXXXXXX Incluir comentario
}
//========================================================================================================
//Ej1.2.c
XXXXXXXXXXXXXXXX //include stdio
XXXXXXXXXXXX //cabecera de main
{
//a) Crea un programa que muestre por pantalla la frase "Copiar me impide aprender" 10000 veces.
XXXXXXXXXXXXXXX //bucle for con la variable i
{
XXXXXXXXXXXXXXXXXXXXX //imprimir el mensaje
}
//b) Lee del teclado un numero entero y muestra la frase anterior tan solo ese numero de veces.
XXXXXXXXXXXXXXXXX //declarar la variable num_veces
XXXXXXXXXXXXXXXX //leer por teclado la variable
XXXXXXXXXXXXXXX //bucle for con i que repita tantas veces como num_veces
{
XXXXXXXXXXXXXXXXXXXXX //imprimir el mensaje
}
//c) Crea un array denominado array de 6 elementos e incicializalo con 1,2,3,4,5,6.
XXXXXXXXXXXXXXXX //declarar e inicializar el array
//d) Muestra por pantalla el segundo, cuarto y sexto elemento del array (posiciones 1, 3 y 5).
XXXXXXXXXXXXXXXXXXXXX //imprimir los elementos de pociciones [1], [3] y [5]
//e) Recorre el array con un for e imprime todos los valores.
XXXXXXXXXXXXXXXXXXXXXXX //bucle for
XXXXXXXXXXXXXXXX //imprimir array[i]
//f) Haz lo mismo usando un while o un do while.
XXXXXXXXXXXXXXXXXX //inicializar la variable i
XXXXXXXXXXXXXXXXXX //bucle while
{ XXXXXXXXXXXXXXXXX //imprimir array[i]
XXXXXXXXXXXXXXX //incrementar la i
}
//g) Añade un comentario en el codigo que explique cual de las dos opciones (e o f) te ha resultado mas facil y por que.
XXXXXXXXXXXXXXXX //incluir comentario
}
//========================================================================================================
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