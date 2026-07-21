#include "gorjeta.h"

double calcula_gorjeta(double valor_conta, double percentual) {
    if (valor_conta < 0 || percentual < 0) {
        return -1.0;
    }
    return valor_conta * (percentual / 100.0);
}

double calcula_total(double valor_conta, double percentual) {
    if (valor_conta < 0 || percentual < 0) {
        return -1.0;
    }
    return valor_conta + calcula_gorjeta(valor_conta, percentual);
}

double divide_conta(double valor_total, int num_pessoas) {
    if (num_pessoas < 1) {
        return -1.0;
    }
    return valor_total / num_pessoas;
}
