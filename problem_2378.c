//PROBLEM 2378
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2378
#include <stdio.h>

int main() {
    long long int entrada = 0, saida = 0, atual = 0;
    int flag = 0;
    int numero_leitura = 0, capacidade_maxima = 0, i = 0;
    scanf("%d %d", &numero_leitura, &capacidade_maxima);

    for (i = 0; i < numero_leitura; i++) {
        scanf("%lld %lld", &saida, &entrada);
        atual += entrada;
        atual -= saida;
        if (atual > capacidade_maxima) {
            flag = 1;
        }
    }

    if (flag) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}