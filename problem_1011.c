//PROBLEM 1011
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1011
#include <stdio.h>

#define PI 3.14159

int main() {
    double raio = 0.00;
    double volume = 0.00;

    scanf("%lf", &raio);

    volume = (4/3.0) * (PI * ((raio * raio) * raio));

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}