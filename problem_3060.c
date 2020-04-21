//PROBLEM 3060
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3060
#include <stdio.h>

int main() {
    int valor_compra = 0;
    int quantidade_parcelas = 0;
    int quociente = 0, resto = 0;

    scanf("%d", &valor_compra);
    scanf("%d", &quantidade_parcelas);

    quociente = valor_compra/quantidade_parcelas;
    int i = 0;
    if (valor_compra%quantidade_parcelas == 0) {
        for (; i < quantidade_parcelas; i++) {
            printf("%d\n", quociente);
        }
    } else {
        resto = valor_compra%quantidade_parcelas;
        for (; i < resto; i++) {
            printf("%d\n", quociente + 1);
        }

        for (i = resto; i < quantidade_parcelas; i++) {
            printf("%d\n", quociente);
        }
    }

    return 0;
}