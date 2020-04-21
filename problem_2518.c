//PROBLEM 2518
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2518
#include <stdio.h>
#include <math.h>

int main() {
    int numero_degraus = 0;
    int altura_degrau = 0, comprimento_degrau = 0, largura_degrau = 0;
    double area = 0.00, comprimento_rampa = 0.00, tmp1 = 0.00, tmp2 = 0.00;

    while (scanf("%d", &numero_degraus) != EOF) {
        scanf("%d %d %d", &altura_degrau, &comprimento_degrau, &largura_degrau);

        tmp1 = (comprimento_degrau/100.00) * numero_degraus;
        tmp2 = (altura_degrau/100.00) * numero_degraus;

        comprimento_rampa = (tmp1 * tmp1) + (tmp2 * tmp2);
        comprimento_rampa = sqrt(comprimento_rampa);

        area = comprimento_rampa * (largura_degrau/100.00);

        printf("%.4lf\n", area);
    }


    return 0;
}