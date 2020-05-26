//PROBLEM 1441
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1441
#include <stdio.h>

//PROGRAMA PRINCIPAL
int main() {
    int valor = 0;
    int maior = 0;
    
    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }

        maior = valor;

        while (valor != 1) {
            if (valor > maior) {
                maior = valor;
            }
            if (valor%2 != 0) {
                valor = (3 * valor) + 1;
            } else {
                valor = (valor/2);
            }
        }

        printf("%d\n", maior);
    }

    return 0;
}