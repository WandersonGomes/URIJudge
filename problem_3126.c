//PROBLEM 3126
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3126
#include <stdio.h>

#define PARTICIPOU 1
#define NAO_PARTICIPOU 0

int main() {
    int numero_candidatos = 0, resultado = 0, i = 0;
    int situacao = 0;

    scanf("%d", &numero_candidatos);
    
    for (i = 0; i < numero_candidatos; i++) {
        scanf("%d", &situacao);
        if (situacao == PARTICIPOU) {
            resultado++;
        }
    }

    printf("%d\n", resultado);
    return 0;
}