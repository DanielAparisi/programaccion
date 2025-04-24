
# include <stdio.h>
void main()
{
float price_kg, weight_kg, total_price, money_paid, change;
int correct;
do
{
printf ("Enter price per Kg:\t\t");
scanf ("%f", &price_kg );
} while (price_kg <=0.0) ;
do
{
printf ("Enter weight in Kg:\t\t");
scanf ("%f", &weight_kg );
} while ( weight_kg <= 0.0) ;
total_price = weight_kg * price_kg;
printf("\nThe total price is %.2f\n", total_price);
do
{
printf ("Enter money paid in Euro:\t");
scanf ("%f", &money_paid );
if (money_paid <=0)
{
correct = 0;
printf("\nYou must enter a positive amount of money\n");
}
else if (money_paid < total_price)
{
correct = 0;
printf("\nYou must enter an amount greater than %.2f Euros\n", total_price);
}
else
correct =1;
} while ( correct != 1) ;
change = money_paid - total_price;
printf("\nYour change is %.2f Euros\n", change);
}