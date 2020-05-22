//PROBLEM 2044
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2044
#include <stdio.h>

int main() {
    int numero_museus = 0, valor = 0, tmp_divida = 0;
    int i = 0, resultado = 0;

    while (1) {
        resultado = 0;
        scanf("%d", &numero_museus);
        if (numero_museus == -1) {
            break;
        }

        tmp_divida = 0;
        for (i = 0; i < numero_museus; i++) {
            scanf("%d", &valor);
            tmp_divida += valor;

            if (tmp_divida%100 == 0) {
                tmp_divida = 0;
                resultado++;
            }
        }

        printf("%d\n", resultado);
    }    

    return 0;
}