//PROBLEM 1397
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1397
#include <stdio.h>

int main() {
    int numero_rodadas = 0, i = 0;
    int numero_og = 0, numero_filho = 0;
    int pontos_og = 0, pontos_filho = 0;

    while (1) {
        pontos_og = 0;
        pontos_filho = 0;

        scanf("%d", &numero_rodadas);
        if (numero_rodadas == 0) {
            break;
        }

        for (i = 0; i < numero_rodadas; i++) {
            scanf("%d %d", &numero_og, &numero_filho);
        
            if (numero_og > numero_filho) {
                pontos_og++;
            } else if (numero_og < numero_filho) {
                pontos_filho++;
            }
        }

        printf("%d %d\n", pontos_og, pontos_filho);
    }

    return 0;
}