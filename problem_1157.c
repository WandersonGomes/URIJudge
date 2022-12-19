//PROBLEM 1157
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1157
#include <stdio.h>

int main() {
    //dados
    int numero;
    int divisor;

    //leitura
    scanf("%d", &numero);

    //processamento - saida
    for (divisor = 1; divisor <= numero/2; divisor++)
        if (numero % divisor == 0)
            printf("%d\n", divisor);
    printf("%d\n", numero);

    return 0;
}