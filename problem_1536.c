//PROBLEM 1536
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1536
#include <stdio.h>

int main() {
    int numero_testes = 0, i = 0, j = 0;
    int pontos_time1 = 0, pontos_time2 = 0;
    int saldo_time1 = 0, saldo_time2 = 0;
    int gols_time1 = 0, gols_time2 = 0;
    int gols_fora_time1 = 0, gols_fora_time2 = 0;

    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        saldo_time1 = 0;
        saldo_time2 = 0;
        pontos_time1 = 0;
        pontos_time2 = 0;
        //os dois jogos
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                scanf("%d x %d", &gols_time1, &gols_time2);
                gols_fora_time2 = gols_time2;
            } else {
                scanf("%d x %d", &gols_time2, &gols_time1);
                gols_fora_time1 = gols_time1;
            }

            saldo_time1 += (gols_time1 - gols_time2);
            saldo_time2 += (gols_time2 - gols_time1);

            if (gols_time1 >  gols_time2) {
                pontos_time1 += 3;
            }
            if (gols_time1 == gols_time2) {
                pontos_time1 += 1;
                pontos_time2 += 1;
            }
            if (gols_time2 > gols_time1) {
                pontos_time2 += 3;
            }
        }

        //verifica a vitoria dos times
        if (pontos_time1 > pontos_time2) {
            printf("Time 1\n");
        }
        if (pontos_time2 > pontos_time1) {
            printf("Time 2\n");
        }

        //empate
        if (pontos_time1 == pontos_time2) {
            if (saldo_time1 > saldo_time2) {
                printf("Time 1\n");
            }
            if (saldo_time2 > saldo_time1) {
                printf("Time 2\n");
            }
            if (saldo_time1 == saldo_time2) {
                if (gols_fora_time1 > gols_fora_time2) {
                    printf("Time 1\n");
                }
                if (gols_fora_time2 > gols_fora_time1) {
                    printf("Time 2\n");
                }
                if (gols_fora_time1 == gols_fora_time2) {
                    printf("Penaltis\n");
                }
            }
        }

    }

    return 0;
}