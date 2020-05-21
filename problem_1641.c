//PROBLEM 1641
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1641
#include <stdio.h>
#include <math.h>

//FUNCAO QUE INFORMA A DISTANCIA ENTRE DOIS PONTOS
double distanciaEntrePontos(double x0, double y0, double x1, double y1) {
    return sqrt(((x1 - x0)*(x1 - x0)) + ((y1 - y0)*(y1 - y0)));
}

//PROGRAMA PRINCIPAL
int main() {
    long long int raio = 0, largura = 0, comprimento = 0, flag = 0, pizza = 1;
    double ponto1[2], ponto2[2];

    while(1) {
        scanf("%lld", &raio);
        if (raio == 0) {
            break;
        }

        scanf("%lld", &largura);
        scanf("%lld", &comprimento);

        ponto1[0] = largura/2.0;
        ponto1[1] = comprimento/2.0;

        ponto2[0] = -largura/2.0;
        ponto2[1] = -comprimento/2.0;

        flag = 1;
        if (distanciaEntrePontos(0,0,ponto1[0],ponto1[1]) <= raio) {
            if (distanciaEntrePontos(0,0,ponto2[0],ponto2[1]) <= raio) {
                printf("Pizza %lld fits on the table.\n", pizza);
                flag = 0;
            }
        }

        if (flag) {
            printf("Pizza %lld does not fit on the table.\n", pizza);
        }

        pizza++;
    }

    return 0;
}