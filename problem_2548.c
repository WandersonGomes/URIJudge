//PROBLEM 2548
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2548
#include <stdio.h>

int main() {
    int numero_obras = 0, numero_danificadas = 0;
    int  custo_obra = 0, i = 0, inicio = 0;
    long int resultado = 0;

    while (scanf("%d %d", &numero_obras, &numero_danificadas) != EOF) {
        inicio = numero_obras - numero_danificadas;
        resultado = 0;

        for (i = 0; i < numero_obras; i++) {
            scanf("%d", &custo_obra);
            if (i >= inicio) {
                resultado += custo_obra;
            }
        }

        printf("%ld\n", resultado);
    }

    return 0;
}