//PROBLEM 2443
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2443
#include <stdio.h>

//FUNCAO PARA ENCONTRAR O MDC
int mdc(int numero1, int numero2) {
    if (numero2 == 0) {
        return numero1;
    } else {
        return mdc(numero2, numero1%numero2);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int dividendo = 0, divisor = 0, mdc_valor = 0;
    int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
    scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);

    divisor = numero2 * numero4;
    dividendo = (numero4*numero1) + (numero2*numero3);

    mdc_valor = mdc(dividendo, divisor);

    dividendo = dividendo/mdc_valor;
    divisor = divisor/mdc_valor;

    printf("%d %d\n", dividendo, divisor);

    return 0;
}