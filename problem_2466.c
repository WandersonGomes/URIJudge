//PROBLEM 2466
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2466
#include <stdio.h>
#include <string.h>

#define MAX 64

int main() {
    int linha[MAX], numero_bolas = 0, i = 0, j = 0;
    int aux = 0;

    scanf("%d", &numero_bolas);

    memset(linha, 0, sizeof(linha));
    for (i = 0; i < numero_bolas; i++) {
        scanf("%d", &linha[i]);
    }

    for (i = 0; i < numero_bolas; i++) {
        aux = numero_bolas - i;
        for (j = 0; j < (aux - 1); j++) {
            if (linha[j] != linha[j+1]) {
                linha[j] = -1;
            } else {
                linha[j] = 1;
            }
        }
    }

    if (linha[0] == 1) {
        printf("preta\n");
    } else {
        printf("branca\n");
    }

    return 0;
}