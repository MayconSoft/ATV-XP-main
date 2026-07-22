/*
   Exercicio 10
   Faca um programa que receba o valor de uma compra e um
   inteiro indicando o tipo do produto internacional. Se o
   tipo digitado for 0, cobra taxa de 10% do seu valor. Caso
   o tipo seja qualquer outro numero, cobra taxa de 20% do seu
   valor. Ao final, indique qual o valor total do produto a
   ser pago pelo usuario.
*/
#include <stdio.h>

int main(void) {
    float valorCompra, taxa, valorTotal;
    int tipoProduto;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite o tipo do produto (0 = nacional, outro = internacional): ");
    scanf("%d", &tipoProduto);

    if (tipoProduto == 0) {
        taxa = 0.10f;
    } else {
        taxa = 0.20f;
    }

    valorTotal = valorCompra + (valorCompra * taxa);

    printf("\nTaxa aplicada: %.0f%%\n", taxa * 100);
    printf("Valor total a pagar: %.2f\n", valorTotal);

    return 0;
}
