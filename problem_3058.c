//PROBLEM 3058
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3058
#include <stdio.h>

#define MAX 1001

int main() {
    double menor_valor = MAX, valor = 0.00, gramas = 0.00, valor_grama = 0;
    int quantidade_supermercados = 0, i = 0;
    scanf("%d", &quantidade_supermercados);

    for (i = 0; i < quantidade_supermercados; i++) {
        scanf("%lf %lf", &valor, &gramas);
        valor_grama = valor/gramas;

        if (valor_grama < menor_valor) {
            menor_valor = valor_grama;
        }
    }

    printf("%.2lf\n", (1000*menor_valor));

    return 0;
}