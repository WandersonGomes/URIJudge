//PROBLEM 2489
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2489
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

//FUNCAO QUE CONVERTE O VALOR EM GRAUS PARA RADIANOS
double radianos(double graus) {
    return graus * PI/180.00;
}

//PROGRAMA PRINCIPAL
int main() {
    double altura_arqueiro = 0.00, distancia = 0.00, angulo = 0.00;
    double altura_coelho = 0.00;

    while (scanf("%lf %lf %lf", &altura_arqueiro, &distancia, &angulo) != EOF) {
        altura_coelho = altura_arqueiro - (distancia/tan(radianos(angulo)));
        printf("%.4lf\n", altura_coelho);
    }

    return 0;
}