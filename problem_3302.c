//PROBLEM 3302
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3302
#include <stdio.h>

int main() {
    int quantidade_perguntas = 0, i = 0;
    int coisa = 0;

    scanf("%d", &quantidade_perguntas);

    for (i = 1; i <= quantidade_perguntas; i++) {
        scanf("%d", &coisa);
        printf("resposta %d: %d\n", i, coisa);
    }

    return 0;
}