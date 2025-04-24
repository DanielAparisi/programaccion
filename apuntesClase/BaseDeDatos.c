
// PASO DE ESTRUCTURAS POR VALOR Y POR REFERENCIA
// Programa para cargar desde teclado datos de consumo telefónico mensual
#include <stdio.h>
#define MAX 50 //nº de elementos del array de estructuras
struct datotfno //declaración del tipo estructura
{
int mes,anyo;
float euros;
};
void introducir(struct datotfno *tf); //declaraciones prototipo de funciones auxiliares
void imprimir(struct datotfno tf);
int main()
{
int n,i;
struct datotfno tfno[MAX]; //array de estructuras
system("clear"); //borrar pantalla, en Windows es: system("cls");
printf("Introduzca los datos de consumo telefónico mensual:\n\n");
for (i=0; i<MAX; i++) //bucle para introducción de registros
{
printf("\nRegistro Nº %d:\n", i+1);
introducir(&tfno[i]); //estructura pasada POR REFERENCIA
if (tfno[i].mes==0) break;
}
n=i; //guardamos el nº máximo de registros introducidos
printf("\nLos datos introducidos son:\n");
for (i=0; i<n; i++) //bucle de presentación de datos en pantalla
{
imprimir(tfno[i]); //estructura pasada POR VALOR
}
printf("\nPulse Enter para terminar."); getchar(); // O BIEN en Windows: system("pause");
}
void introducir(struct datotfno *tf) //función para introducción de datos por teclado
{
int scn;
do
{ printf("Nº de Mes (0=Terminar): ");
scn=scanf("%d", &tf->mes); //scanf devuelve el nº de datos correctamente leídos
}
while (tf->mes<0 || tf->mes>12 || scn!=1);
if (tf->mes==0) return;
do
{ printf("Año: "); scn=scanf("%d", &tf->anyo); }
while (tf->anyo<0 || scn!=1);
do
{ printf("Euros Telefono: "); scn=scanf("%f",&tf->euros); }
while (tf->euros<0 || scn!=1);
}
void imprimir(struct datotfno tf) //función para presentación de datos en pantalla
{
printf("Nº de Mes: %d\tAño: %d\tConsumo: %.2f\n", tf.mes, tf.anyo, tf.euros);
}