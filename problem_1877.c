//PROBLEM 1877
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1877
#include <stdio.h>

#define SUBINDO 1
#define DESCENDO 0

int main() {
    int vales = 0, picos = 0;
    int qtd_torres = 0, qtd_picos = 0, i = 0;
    int anterior = 0, torre = 0, flag_sentido = SUBINDO;

    scanf("%d %d", &qtd_torres, &qtd_picos);

    for (i = 0; i < qtd_torres; i++) {
        scanf("%d", &torre);
        
        if (anterior != 0) {
            if ((torre < anterior) && (flag_sentido == SUBINDO)) {
                picos++;
                flag_sentido = DESCENDO;
            } else if ((torre > anterior) && (flag_sentido == DESCENDO)) {
                vales++;
                flag_sentido = SUBINDO;
            }
        }

        anterior = torre;
    }

    if ((picos == qtd_picos) && (vales == (qtd_picos - 1)))
        printf("beautiful\n");
    else
        printf("ugly\n");

    return 0;
}