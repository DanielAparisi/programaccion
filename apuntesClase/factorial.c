#include <stdio.h>
int Factorial(int);
void main() {
    int number, factorial;
do {
    printf("\nIntroduce an integer number:\t");
    scanf("%d", &number);
} while (number <= 0);
    factorial = Factorial(number);
    printf("\nEl factorial del número es: %d\n", factorial);
}

int Factorial(int input) {
    int result =1, i;
    for(i=2; i<=input; i++) {
        result *= i;
    }

    return(result);
}