//PROBLEM 2416
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2416
#include <stdio.h>

int main() {
    long long int metros_corrida = 0;
    int comprimento_pista = 0;

    scanf("%lld %d", &metros_corrida, &comprimento_pista);

    printf("%d\n", (metros_corrida%comprimento_pista));

    return 0;
}