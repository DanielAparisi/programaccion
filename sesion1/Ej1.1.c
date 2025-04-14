//Ej1.1.c

#include <stdio.h>
int main(){
    //a) Crea un programa que muestre por pantalla "Hola Mundo!".
    printf("Hola mundo");       //Imprimir el mensaje
    
    //b) Lee del teclado tu nombre y muestralo por pantalla.
    char nombre[20];
    printf("\nIntroduzca su nombre:\t");         //Declarar una variable de cadena de caracteres llamada nombre de 20 caracteres
    scanf("%39[^\n]s", nombre); //MUY BUENA         //Leer la variable desde el teclado, con gets(), fgets() o con scanf()
    printf("El nombre es :%s",nombre);    //Imprimir la cadena en pantalla
    
    //c) Lee del teclado un numero entero.
    int entero;     //Declarar una variable entera int
    printf("\nDame un entero: ");
    scanf("%d",&entero);        //Leer la variable desde el teclado con scanf
    printf("\nEl entero es: %d", entero);        //Imprimir la variable en pantalla
    
    //d) Lee del teclado un numero decimal.
    float decimal;      //Declarar una variable de tipo float
    printf("\nDame un numero decimal: ");
    scanf("\n%f", &decimal);      //Leer la variable desde el teclado con scanf
    printf("El decimal es :%.2f", decimal);      //Imprimir la variable en pantalla

    //e) Suma ambos numeros en una variable de tipo entero y muestra el resultado.
    int suma;
    suma = entero + decimal;      //declarar una variable entera suma y calcular en ella la suma de las 2 variables anteriores
    printf("\nSUMA_INT ES: %d + %f =  %d", entero ,decimal, suma);      //Imprimir la variable suma
        
    //f) Suma ambos numeros en una variable de tipo real y muestra el resultado.
    float suma_float;
    suma_float = entero + decimal;      //declarar una variable float suma_float y calcular en ella la suma de las 2 variables anteriores
     printf("\nSUMA_FLOAT ES : %d + %f = %.2f", entero ,decimal, suma_float);     //Imprimir la variable suma_float
    
    //g) Alade un comentario en el codigo que explique por que  los resultados son difierentes. 
    /*
         //Cuando hacemos una operacionde un tipo entero y decimal , internamente se procede ha hacer una conversion de datos, en este caso si decimal que el tipo de datoque tienela varable suma es de tipo int pues lo que hara sera truncra la variable float y luego sumarla (truncar todos sus deciales )      
    */ 
   
    return 0;
}

