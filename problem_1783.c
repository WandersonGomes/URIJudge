//PROBLEM 1783
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1783
#include <stdio.h>

int main() {
    //coordenadas primeira estrela
    double a1 = 0.00, b1 = 0.00;
    double a2 = 0.00, b2 = 0.00;

    //coordenadas segunda estrela
    double c1 = 0.00, d1 = 0.00;
    double c2 = 0.00, d2 = 0.00;

    //dados para montar o sistema linear e depois resolver utilizando determinantes
    double a = 0.00, b = 0.00;
    double c = 0.00, d = 0.00;
    double e = 0.00, f = 0.00;
    double det = 0.00, detx = 0.00, dety = 0.00;
    double x = 0.00, y = 0.00;

    //numero de testes
    int qtd_testes = 0, i;
    scanf("%d", &qtd_testes);

    for (i = 1; i <= qtd_testes; i++) {
        //coordenadas iniciais
        scanf("%lf %lf", &a1, &b1);
        scanf("%lf %lf", &c1, &d1);
        
        //coordenadas na segunda observacao
        scanf("%lf %lf", &a2, &b2);
        scanf("%lf %lf", &c2, &d2);

        //calculo dos coeficientes do sistema linear
        a = 2 * a2 - 2 * a1;
        b = 2 * b2 - 2 * b1;
        e = a2 * a2 - a1 * a1 + b2 * b2 - b1 * b1;

        c = 2 * c2 - 2 * c1;
        d = 2 * d2 - 2 * d1;
        f = c2 * c2 - c1 * c1 + d2 * d2 - d1 * d1;

        //calculo dos determinantes
        det = a * d - b * c;
        detx = e * d - f * b;
        dety = a * f - c * e;

        //calculo das coordenadas do centro do buraco negro
        x = detx/det;
        y = dety/det;

        //apresentacao dos resultados
        printf("Caso #%d: %.2lf %.2lf\n", i, x, y);
    }

    return 0;
}