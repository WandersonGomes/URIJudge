//PROBLEM 1028
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1028
#include <stdio.h>

//FUNCAO QUE CALCULA O MDC
int mdc(int numero1, int numero2) {
    if (numero2 == 0) {
        return numero1;
    } else {
        return mdc(numero2, numero1%numero2);
    }
}

int main() {
    int numero_testes = 0, i = 0;
    int numero_figurinhas1 = 0, numero_figurinhas2 = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%d %d", &numero_figurinhas1, &numero_figurinhas2);
        printf("%d\n", mdc(numero_figurinhas1, numero_figurinhas2));
    }

    return 0;
}