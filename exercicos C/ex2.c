/*
   Exercicio 2
   Escreva um programa que leia dois numeros inteiros e exiba
   a soma, a diferenca, o produto e o resto da divisao entre eles.
*/
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    printf("\nSoma: %d\n", a + b);
    printf("Diferenca: %d\n", a - b);
    printf("Produto: %d\n", a * b);

    if (b != 0) {
        printf("Resto da divisao: %d\n", a % b);
    } else {
        printf("Resto da divisao: indefinido (divisao por zero)\n");
    }

    return 0;
}
