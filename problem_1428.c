//PROBLEM 1428
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1428
#include <stdio.h>

int main() {
    int numero_testes = 0, numero_linhas = 0, numero_colunas = 0;
    long int resposta = 0;

    scanf("%d", &numero_testes);
    int i = 0;
    for (; i < numero_testes; i++) {
        scanf("%d %d", &numero_linhas, &numero_colunas);
        resposta = (numero_linhas/3) * (numero_colunas/3);
        printf("%ld\n", resposta);
    }

    return 0;
}