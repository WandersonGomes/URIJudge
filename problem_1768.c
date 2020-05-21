//PROBLEM 1768
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1768
#include <stdio.h>

int main() {
    int valor_base = 0;
    int tmp_numero_espacos = 1;
    int top_proximo = 1, i = 0, j = 0;

    while (scanf("%d", &valor_base) != EOF) {
        tmp_numero_espacos = 1;
        while (tmp_numero_espacos != 0) {
            tmp_numero_espacos = (valor_base - top_proximo)/2;
            
            for (i = 0; i < tmp_numero_espacos; i++) {
                printf(" ");
            }
            
            for (i = 0; i < top_proximo; i++) {
                printf("*");
            }
            printf("\n");

            top_proximo += 2;
        }

        top_proximo = 1;
        for (i = 0; i < 2; i++) {
            tmp_numero_espacos = (valor_base - top_proximo)/2;
            for (j = 0; j < tmp_numero_espacos; j++) {
                printf(" ");
            }
            for (j = 0; j < top_proximo; j++) {
                printf("*");
            }
            printf("\n");

            top_proximo += 2;
        }
        top_proximo = 1;
        printf("\n");
    }

    return 0;
}