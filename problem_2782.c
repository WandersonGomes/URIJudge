//PROBLEM 2782
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2782
#include <stdio.h>

int main() {
    int quantidade_numeros = 0, i = 0, escadinhas = 1;
    int numero1 = 0, numero2 = 0, diferenca = 0;

    scanf("%d", &quantidade_numeros);

    for (i = 0; i < quantidade_numeros; i++) {
        if (i == 0) {
            scanf("%d", &numero1);
        } else if (i == 1) {
            scanf("%d", &numero2);
            diferenca = numero2 - numero1;
            numero1 = numero2;
        } else {
            scanf("%d", &numero2);
            if ((numero2 - numero1) != diferenca) {
                diferenca = numero2 - numero1;
                escadinhas++;
            }
            numero1 = numero2;
        }
    }

    printf("%d\n", escadinhas);

    return 0;
}