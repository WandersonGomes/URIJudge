//PROBLEM 1044
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1044
#include <stdio.h>

int main() {
    //dados
    int numero1,
        numero2;

    //leitura
    scanf("%d %d", &numero1, &numero2);

    //processamento - saida
    if ((numero1 % numero2 == 0) || (numero2 % numero1 == 0))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}