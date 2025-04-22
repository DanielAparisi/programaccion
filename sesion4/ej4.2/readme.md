/============================================================================================================
//EJERCICIO 2º:
//ATENCION: realizar primero el ejercicio en un único fichero fuente (ej4.2.c) que contenga a main() y a las funciones de usuario.
//          Luego, una vez compilado y funcionando bien, dividirlo en 3 ficheros fuente:
//          * ej4.2.c:  contendrá sólo a main()
//          * misfunciones.c:  contendrá las funciones de usuario
//          * misfunciones.h:  contendrá las declaraciones prototipo de las funciones, con compilación condicional
//          Y volver a recompilarlo.

//FICHERO ej4.2.c:

XXXXXXXXXXXXXXXX				//stdio.h
XXXX muestraArray(XXXXXXXXXXXXXXXXXXXXX);       //prototipos de funciones
XXXX anulaMaximo(XXXXXXXXXXXXXXXXXXXXXX);
XXXX intercambiaMaximo(XXXXXXXXXXXXXXXXXXXXX);
XXXX ordenar(XXXXXXXXXXXXXXXXXXXXXXXXXXXX);

XXXXXXXXX		//cabecera de main
{
  //a) Crea un programa con un array de doubles de 10 elementos (y dale valores).
  double array[10] = {8.2, 0, 10.5, 20, 0, 15.6, 18.1, 7, 9.8, 12};
  printf("El array inicial es: ");
  x(XXXXXXXX, XXXXXXXX);	//imprimir todo el array

  //b) Crea una funcion "anulaMaximo" que busque el valor maximo de un array y lo cambie por un 0.  //ver abajo
  //c) Crea una funcion "intercambiaMaximo" que busque el valor maximo de un array y lo intercambie por el primer elemento del array.  //ver abajo
  //d) Crea una funcion "ordenar" que ordene ascendentemente el array.    //ver abajo

  //e) Comprueba el funcionamiento de estas funciones: 
  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función anulaMaximo
  printf("Resultado de la primera funcion:  ");
  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función muestraArray

  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función intercambiaMaximo
  printf("\nResultado de la segunda funcion:  ");
  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función muestraArray

  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función ordenar
  printf("\nResultado de la tercera funcion:  ");
  XXXXXXXXXXXXXXXXXXXXX			//llamada a la función muestraArray
}

//FUNCIONES:
XXXX muestraArray(XXXXXXXXXXXXX)   //recibimos el array: su dirección de inicio y su tamaño
{
   XXXXXXXXXXXXXXXXXXXXXXXXX       //bucle para recorrer todo el array
      XXXXXXXXXXXXXXXXXXXXXXXXXX   //imprimir dato array[i]
   XXXXXXXXXXXXX                   //avanzamos de linea en la pantalla
}

XXXX anulaMaximo(XXXXXXXXXXXXXX)   //recibimos el array: su dirección de inicio y su tamaño
{
   XXXXXXXXXXXXXXXXXXXXX           //declarar variable posicMax para guardar la posición del elemento máximo encontrado, inicializada a 0
   XXXXXXXXXXXXXXXXXXXXX   	   //bucle para recorrer el array desde la posición segunda
      XXXXXXXXXXXXXXXXXXXXXXXX     //si encontramos un nuevo máximo
         XXXXXXXXXXXXXXXXX         //actualizamos la variable posicMax
   XXXXXXXXXXXXXXXXXXXXX           //ponemos un 0 en la posición del máximo
}

XXXX intercambiaMaximo(XXXXXXXXXXXXXXXXXXXXX)   //recibimos el array: su dirección de inicio y su tamaño
{
   XXXXXXXXXXXXXXXXXXXXX       //declarar variable posicMax e inicializarla a 0
   XXXXXXXXXXX                 //declarar variable auxiliar para el intercambio
   XXXXXXXXXXXXXXXXXXXXXXXXX   //bucle para recorrer el array desde la posición segunda
      XXXXXXXXXXXXXXXXXXXXXX   //si encontramos un nuevo máximo
         XXXXXXXXXXXXX         //actualizamos la variable posicMax
   XXXXXXXXXXXXXXXXXXXXXX      //intercambiamos las posiciones 0 y posicMax
   XXXXXXXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXX
}

XXXX ordenar(XXXXXXXXXXXXXXXXX)    //recibimos el array: su dirección de inicio y su tamaño 
{                                  //ordenación ascendente por el método de la BURBUJA:
   XXXXXXXXXXX                     //declarar variable auxiliar para el intercambio
   for (int i=tam-1; i>0; i--)     //i indica el numero de pasadas que faltan
      for (int j=0; j< i; j++)      //j es el indice del elemento actual a intercambiar
         XXXXXXXXXXXXXXXXXXXXXXXX  //si el elemento [j] y su siguiente [j+1] están mal ordenados
         {  XXXXXXXXXX; XXXXXXXXXXXXXXXXXX; XXXXXXXXXXX;  }     //intercambiar elementos [j] y [j+1]
}



//Comando de compilación:  gcc ej4.1.c misfunciones.c -o ej4
