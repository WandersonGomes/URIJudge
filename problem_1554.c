//PROBLEM 1554
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1554
#include <stdio.h>
#include <math.h>

#define MAX 10000000.00

//FUNCAO PARA DETERMINAR A DISTANCIA ENTRE DOIS PONTOS NO PLANO (X,Y)
long double distanciaEntrePontos(double x0, double y0, double x1, double y1) {
    long double tmp = ((x1 - x0) * (x1 - x0)) + ((y1 - y0) * (y1 - y0));

    return sqrt(tmp);
}

//PROGRAMA PRINCIPAL
int main() {
    long int quantidade_testes = 0, i = 0;
    long double distancia = 0.00, menor_distancia = 0.00;
    int numero_bolas = 0, x_branca = 0, y_branca = 0, j = 0;
    int x_bola = 0, y_bola = 0, resultado = 0;

    scanf("%ld", &quantidade_testes);

    for (i = 0; i < quantidade_testes; i++) {
        scanf("%d", &numero_bolas);
        menor_distancia = MAX;

        scanf("%d %d", &x_branca, &y_branca);
        for (j = 0; j < numero_bolas; j++) {
            scanf("%d %d", &x_bola, &y_bola);

            distancia = distanciaEntrePontos(x_branca, y_branca, x_bola, y_bola);
            if (distancia < menor_distancia) {
                menor_distancia = distancia;
                resultado = j+1;
            }
        }

        printf("%d\n", resultado);
    }

    return 0;
}