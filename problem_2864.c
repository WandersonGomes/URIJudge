//PROBLEM 2864
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2864
#include <stdio.h>

int main() {
    int quantidade_testes = 0, i = 0;
    int a = 0, b = 0, c = 0;
    double y_vertice = 0.00, delta = 0.00;

    scanf("%d", &quantidade_testes);
    for (i = 0; i < quantidade_testes; i++) {
        scanf("%d %d %d", &a, &b, &c);
        delta = (b*b) - (4 * a * c);

        y_vertice = -delta/(4.0*a);

        printf("%.2lf\n", y_vertice);
    }

    return 0;
}