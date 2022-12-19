//PROBLEM 1099
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1099
#include <stdio.h>

int main() {
    //dados
    int qtd_testes, i;
    int x, y;
    int inicio_intervalo, 
        fim_intervalo,
        numero;
    int soma_impares;

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);
    for (i = 0; i < qtd_testes; i++) {
        scanf("%d %d", &x, &y);

        soma_impares = 0;
        
        inicio_intervalo = (x < y) ? x : y;
        fim_intervalo = (y > x) ? y : x;

        numero = (inicio_intervalo % 2 == 0) ?
                 inicio_intervalo + 1 :
                 inicio_intervalo + 2 ;

        for (; numero < fim_intervalo; numero += 2)
            soma_impares += numero;

        printf("%d\n", soma_impares);
    }

    return 0;
}