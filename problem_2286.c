//PROBLEM 2286
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2286
#include <stdio.h>

int main() {
    int numero_partidas = 0;
    char jogador1[11], jogador2[11];
    int dedos_jogador1 = 0, dedos_jogador2 = 0;
    int i = 0, teste = 1;

    while (1) {
        scanf("%d", &numero_partidas);
        if (numero_partidas == 0) {
            break;
        }

        scanf("%s%*c", jogador1);
        scanf("%s%*c", jogador2);

        printf("Teste %d\n", teste);
        for (i = 0; i < numero_partidas; i++) {
            scanf("%d %d", &dedos_jogador1, &dedos_jogador2);

            if ((dedos_jogador1 + dedos_jogador2)%2 == 0) {
                printf("%s\n", jogador1);
            } else {
                printf("%s\n", jogador2);
            }
        }
        printf("\n");

        teste++;
    }

    return 0;
}