//PROBLEM 3102
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3102
#include <stdio.h>

double myabs(double a) {
    if (a > 0)
        return a;
    return (-1.00)*a;
}

int main() {
    double x1 = 0.00, y1 = 0.00, x2 = 0.00, y2 = 0.00, x3 = 0.00, y3 = 0.00;
    double area = 0.00;
    int numero_testes = 0, i = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

        area = (x1*y2) - (x1*y3) + (x2*y3) - (x2*y1) + (x3*y1) - (x3*y2);
        area = area/2.00;
        area = myabs(area);

        printf("%.3lf\n", area);
    }

    return 0;
}