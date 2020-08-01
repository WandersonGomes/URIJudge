//PROBLEM 1015
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1015
#include <stdio.h>
#include <math.h>

int main() {
    double x1 = 0.00;
    double y1 = 0.00;

    double x2 = 0.00;
    double y2 = 0.00;

    double distancia = 0.00;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = (x2 - x1) * (x2 - x1);
    distancia = distancia + ((y2 - y1) * (y2 - y1));
    distancia = sqrt(distancia);

    printf("%.4lf\n", distancia);
    return 0;
}