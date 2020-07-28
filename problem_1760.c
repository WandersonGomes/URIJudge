//PROBLEM 1760
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1760
/*
Obs.:
    Para mais informacoes acesse a estas aulas:
    https://pt.khanacademy.org/math/geometry-home/geometry-volume-surface-area/koch-snowflake/v/koch-snowflake-fractal
*/
#include <stdio.h>
#include <math.h>

int main() {
    int lado = 0;
    double area = 0.00;

    while (scanf("%d", &lado) != EOF) {
        area = (2 * sqrt(3) * (lado * lado))/5.00;
        printf("%.2f\n", area);
    }
    
    return 0;
}