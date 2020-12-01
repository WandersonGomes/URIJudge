//PROBLEM 1294
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1294
#include <stdio.h>
#include <math.h>

//STRUCT QUE GUARDA AS RAIZES
typedef struct {
    double x1;
    double x2;
} Raiz;

//FUNCAO QUE CALCULA A RAIZ DO DELTA DE UMA FUNCAOD O TIPO AX^2 + BX + C
double raizDelta(double a, double b, double c) {
    return sqrt((b * b) - (4 * a * c));
}

//FUNCAO QUE CALCULA AS RAIZES
Raiz calculaRaizes(double a, double b, double c) {
    Raiz resultado;

    resultado.x1 = (-b + raizDelta(a, b, c))/(2 * a);
    resultado.x2 = (-b - raizDelta(a, b, c))/(2 * a);

    return resultado;
}

//FUNCAO QUE CALCULA O VOLUME DA CAIXA
double calculaVolume(double x, double altura, double largura) {
    return (4 * (x * x * x)) - (2 * (altura + largura) * (x * x)) + (altura * largura * x); 
}

//FUNCAO QUE RETORNA O MINIMO ENTRE DOIS VALORES
double min(double a, double b) {
    if (a <= b)
        return a;
    else
        return b;
}

//PROGRAMA PRINCIPAL
int main() {
    double altura = 0.00, largura = 0.00;
    double volume1 = 0.00, volume2 = 0.00, x = 0.00;
    Raiz raizes;

    while (scanf("%lf %lf", &altura, &largura) != EOF) {

        raizes = calculaRaizes(12, -(4*(altura+largura)), (altura*largura));

        volume1 = calculaVolume(raizes.x1, altura, largura);
        volume2 = calculaVolume(raizes.x2, altura, largura);

        if (volume1 >= volume2) {
            printf("%.3lf 0.000 %.3lf\n", raizes.x1, min(largura, altura)/2.0);
        } else {
            printf("%.3lf 0.000 %.3lf\n", raizes.x2, min(largura, altura)/2.0);
        }

    }

    return 0;
}