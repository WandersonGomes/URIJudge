//PROBLEM 2328
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2328
#include <stdio.h>

int main() {
    int quantidade_divisoes = 0, divisao = 0, resultado = 0;
    scanf("%d", &quantidade_divisoes);

    int i = 0;
    for (; i < quantidade_divisoes; i++) {
        scanf("%d", &divisao);
        resultado += (divisao - 1);    
    }

    printf("%d\n", resultado);

    return 0;
}