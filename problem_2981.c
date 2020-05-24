//PROBLEM 2981
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2981
#include <stdio.h>

int main() {
    long long int tempo = 0;
    long long int valor_caixa = 0, custo_diario = 0;
    scanf("%lld %lld", &valor_caixa, &custo_diario);

    tempo = valor_caixa/custo_diario;

    if (tempo <= 9) {
        printf("A UFSC fecha dia %lld de setembro.\n", 21 + tempo);
    } else {
        printf("A UFSC fecha dia %lld de outubro.\n", tempo - 9);
    }

    return 0;
}