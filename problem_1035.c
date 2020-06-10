//PROBLEM 1035
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1035
#include <stdio.h>

#define ACEITO 1
#define NAO_ACEITO 0

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    int resultado = ACEITO;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b <= c) {
        resultado = NAO_ACEITO;
    }
    if (d <= a) {
        resultado = NAO_ACEITO;
    }
    if ((c + d) <= (a + b)) {
        resultado = NAO_ACEITO;
    }
    if ((c <= 0) || (d <= 0)) {
        resultado = NAO_ACEITO;
    }
    if (a%2 != 0) {
        resultado = NAO_ACEITO;
    }

    if (resultado) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}