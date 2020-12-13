//PROBLEM 2915
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2915
#include <stdio.h>

#define MAX 52

//PROGRAMA PRINCIPAL
int main() {
    int cartas[MAX], numero_cartas = 0, i = 0;
    int marcadores = 0;

    scanf("%d", &numero_cartas);

    for (; i < numero_cartas; i++)
        scanf("%d", &cartas[i]);


    for (i = 0; i < (numero_cartas - 1); i++) {
        if (cartas[i] >= cartas[i+1]) {
            cartas[i] = -1;
            marcadores++;
        }
    }

    printf("%d\n", (numero_cartas-marcadores));

    return 0;
}