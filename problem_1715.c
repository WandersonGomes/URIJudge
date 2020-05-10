//PROBLEM 1715
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1715
#include <stdio.h>

int main() {
    int quantidade_jogadores = 0, quantidade_partidas = 0;
    int resultado = 0, gols = 0;
    int i = 0, j = 0, flag = 1;

    scanf("%d %d", &quantidade_jogadores, &quantidade_partidas);

    for (i = 0; i < quantidade_jogadores; i++) {
        flag = 1;
        for (j = 0; j < quantidade_partidas; j++) {
            scanf("%d", &gols);
            if (gols == 0) {
                flag = 0;
            }
        }

        if (flag) {
            resultado++;
        }
    }

    printf("%d\n", resultado);

    return 0;
}