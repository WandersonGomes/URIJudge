//PROBLEM 3214
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3214
#include <stdio.h>

int main() {
    //dados
    int vazias = 0, encontradas = 0, troca = 0;
    int total = 0, resto = 0, atual = 0;

    //leitura
    scanf("%d %d %d", &vazias, &encontradas, &troca);

    //calculo
    atual = vazias + encontradas;
    while (1) {
        total += atual/troca;

        if ((atual/troca) == 0)
            break;
        
        atual = (atual/troca) + (atual % troca);
    }

    //apresenta resultado
    printf("%d\n", total);

    return 0;
}