//PROBLEM 3146
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3146
#include <stdio.h>

#define PI 3.14

int main() {
    double raio = 0.00, tamanho = 0.00;

    scanf("%lf", &raio);

    tamanho = 2 * raio * PI;

    printf("%.2lf\n", tamanho);

    return 0;
}