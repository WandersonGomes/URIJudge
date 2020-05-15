//PROBLEM 1107
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1107
#include <stdio.h>

int main() {
    int altura = 0, comprimento = 0;
    int valor = 0, anterior = 0;
    long int resultado = 0;
    int i = 0;

    while (1) {
        scanf("%d %d", &altura, &comprimento);
        if ((altura == 0) && (comprimento == 0)) {
            break;
        }

        resultado = 0;
        anterior = altura + 1;
        for (i = 0; i < comprimento; i++) {
            scanf("%d", &valor);

            if (valor < anterior) {
                if (resultado == 0) {
                    resultado += (altura - valor);
                } else {
                    resultado += (anterior - valor);
                }
            }

            anterior = valor;
        }

        printf("%ld\n", resultado);
    }

    return 0;
}