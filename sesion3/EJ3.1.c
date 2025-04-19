#include <stdio.h>		
#define MAX 12			
void muestraArray(float array[], int tam);	
void calcula_maximo_y_minimo(float array[], int tam, float *max, float *min);
float calcula_media(float array[], int tam);
void recorrerArrayFloat(float array[], int tam);
void recorrerArrayChar(float array[], int tam);

int main() {
    //a) Crea un programa (el main), y en él un array de floats llamado temperaturas con 12 elementos (y dale valores).
    float temperaturas[MAX] = {112.32,564.33,786.42,982.765,821.111,230.960,456.720,347.212,753.999,503.659,432.005,348.654};	//declarar array temperaturas e inicializar con 12 valores cualesquiera

    //b) Crea una función que muestre todas las temperaturas.
    printf("El array es:\n");
    muestraArray(temperaturas,MAX);

    //c) Muestra por pantalla el valor máximo, el mínimo y la media de las temperaturas.
    float maximo,minimo,media;		//declarar las 3 variables maximo, minimo y media para depositar los resultados
    calcula_maximo_y_minimo(temperaturas,12,&maximo,&minimo);		//llamar a la funcion calcula_maximo_y_minimo, pasándole el array y las variables maximo y minimo POR REFERENCIA
    media = calcula_media(temperaturas, 12);	//llamar a la funcion calcula_media, pasándole el array y guardando el resultado en la variable media
    printf("El valor maximo es:%.2f\n", maximo);		
    printf("El valor minimo  es:%.2f\n", minimo);		
    printf("la media es:%.2f\n", media);		

    //d) Crea una segunda función que muestre todas las temperaturas pero recorriendola con un puntero. Y haz que muestre las posiciones de memoria por las que va pasando. 
    printf("Recorrido con un puntero float:\n");
    recorrerArrayFloat( temperaturas, 12);		//llamar a la funcion recorrerArrayFloat, que imprime los datos correctamente
    printf("\n");
 
    //e) Crea una tercera función que muestre todas las temperaturas pero recorriendola con un puntero de tipo char. Muestra también las posiciones de memoria que va leyendo.
    printf("Recorrido con un puntero char:\n");

    recorrerArrayChar(temperaturas, 12);		//llamar a la funcion recorrerArrayChar, que imprime los datos mal
    printf("\n");

    //f) Añade un comentario en el código en el que expliques por qué los punteros tienen que tener tipo.
    //Comentario: Para que sepan el tamaño en bytes de los datos apuntados, y el código interno en que están almacenados

}
//FUNCIONES:
void muestraArray(float array[], int numElem) {
    for(int i = 0; i < numElem; i++)		//bucle en i para recorrer todo el array
    {
        printf("%.2f\n", array[i]); 	//imprime los datos del array separados por un espacio
    }
    printf("\n");			//pasar a la siguiente linea en pantalla
}

void calcula_maximo_y_minimo(float array[], int numElem, float *max, float *min){
    *max = *min = array[0];			//guardar en maximo (*max) y en minimo (*min) el elemento primero del array
    for( int i = 1; i < numElem; i++){
        if(array[i] > *max)		//si el elemento actual es mayor que maximo
        {
            *max = array[i];		//guardar en maximo el elemento actual
        }
        if(array[i] < *min)		//si el elemento actual es menor que el minimo
        {
            *min = array[i];		//guardar en minimo el elemento actual
        }
    }
}


float calcula_media(float array[], int numElem){
    int suma = 0;
   		
    for( int i = 0; i< numElem; i++) {
        suma += array[i];
    } 
    return 	suma / numElem	;//retornar la suma dividido por el numero de elementos del array
}

void recorrerArrayFloat(float array[], int numElem){
    //recorrido del array con un puntero a float
  float *p = &array[0]; //	 eso es quivalente array y &array[0] ------->> para un puntero enl nombre puro del array apuntada a la primera pos del arrray
  int i;		//declarar un puntero p e inicializarlo para que apunte al comienzo del array

  for( i = 0; i < numElem; i++){
    printf("dato %.2f\t y la Direccion %p\n", *p, p); //%p especificador del puntero
    p++;
  }
}

void recorrerArrayChar(float array[], int numElem) {
    char *p = (char *)array;	//CONVERSION INPLICTA DE TIPOS DE DATOS CON PUNTEROS
  
  for ( int i = 0; i < numElem; i++){
    printf("dato %.2f\t y lA Direccion %p\n",  (float)*p, p);	//imprimir el elemento apuntado por p (sin warnings) y su direccion
    p++;				//incrementar el puntero p
  }
}