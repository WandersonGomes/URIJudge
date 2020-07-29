//PROBLEM 1612
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1612
#include <stdio.h>
#include <math.h>

int main() {
    int numero_testes = 0, i = 0;
    long int numero = 0;

    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%ld", &numero);

        numero = ceil(numero/2.0);

        printf("%ld\n", numero);
    }

    return 0;
}