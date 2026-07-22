/*
   Exercicio 4
   Leia dois numeros e, usando operadores relacionais, exiba
   qual deles e o maior (sem usar if - apenas exibindo o
   resultado da comparacao).
*/
#include <stdio.h>

int main(void) {
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("\nResultado de (a > b): %d\n", a > b);
    printf("Resultado de (a < b): %d\n", a < b);
    printf("Resultado de (a == b): %d\n", a == b);

    printf("\n\"%.2f e maior que %.2f\" -> %d\n", a, b, a > b);
    printf("\"%.2f e maior que %.2f\" -> %d\n", b, a, b > a);

    return 0;
}
