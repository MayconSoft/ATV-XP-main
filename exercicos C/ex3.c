/*
   Exercicio 3
   Leia a temperatura em graus Celsius e converta para
   Fahrenheit, usando a formula F = C * 9/5 + 32.
 */
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9.0f / 5.0f + 32.0f;

    printf("%.2f C equivalem a %.2f F\n", celsius, fahrenheit);

    return 0;
}
