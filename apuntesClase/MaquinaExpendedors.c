#include <stdio.h>

void main()
{

 // Declaracion de variables
 
 float euros_a_devolver;
 int falta_por_devolver, monedas_50c, monedas_20c, monedas_10c, monedas_5c;
 char monedas[2][20]={"moneda", "monedas"};

 // Captura de datos

do 
{
 printf("\nIntroduzca cantidad a devolver en Euros:");
 scanf("%f", &euros_a_devolver);
 falta_por_devolver=euros_a_devolver*100;
} while (falta_por_devolver%5);

 // Proceso
 
 monedas_50c = falta_por_devolver/50;
 falta_por_devolver=falta_por_devolver-50*monedas_50c;
 
 monedas_20c = falta_por_devolver/20;
 falta_por_devolver=falta_por_devolver-20*monedas_20c;
 
 monedas_10c = falta_por_devolver/10;
 falta_por_devolver=falta_por_devolver-10*monedas_10c;
 
 monedas_5c = falta_por_devolver/5;
 falta_por_devolver=falta_por_devolver-5*monedas_5c;
 
 // Mostrar resultado
 
 printf("\nLa cantidad de %.2f Euros se devolverÃ¡ de esta forma:\n", euros_a_devolver);
 
 printf("\n%d %s de 50 cÃ©ntimos", monedas_50c, (monedas_50c==1)? monedas[0]: monedas[1]);
 printf("\n%d %s de 20 cÃ©ntimos", monedas_20c, (monedas_20c==1)? monedas[0]: monedas[1]);
 printf("\n%d %s de 10 cÃ©ntimos", monedas_10c, (monedas_10c==1)? monedas[0]: monedas[1]);
 printf("\n%d %s de  5 cÃ©ntimos", monedas_5c, (monedas_5c==1)? monedas[0]: monedas[1]);

 return 0;
    
}