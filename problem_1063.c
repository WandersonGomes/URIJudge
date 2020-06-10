//PROBLEM 1063
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1063
#include <stdio.h>

#define MAX 1000

//MONTA UMA PILHA ESTATICA
struct pilha {
    char valores[MAX];
    int qtd;
};
typedef struct pilha Pilha;


//PROGRAMA PRINCIPAL
int main() {
    int numero_vagoes = 0, i = 0, j = 0;
    char entrada[MAX], saida[MAX];
    Pilha pilha;

    while (1) {
        scanf("%d", &numero_vagoes);
        if (numero_vagoes == 0) {
            break;
        }

        for (i = 0; i < numero_vagoes; i++) {
            scanf(" %c", &entrada[i]);
        }

        for (i = 0; i < numero_vagoes; i++) {
            scanf(" %c", &saida[i]);
        }

        pilha.qtd = 0;
        i = 0;
        j = 0;

        while (1) {
            if ((pilha.qtd != 0) && (j < numero_vagoes) && (pilha.valores[pilha.qtd-1] == saida[j])) {
                pilha.qtd--;
                printf("R");
                j++;
            } else if (i < numero_vagoes) {
                pilha.valores[pilha.qtd] = entrada[i];
                pilha.qtd++;
                printf("I");
                i++;
            } else {
                break;
            }
        }

        if (pilha.qtd == 0) {
            printf("\n");
        } else {
            printf(" Impossible\n");
        }
    }
    return 0;
}