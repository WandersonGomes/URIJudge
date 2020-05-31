//PROBLEM 1507
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1507
#include <stdio.h>
#include <string.h>

#define MAX 100001

int main() {
    char sequencia[MAX], subsequencia[101];
    int tamanho_sequencia = 0, tamanho_subsequencia = 0;    
    int numero_testes = 0, numero_subsequencias = 0; 
    int i = 0, j = 0, k = 0, w = 0;

    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%s", sequencia);
        tamanho_sequencia = strlen(sequencia);

        scanf("%d", &numero_subsequencias);

        for (j = 0; j < numero_subsequencias; j++) {
            scanf("%s", subsequencia);
            tamanho_subsequencia = strlen(subsequencia);
            w = 0;

            for (k = 0; k < tamanho_sequencia; k++) {
                if (subsequencia[w] == sequencia[k]) {
                    w++;
                }
                if (w == tamanho_subsequencia) {
                    break;
                }
            }

            if (w == tamanho_subsequencia) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }

    return 0;
}