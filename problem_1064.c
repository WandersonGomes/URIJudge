//PROBLEM 1064
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1064
#include <stdio.h>

int main() {
    //dados
    float valor, soma = 0.00;
    int qtd_positivos = 0, i;

    //leitura - processamento
    for (i = 0; i < 6; i++) {
        scanf("%f", &valor);

        if (valor > 0) {
            qtd_positivos++;
            soma += valor;
        }
    }

    //saida
    printf("%d valores positivos\n", qtd_positivos);

    if (qtd_positivos != 0)
        printf("%.1f\n", (soma/qtd_positivos));
    else
        printf("0.0\n");

    return 0;
}