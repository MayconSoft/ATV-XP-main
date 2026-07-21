#ifndef GORJETA_H
#define GORJETA_H

/*
 * calcula_gorjeta
 * ---------------
 * Calcula o valor da gorjeta a partir do valor da conta e do
 * percentual desejado.
 *
 * valor_conta: valor total da conta (deve ser >= 0)
 * percentual:  percentual de gorjeta desejado, ex.: 10.0 para 10%
 *
 * retorna: valor da gorjeta (double). Retorna -1.0 se os
 *          parametros forem invalidos (valores negativos).
 */
double calcula_gorjeta(double valor_conta, double percentual);

/*
 * calcula_total
 * -------------
 * Calcula o valor total a pagar (conta + gorjeta).
 *
 * valor_conta: valor total da conta (deve ser >= 0)
 * percentual:  percentual de gorjeta desejado
 *
 * retorna: valor total (double). Retorna -1.0 se os
 *          parametros forem invalidos.
 */
double calcula_total(double valor_conta, double percentual);

/*
 * divide_conta
 * ------------
 * Divide o valor total (conta + gorjeta) entre um numero de pessoas.
 *
 * valor_total: valor total a ser dividido
 * num_pessoas: numero de pessoas (deve ser >= 1)
 *
 * retorna: valor por pessoa. Retorna -1.0 se num_pessoas < 1.
 */
double divide_conta(double valor_total, int num_pessoas);

#endif
