//PROBLEM 1014
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1014
#include <stdio.h>

int main() {
    int distancia = 0;
    double litros = 0.00;
    double media = 0.00;

    scanf("%d %lf", &distancia, &litros);

    media = distancia/litros;

    printf("%.3lf km/l\n", media);
    return 0;
}