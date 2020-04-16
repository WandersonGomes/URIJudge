//PROBLEM 1761
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1761
#include <stdio.h>
#include <math.h>

#define PI 3.141592654
#define PI_RADIANO PI/180.00

int main() {
    double angulo = 0.00, distancia_elfo_arvore = 0.00, altura_elfo = 0.00;
    double resposta = 0.00;

    while (scanf("%lf %lf %lf", &angulo, &distancia_elfo_arvore, &altura_elfo) != EOF) {
        resposta = (distancia_elfo_arvore * tan(angulo*PI_RADIANO)) + altura_elfo;
        resposta = 5 * resposta;

        printf("%.2lf\n", resposta);
    }

    return 0;
}