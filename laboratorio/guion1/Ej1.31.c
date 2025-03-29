#include <stdio.h>

void main()
{
//DECLARACION DE VARIABLES
int a[]={2,4,6,8,10,1,3,5,7,9,11,13,25,22};
int i;
int menor, mayor;

//Apartado a

printf("Muestra por pantalla los elementos de valor par:\n");
for (i=0; i<14; i++)
{
    if (a[i]%2 == 0)
    {
        printf("%d\n", a[i]);
    }
}
printf("\n");

//Apartado b

printf("Muestra por pantalla los elementos que ocupan una posicion par:\n");
for (i=0; i<14; i++)
{
    if (a[i]%2 == 0)
    {
        printf("a[%d]\n", i);
    }
}
printf("\n");

//Apartado c

printf("Muestra por pantalla el elemento menor:\n");
menor = a[0];
for (i=1; i<14; i++)
{
    if (a[i]<menor)
    {
        menor= a[i];
    }
}
printf("%d\n", menor);

printf("\n");

//Apartado d

printf("Muestra por pantalla el elemento mayor que ocupa una posicion par:\n");
mayor = a[0];
for (i=0; i<14; i+=2)
{
    if (a[i]>mayor)
    {
        mayor = a[i];
    }
}
printf("%d\n", mayor);

printf("\n");

//Apartado e

printf("Copiar los divisibles por 3 en otro array del tamanyo apropiado.\n");
int cuenta = 0;
for (i=0; i<14; i++)
{
    if (a[i]%3 == 0)
    {
        cuenta++;
    }
}
int array_divisible[cuenta];
int indice = 0;
for (i = 0; i < 14; i++) 
{
    if (a[i] % 3 == 0) 
    {
        array_divisible[indice] = a[i];
        indice++;
    }
}
printf("Elementos divisibles por 3:\n");
    for (i = 0; i < cuenta; i++) {
        printf("%d\n", array_divisible[i]);
    }
}