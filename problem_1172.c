//PROBLEM 1172
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1172
#include <stdio.h>

int main() {
    int vetor[10], valor = 0;
    int i = 0;

    //realiza a leitura e a troca dos valores nulos
    for (i = 0; i < 10; i++) {
        scanf("%d", &valor);
        if (valor <= 0) {
            vetor[i] = 1;
        } else {
            vetor[i] = valor;
        }
    }

    //apresenta o resultado
    for (i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}