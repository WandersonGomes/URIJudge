//PROBLEM 2682
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2682
#include <stdio.h>

int main() {
    long int anterior = -1;
    long int resultado = 0, numero = 0;

    while (scanf("%ld", &numero) != EOF) {
        if ((numero < anterior) && (!resultado)) {
            resultado = anterior + 1;
        }
        anterior = numero;
    }

    if (!resultado)
        resultado = numero + 1;

    printf("%ld\n", resultado);
    return 0;
}