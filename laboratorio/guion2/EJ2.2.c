#include <stdio.h>
#include <string.h>

int main(){
    char frase[20];
    printf("Introduzca una frase\n");
    fgets(frase, 20, stdin);
    printf("La frase es: %s\n",frase);

    return 0;
}