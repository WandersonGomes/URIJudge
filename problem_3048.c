//PROBLEM 3048
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3048
#include <stdio.h>

int main() {
    int quantidade = 0, numero = 0, soma = 0, i = 0, anterior = 0;
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
        scanf("%d", &numero);
        if (numero != anterior) {
            soma++;
            anterior = numero;
        }
    }

    printf("%d\n", soma);

    return 0;
}