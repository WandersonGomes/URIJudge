//PROBLEM 1002
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
#include <stdio.h>

#define PI 3.14159

int main() {
    double raio = 0.00;

    scanf("%lf", &raio);

    printf("A=%.4lf\n", (PI * (raio * raio)));

    return 0;
}