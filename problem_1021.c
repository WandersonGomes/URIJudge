//PROBLEM 1021
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1021
#include <stdio.h>
#include <math.h>

int main() {
    double valor = 0.00;
    long int valor_inteiro = 0;

    scanf("%lf", &valor);

    valor_inteiro = (long int) valor;

    int nota_100 = valor_inteiro/100;
    valor_inteiro = valor_inteiro - (nota_100 * 100);
    int nota_50 = valor_inteiro/50;
    valor_inteiro = valor_inteiro - (nota_50 * 50);
    int nota_20 = valor_inteiro/20;
    valor_inteiro = valor_inteiro - (nota_20 * 20);
    int nota_10 = valor_inteiro/10;
    valor_inteiro = valor_inteiro - (nota_10 * 10);
    int nota_5 = valor_inteiro/5;
    valor_inteiro = valor_inteiro - (nota_5 * 5);
    int nota_2 = valor_inteiro/2;
    valor_inteiro = valor_inteiro - (nota_2 * 2);
    int moeda_1 = valor_inteiro;

    valor_inteiro = (long int)((valor - floor(valor)) * 100);

    int moeda_50 = valor_inteiro/50;
    valor_inteiro = valor_inteiro - (moeda_50 * 50);
    int moeda_25 = valor_inteiro/25;
    valor_inteiro = valor_inteiro - (moeda_25 * 25);
    int moeda_10 = valor_inteiro/10;
    valor_inteiro = valor_inteiro - (moeda_10 * 10);
    int moeda_5 = valor_inteiro/5;
    valor_inteiro = valor_inteiro - (moeda_5 * 5);
    int moeda_01 = valor_inteiro;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n", nota_50);
    printf("%d nota(s) de R$ 20.00\n", nota_20);
    printf("%d nota(s) de R$ 10.00\n", nota_10);
    printf("%d nota(s) de R$ 5.00\n", nota_5);
    printf("%d nota(s) de R$ 2.00\n", nota_2);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_50);
    printf("%d moeda(s) de R$ 0.25\n", moeda_25);
    printf("%d moeda(s) de R$ 0.10\n", moeda_10);
    printf("%d moeda(s) de R$ 0.05\n", moeda_5);
    printf("%d moeda(s) de R$ 0.01\n", moeda_01);

    return 0;
}