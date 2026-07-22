/*
   Exercicio 1
   Declare variaveis para nome, idade e altura de uma pessoa,
   leia os valores com scanf() e exiba-os formatados com printf().
*/
#include <stdio.h>

int main(void) {
    char nome[100];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);

    return 0;
}
