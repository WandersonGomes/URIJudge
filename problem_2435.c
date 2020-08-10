//PROBLEM 2435
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2435
#include <stdio.h>

int main() {
    int charrete1 = 0, charrete2 = 0;
    int distancia1 = 0, velocidade1 = 0;
    int distancia2 = 0, velocidade2 = 0;
    double tempo1 = 0.00, tempo2 = 0.00;

    scanf("%d %d %d", &charrete1, &distancia1, &velocidade1);
    scanf("%d %d %d", &charrete2, &distancia2, &velocidade2);

    tempo1 = (distancia1 * 1.00)/velocidade1;
    tempo2 = (distancia2 * 1.00)/velocidade2;

    if (tempo1 < tempo2) {
        printf("%d\n", charrete1);
    } else {
        printf("%d\n", charrete2);
    }

    return 0;
}