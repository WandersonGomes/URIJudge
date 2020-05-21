//PROBLEM 2394
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2394
#include <stdio.h>

#define MAX 1000000007 //numero primo para evitar o overflow

int main() {
    long long int tempo_total = 0, menor_tempo_total = MAX, tempo_volta = 0;
    int vencedor = 0;

    int numero_competidores = 0, numero_voltas = 0, i = 0, j = 0;
    scanf("%d %d", &numero_competidores, &numero_voltas);

    for (i = 0; i < numero_competidores; i++) {
        tempo_total = 0;
        for (j = 0; j < numero_voltas; j++) {
            scanf("%lld", &tempo_volta);
            tempo_total = (tempo_total + tempo_volta)%MAX;
        }

        if (tempo_total < menor_tempo_total) {
            vencedor = i + 1;
            menor_tempo_total = tempo_total;
        }
    }

    printf("%d\n", vencedor);

    return 0;
}