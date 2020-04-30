//PROBLEM 1039
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1039
#include <stdio.h>
#include <math.h>

//FUNCAO QUE RETORNA O VALOR DA DISTANCIA ENTRE DOIS PONTOS
double distanciaEntrePontos(double x1, double y1, double x2, double y2) {
    double resultado = 0.00;

    //para facilitar a leitura do codigo
    resultado = (x2 - x1) * (x2 - x1);
    resultado += (y2 - y1) * (y2 - y1);

    resultado = sqrt(resultado);

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    double distancia_centros = 0.00;
    double distancia_aceitavel = 0.00;

    long int raio1 = 0, raio2 = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    while (scanf("%ld %ld %ld %ld %ld %ld", &raio1, &x1, &y1, &raio2, &x2, &y2) != EOF) {

        distancia_aceitavel = raio1 - raio2;

        distancia_centros = distanciaEntrePontos(x1, y1, x2, y2);

        if (distancia_centros <= distancia_aceitavel) {
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }
    }


    return 0;
}