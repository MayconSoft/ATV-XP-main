#include <stdio.h>
#include <math.h>
#include "gorjeta.h"

static int testes_ok = 0;
static int testes_falhos = 0;

#define ASSERT_APROX(descricao, esperado, obtido) do { \
    if (fabs((esperado) - (obtido)) < 0.001) { \
        printf("[OK]   %s\n", descricao); \
        testes_ok++; \
    } else { \
        printf("[FALHOU] %s (esperado %.2f, obtido %.2f)\n", \
               descricao, (double)(esperado), (double)(obtido)); \
        testes_falhos++; \
    } \
} while (0)

void test_calcula_gorjeta_10_porcento(void) {
    double resultado = calcula_gorjeta(100.0, 10.0);
    ASSERT_APROX("gorjeta de 10% sobre R$100 deve ser R$10", 10.0, resultado);
}

void test_calcula_gorjeta_zero_porcento(void) {
    double resultado = calcula_gorjeta(50.0, 0.0);
    ASSERT_APROX("gorjeta de 0% deve ser R$0", 0.0, resultado);
}

void test_calcula_gorjeta_valor_invalido(void) {
    double resultado = calcula_gorjeta(-10.0, 10.0);
    ASSERT_APROX("conta negativa deve retornar -1 (erro)", -1.0, resultado);
}

void test_calcula_total_com_gorjeta(void) {
    double resultado = calcula_total(200.0, 15.0);
    
    ASSERT_APROX("total com 15% de gorjeta sobre R$200 deve ser R$230", 230.0, resultado);
}

void test_divide_conta_entre_pessoas(void) {
    double resultado = divide_conta(150.0, 3);
    ASSERT_APROX("R$150 dividido por 3 pessoas deve ser R$50 cada", 50.0, resultado);
}

void test_divide_conta_zero_pessoas(void) {
    double resultado = divide_conta(150.0, 0);
    ASSERT_APROX("dividir por 0 pessoas deve retornar -1 (erro)", -1.0, resultado);
}

int main(void) {
    printf("Executando testes da calculadora de gorjeta...\n\n");

    test_calcula_gorjeta_10_porcento();
    test_calcula_gorjeta_zero_porcento();
    test_calcula_gorjeta_valor_invalido();
    test_calcula_total_com_gorjeta();
    test_divide_conta_entre_pessoas();
    test_divide_conta_zero_pessoas();

    printf("\nResultado: %d passaram, %d falharam\n", testes_ok, testes_falhos);

    return testes_falhos == 0 ? 0 : 1;
}
