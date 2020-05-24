//PROBLEM 2956
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2956
#include <stdio.h>

int main() {
    double base = 0.00, altura = 0.00, area = 0.00;

    scanf("%lf %lf", &base, &altura);

    area = (base * altura)/2.00;

    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n", area);

    return 0;
}