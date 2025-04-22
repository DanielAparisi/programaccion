//PRACTICA S04
//============

//EJERCICIO 1º:
//ATENCION: realizar primero el ejercicio en un único fichero fuente (ej4.1.c) que contenga a main() y a las funciones de usuario.
//          Luego, una vez compilado y funcionando bien, dividirlo en 3 ficheros fuente:
//          * ej4.1.c:  contendrá sólo a main()
//          * misfunciones.c:  contendrá las funciones de usuario
//          * misfunciones.h:  contendrá las declaraciones prototipo de las funciones, con compilación condicional
//          Y volver a recompilarlo.

//FICHERO ej4.1.c:

XXXXXXXXXXXXXXXXXXX                //stdio.h
XXXX calcula_maximo_y_minimo(XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX);    //prototipos de funciones
XXXX calcula_media_y_varianza(XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX);

XXXXXXXXXXX                        //cabecera de main
{
  //a) Crea un programa (el main) con un array de floats con 10 elementos (y dale valores).
  float array[10] = {8.2, 0, 10.5, 20, 0, 15.6, 18.1, 7, 9.8, 12};

  //b) Crea una funcion que calcule el valor maximo y minimo de un array de floats.  //ver abajo
  //c) Crea una funcion que calcule la media y la varianza de un array de floats.    //ver abajo

  //d) Utiliza las funciones anteriores y muestra por pantalla el valor máximo, el mínimo, la media y la varianza.
  float maximo, minimo, media, varianza;		//variables para depositar los resultados
  calcula_maximo_y_minimo(XXXXXXXXXXXXXXXXXXXXXXXX);	//llamada a la función
  calcula_media_y_varianza(XXXXXXXXXXXXXXXXXXXXXXX);	//llamada a la función
  printf("El máximo es: %f\n", XXXXXX);		//imprimir el máximo, deberia ser 20
  printf("El mínimo es: %f\n", XXXXXX);		//imprimir el minimo, deberia ser 0
  printf(XXXXXXXXXXXX, XXXXX);			//imprimir la media, deberia ser 10.12
  printf(XXXXXXXXXXXX, XXXXXXXX);		//imprimir la varianza, deberia ser 41.3356
}

//FUNCIONES:
void calcula_maximo_y_minimo(float array[], int tam, float *max, float *min)
//recibe el array y las variables maximo y minimo por referencia
{
    XXXXXXXXXXXXXXXXXXX;		//guardar en maximo (*max) y minimo (*min) el elemento primero del array
    XXXXXXXXXXXXXXXXXXXXXXXX		//bucle for desde el elemento segundo del array
    {
        XXXXXXXXXXXXXXXX		//si el elemento actual es mayor que maximo
        {
            XXXXXXXXXXXXXXXXXXX		//guardar en maximo el elemento actual
        }
        XXXXXXXXXXXXXXXX		//si el elemento actual es menor que el minimo
        {
            XXXXXXXXXXXXXXXXXXX		//guardar en minimo el elemento actual
        }
    }
}

XXXX calcula_media_y_varianza(XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX)
//recibe el array y las variables media y varianza por referencia
{
    XXXXXXXXXXXXX			//inicializar a cero una variable de suma
    XXXXXXXXXXXXXXXXXXXXXX		//bucle for con i para recorrer todo el array
    {
        XXXXXXXXXXXXXXXXXX		//sumar en la variable suma el elemento actual
    }
    XXXXXXXXXXXXX			//guardar en media la suma dividido por el numero de elementos del array

    XXXXXXXXX				//inicializar de nuevo a cero la variable suma
    XXXXXXXXXXXXXXXXXXXXXX		//bucle para recorrer todo el array
    {
        XXXXXXXXXXXXXXXXXXXXXXXXX	//sumar en suma el calculo (array[i]-media) elevado al cuadrado (multiplicado por sí mismo)
    }
    XXXXXXXXXXXXXXXX			//guardar en varianza la suma dividido por el numero de elementos del array
}



