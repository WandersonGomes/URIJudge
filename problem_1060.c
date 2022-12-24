//PROBLEM 1060
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1060
#include <stdio.h>

int main() {
    //dados
    float valor;
    int i, qtd_positivos = 0;

    //leitura - processamento
    for (i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if (valor > 0) qtd_positivos++;
    }

    //saida
    printf("%d valores positivos\n", qtd_positivos);

    return 0;
}