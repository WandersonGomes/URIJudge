//PROBLEM 1005
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1005
//Obs.: Utilizacao de uma terceira variavel em prol da legibilidade do codigo
#include <stdio.h>

#define PESO1 3.5
#define PESO2 7.5

int main() {
    double nota1 = 0.00, nota2 = 0.00, media = 0.00;

    scanf("%lf %lf", &nota1, &nota2);

    media = ((nota1 * PESO1) + (nota2 * PESO2))/(PESO1 + PESO2);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}