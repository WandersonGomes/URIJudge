//PROBLEM 2495
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2495
#include <stdio.h>

int main() {
    long long int numero_canetas = 0, i = 0, soma = 0;
    long long int numero = 0, soma_pa = 0;

    while (scanf("%lld", &numero_canetas) != EOF) {
        soma = 0;

        for (i = 0; i < numero_canetas-1; i++) {
            scanf("%lld", &numero);
            soma += numero;
        }

        soma_pa = ((numero_canetas + 1) * numero_canetas)/2;

        printf("%lld\n", soma_pa - soma);

    }

    return 0;
}