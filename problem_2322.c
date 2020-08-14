//PROBLEM 2322
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2322
#include <stdio.h>

int main() {
    long int soma_correta = 0, soma_pecas = 0;
    int numero_pecas = 0, i = 0, peca = 0;

    scanf("%d", &numero_pecas);

    for (i = 1; i < numero_pecas; i++) {
        scanf("%d", &peca);
        soma_pecas += peca;
    }

    soma_correta = ((1 + numero_pecas)*numero_pecas)/2;

    printf("%ld\n", (soma_correta - soma_pecas));

    return 0;
}