//PROBLEM 2423
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2423
#include <stdio.h>

//FUNCAO QUE RETORNA O MENOR VALOR ENTRE DOIS NUMEROS
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

//PROGRAMA PRINCIPAL
int main() {
    int farinha = 0, ovos = 0, leite = 0;
    scanf("%d %d %d", &farinha, &ovos, &leite);

    farinha = farinha/2;
    ovos = ovos/3;
    leite = leite/5;

    printf("%d\n", min(min(farinha, ovos), leite));

    return 0;
}