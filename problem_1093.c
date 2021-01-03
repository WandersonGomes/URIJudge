//PROBLEM 1093
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1093
/*
Obs.:
Mais informacoes acesse o link:
https://en.wikipedia.org/wiki/Gambler's_ruin
*/
#include <stdio.h>
#include <math.h>

int main() {
    int p = 0, q = 0;
    double p1 = 0.00;
    int n1 = 0, n2 = 0;
    double resultado = 0.00;

    int vida1 = 0, vida2 = 0, ataque = 0, dano = 0;

    while (1) {
        scanf("%d %d %d %d", &vida1, &vida2, &ataque, &dano);
        if ((vida1 == 0) && (vida2 == 0) && (ataque == 0) && (dano == 0))
            break;
        
        n1 = vida1/dano;
        if (vida1 % dano != 0)
            n1++;
        
        n2 = vida2/dano;
        if (vida2 % dano != 0)
            n2++;

        p = ataque;
        q = 6 - ataque;

        if (p != q) {
            p1 = (1 - pow(p/(q * 1.0), n2))/(1 - pow(p/(q * 1.0), n1 + n2));
        } else {
            p1 = (n2 * 1.0)/(n1 + n2);
        }

        resultado = (1 - p1)*100;

        printf("%.1lf\n", resultado);
    }

    return 0;
}