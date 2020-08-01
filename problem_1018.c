//PROBLEM 1018
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
#include <stdio.h>

int main(){
    long int valor = 0;

    scanf("%ld", &valor);
    printf("%ld\n", valor);

    int nota_100 = valor/100;
    valor = valor - (nota_100 * 100);

    int nota_50 = valor/50;
    valor = valor - (nota_50 * 50);

    int nota_20 = valor/20;
    valor = valor - (nota_20 * 20);

    int nota_10 = valor/10;
    valor = valor - (nota_10 * 10);

    int nota_5 = valor/5;
    valor = valor - (nota_5 * 5);

    int nota_2 = valor/2;
    valor = valor - (nota_2 * 2);

    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n", nota_50);
    printf("%d nota(s) de R$ 20,00\n", nota_20);
    printf("%d nota(s) de R$ 10,00\n", nota_10);    
    printf("%d nota(s) de R$ 5,00\n", nota_5);
    printf("%d nota(s) de R$ 2,00\n", nota_2);
    printf("%ld nota(s) de R$ 1,00\n", valor);

    return 0;
}