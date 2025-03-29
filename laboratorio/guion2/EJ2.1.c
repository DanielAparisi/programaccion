#include <stdio.h>
#include <math.h>

int main(){
    double a;
    a = 0.3 * 3 + 0.1;

    if( a == 1){
        printf("Iguales");
    } else {
        printf("Diferentes");
    }   
    //a es diferente de uno primero porque es un dato de tipo double, que tiene decimales y porque noes uno exactamente a = 0.99999999999999909999 debido a errores de aproximaccion del dato double
    printf("%.100d",a);
    if (fabs(a-1)<0.000001) { //fabs devuleve el valor absoluto float siempre postivio de su argumento 
        printf("Iguales");
    } else {
        printf("Diferentes");
    }
    return 0;
}
