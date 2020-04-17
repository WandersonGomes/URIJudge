//PROBLEM 2434
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2434
#include <stdio.h>

int main() {
    int numero_dias = 0, saldo = 0, menor_saldo = 0, operacao = 0;
    scanf("%d %d", &numero_dias, &saldo);
    menor_saldo = saldo;

    int i = 0;
    for (; i < numero_dias; i++) {
        scanf("%d", &operacao);
        saldo = saldo + operacao;
        if (saldo < menor_saldo) {
            menor_saldo = saldo;
        }
    }

    printf("%d\n", menor_saldo);

    return 0;
}