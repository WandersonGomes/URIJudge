//PROBLEM 1065
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1065
#include <stdio.h>

int main() {
    //dados
    int valor, qtd_pares = 0;
    int i;

    //leitura - processamento
    for (i = 0; i < 5; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) qtd_pares++;
    }

    //saida
    printf("%d valores pares\n", qtd_pares);

    return 0;
}