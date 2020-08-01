//PROBLEM 1022
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1022
#include <stdio.h>

//FUNCAO QUE CALCULA O MDC ENTRE DOIS NUMEROS DE FORMA RECURSIVA
int mdc(int numero1, int numero2) {
    if (numero2 == 0) {
        return numero1;
    }
    return mdc(numero2, numero1%numero2);
}

//FUNCAO QUE RETORNA O VALOR ABSOLUTO
int abs(int numero) {
    if (numero < 0) {
        return -numero;
    }
    return numero;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_testes = 0, i = 0;
    int numerador1 = 0, numerador2 = 0;
    int denominador1 = 0, denominador2 = 0;
    int numerador_resultado = 0, denominador_resultado = 0;
    int mdc_resultado = 0;
    char operacao = '+';

    scanf("%d", &numero_testes);
    
    for (i = 0; i < numero_testes; i++) {
        scanf("%d / %d %c %d / %d", &numerador1, &denominador1, &operacao, &numerador2, &denominador2);

        //operacao de subtracao
        if (operacao == '-') {
            denominador_resultado = denominador1 * denominador2;
            numerador_resultado = (numerador1 * denominador2) - (numerador2 * denominador1);
        }
        //operacao de soma
        if (operacao == '+') {
            denominador_resultado = denominador1 * denominador2;
            numerador_resultado = (numerador1 * denominador2) + (numerador2 * denominador1);
        }
        //operacao de multiplicacao
        if (operacao == '*') {
            numerador_resultado = numerador1 * numerador2;
            denominador_resultado = denominador1 * denominador2;
        }
        //operacao de divisao
        if (operacao == '/') {
            numerador_resultado = numerador1 * denominador2;
            denominador_resultado = numerador2 * denominador1;
        }

        mdc_resultado = abs(mdc(numerador_resultado, denominador_resultado));

        printf("%d/%d = %d/%d\n", numerador_resultado, denominador_resultado, numerador_resultado/mdc_resultado, denominador_resultado/mdc_resultado);
    }

    return 0;
}