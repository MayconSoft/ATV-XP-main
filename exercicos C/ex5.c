/*
   Exercicio 5
   Calcule a area e o perimetro de um retangulo a partir
   da base e da altura informadas pelo usuario.
*/
#include <stdio.h>

int main(void) {
    float base, altura, area, perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}
