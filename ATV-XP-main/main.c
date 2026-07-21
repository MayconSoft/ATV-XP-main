#include <stdio.h>
#include "gorjeta.h"

int main(void) {
    double valor_conta, percentual;
    int num_pessoas;

    printf("=== Calculadora de Gorjeta ===\n");

    printf("Valor da conta: R$ ");
    if (scanf("%lf", &valor_conta) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Percentual de gorjeta (ex: 10 para 10%%): ");
    if (scanf("%lf", &percentual) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Numero de pessoas para dividir a conta: ");
    if (scanf("%d", &num_pessoas) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    double gorjeta = calcula_gorjeta(valor_conta, percentual);
    double total = calcula_total(valor_conta, percentual);

    if (gorjeta < 0 || total < 0) {
        printf("Valores invalidos: conta e percentual devem ser >= 0.\n");
        return 1;
    }

    double por_pessoa = divide_conta(total, num_pessoas);

    if (por_pessoa < 0) {
        printf("Numero de pessoas invalido.\n");
        return 1;
    }

    printf("\nGorjeta: R$ %.2f\n", gorjeta);
    printf("Total (conta + gorjeta): R$ %.2f\n", total);
    printf("Valor por pessoa (%d pessoas): R$ %.2f\n", num_pessoas, por_pessoa);

    return 0;
}
