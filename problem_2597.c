//PROBLEM 2597
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2597
#include <stdio.h>

int main() {
    long long int numero_testes = 0, numero_esferas = 0, i = 0;
    long long int esfera = 0, resultado = 0;

    scanf("%lld", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%lld", &numero_esferas);

        esfera = 1;
        while ((esfera*esfera) < numero_esferas) {
            esfera++;
        }

        resultado = numero_esferas - (esfera-1);

        printf("%lld\n", resultado);
     }

    return 0;
}