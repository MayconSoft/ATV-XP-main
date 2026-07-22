/*
   Exercicio 7
   Faca um programa que calcula e imprime a velocidade de um
   objeto. Os dados de distancia e tempo devem ser informados
   pelo usuario.
*/
#include <stdio.h>

int main(void) {
    float distancia, tempo, velocidade;

    printf("Digite a distancia percorrida (em metros): ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto (em segundos): ");
    scanf("%f", &tempo);

    if (tempo != 0) {
        velocidade = distancia / tempo;
        printf("\nVelocidade: %.2f m/s\n", velocidade);
    } else {
        printf("\nTempo nao pode ser zero!\n");
    }

    return 0;
}
