/*
   Exercicio 9
   Faca um programa que peca ao usuario digitar um numero
   inteiro e indique se o numero e positivo, negativo ou nulo.
*/
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero %d e positivo.\n", numero);
    } else if (numero < 0) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e nulo (zero).\n");
    }

    return 0;
}
