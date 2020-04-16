//PROBLEM 1943
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1943
#include <stdio.h>

//FUNCAO QUE MOSTRA O MENOR TOP QUE A POSICAO PERTENCE
void top(int posicao) {
    if (posicao == 1) {
        printf("Top 1\n"); return;
    }
    if (posicao <= 3) {
        printf("Top 3\n"); return;
    }
    if (posicao <= 5) {
        printf("Top 5\n"); return;
    }
    if (posicao <= 10) {
        printf("Top 10\n"); return;
    }
    if (posicao <= 25) {
        printf("Top 25\n"); return;
    }
    if (posicao <= 50) {
        printf("Top 50\n"); return;
    }

    printf("Top 100\n");
}

//PROGRAMA PRINCIPAL
int main() {
    int posicao = 0;
    scanf("%d", &posicao);

    top(posicao);
    return 0;
}