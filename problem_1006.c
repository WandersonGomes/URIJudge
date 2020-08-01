//PROBLEM 1006
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 5

int main() {
    double nota1 = 0.0;
    double nota2 = 0.0;
    double nota3 = 0.0;
    double media = 0.00;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);

    media = (((nota1 * PESO1) + (nota2 * PESO2)) + (nota3 * PESO3))/((PESO1 + PESO2) + PESO3);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}