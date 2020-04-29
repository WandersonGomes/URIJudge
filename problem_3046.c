//PROBLEM 3046
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3046
#include <stdio.h>

int main() {
    long int numero = 0;
    long int resultado = 0;

    scanf("%ld", &numero);

    resultado = ((numero + 1) * (numero + 2)/2);

    printf("%ld\n", resultado);
    return 0;
}