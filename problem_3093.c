//PROBLEM 3093
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3093
#include <stdio.h>
#include <string.h>

#define MAX 1001

int main() {
    int numero_testes = 0, tam = 0;
    int i = 0, j = 0;
    char bolo_cartas[MAX];
    int resultado[4];

    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%s", bolo_cartas);
        tam = strlen(bolo_cartas);

        for (j = 0; j < 4; j++) {
            resultado[j] = 0;
        }

        for (j = 0; j < tam; j++) {
            if (bolo_cartas[j] == 'Q') {
                resultado[0] = 1;
            } else if (bolo_cartas[j] == 'J') {
                resultado[1] = 1;
            } else if (bolo_cartas[j] == 'K') {
                resultado[2] = 1;
            } else if (bolo_cartas[j] == 'A') {
                resultado[3] = 1;
            }
        }

        for (j = 0; j < 4; j++) {
            if (resultado[j] != 1) {
                break;
            }   
        }

        if (j == 4) {
            printf("Aaah muleke\n");
        } else {
            printf("Ooo raca viu\n");
        }
    }

    return 0;
}