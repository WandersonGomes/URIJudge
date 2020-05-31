//PROBLEM 2516
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2516
#include <stdio.h>

int main() {
    int distancia = 0, velocidade1 = 0, velocidade2 = 0;
    double tempo = 0.00;

    while (scanf("%d %d %d", &distancia, &velocidade1, &velocidade2) != EOF) {
        if (velocidade1 > velocidade2) {
            tempo = (1.00 * distancia)/(velocidade1 - velocidade2);
            printf("%.2lf\n", tempo);
        } else {
            printf("impossivel\n");
        }
    }

    return 0;
}