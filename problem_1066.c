//PROBLEM 1066
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1066
#include <stdio.h>

int main() {
    //dados
    int valor, i;

    int qtd_pares = 0,
        qtd_impares = 0,
        qtd_positivos = 0,
        qtd_negativos = 0;
    
    //leitura - processamento
    for (i = 0; i < 5; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) qtd_pares++;
        else qtd_impares++;

        if (valor > 0) qtd_positivos++;
        else if (valor < 0) qtd_negativos++;
    }

    //saida
    printf("%d valor(es) par(es)\n", qtd_pares);
    printf("%d valor(es) impar(es)\n", qtd_impares);
    printf("%d valor(es) positivo(s)\n", qtd_positivos);
    printf("%d valor(es) negativo(s)\n", qtd_negativos);

    return 0;
}