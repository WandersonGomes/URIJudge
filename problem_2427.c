//PROBLEM 2427
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2427
#include <stdio.h>
#include <math.h>


//PROGRAMA PRINCIPAL
int main() {
    double lado = 0.00;
    int expoente = 0;

    scanf("%lf", &lado);

    while (lado >= 2) {
        lado = lado/2.00;
        expoente++;
    }

    printf("%.0lf\n", pow(4.00,expoente));

    return 0;
}