//PROBLEM 2297
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2297
#include <stdio.h>

int main() {
    long long int beto = 0, aldo = 0;
    int a = 0, b = 0, i = 0;
    int numero_rodadas = 0;
    int teste = 1;

    while (1) {
        aldo = 0;
        beto = 0;

        scanf("%d", &numero_rodadas);
        if (numero_rodadas == 0) {
            break;
        }

        for (i = 0; i < numero_rodadas; i++) {
            scanf("%d %d", &a, &b);
            aldo += a;
            beto += b;
        }

        printf("Teste %d\n", teste);
        
        if (beto > aldo) {
            printf("Beto\n");
        } else {
            printf("Aldo\n");
        }
        printf("\n");

        teste++;
    }

    return 0;
}