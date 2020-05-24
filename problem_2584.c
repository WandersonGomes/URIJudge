//PROBLEM 2584
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2584
//Obs.:
/*
Mais informacoes sobre o assunto assista a essa video aula:
https://youtu.be/xbnhhZAYhOQ
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

//FUNCAO QUE TRANSFORMA GRAUS PARA RADIANOS
double grausParaRadianos(double graus) {
    return (graus * (PI/180.00));
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_testes = 0, i = 0;
    double apotema = 0.00, lado = 0.00, area = 0.00;

    scanf("%d", &quantidade_testes);
    for (i = 0; i < quantidade_testes; i++) {
        scanf("%lf", &lado);

        apotema = lado/(2 * tan(grausParaRadianos(36.0)));

        area = ((5 * lado)/2.00) * apotema;

        printf("%.3lf\n", area);
    }

    return 0;
}