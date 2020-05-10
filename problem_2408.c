//PROBLEM 2408
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2408
#include <stdio.h>

int main() {
    int pontuacoes[3];
    int tmp = 0, i = 0, j = 0;

    scanf("%d %d %d", &pontuacoes[0], &pontuacoes[1], &pontuacoes[2]);
    //bubble sort
    for (i = 0; i < 3; i++) {
        for (j = i; j < 3; j++) {
            if (pontuacoes[i] > pontuacoes[j]) {
                tmp = pontuacoes[j];
                pontuacoes[j] = pontuacoes[i];
                pontuacoes[i] = tmp; 
            }
        }
    }

    printf("%d\n", pontuacoes[1]);

    return 0;
}