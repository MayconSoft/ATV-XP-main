/*
   Exercicio 8
   Faca um programa que leia tres coeficientes reais a, b e c
   de uma equacao do segundo grau e informe na tela as suas
   raizes (considere para teste apenas valores que resultem
   em raizes reais).
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("\nO coeficiente 'a' nao pode ser zero (nao seria do 2 grau).\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("\nDelta negativo (%.2f): as raizes nao sao reais.\n", delta);
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\nDelta: %.2f\n", delta);
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}
