//PROBLEM 2568
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2568
#include <stdio.h>

int main() {
    int dia_inicial = 0, dia_final = 0, valor = 0, constante = 0, quantidade_dias = 0;

    scanf("%d %d %d %d", &dia_inicial, &valor, &constante, &quantidade_dias);
    dia_final = quantidade_dias + dia_inicial;

    if (dia_inicial%2 == 0) {
        dia_inicial = 1;
    } else {
        dia_inicial = -1;
    }

    if (dia_final%2 == 0) {
        dia_final = 1;
    } else {
        dia_final = -1;
    }

    if (dia_final == dia_inicial) {
        printf("%d\n", valor);
    } else {
        if ((dia_inicial == -1) && (dia_final == 1)) {
            printf("%d\n", valor + constante);
        } else {
            printf("%d\n", valor - constante);
        }
    }

    return 0;
}