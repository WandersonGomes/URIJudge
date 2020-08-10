//PROBLEM 1765
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1765
#include <stdio.h>

int main() {
    int numero_testes = 0, i = 0;
    int quantidade = 0;
    double base1 = 0.00, base2 = 0.00, area_total = 0.00;
    
    while (1) {
        scanf("%d", &numero_testes);
        if (numero_testes == 0) {
            break;
        }

        for (i = 0; i < numero_testes; i++) {
            scanf("%d %lf %lf", &quantidade, &base1, &base2);
            area_total = quantidade * (((base1 + base2) * 5)/2.00);
            printf("Size #%d:\n", (i + 1));
            printf("Ice Cream Used: %.2lf cm2\n", area_total);
        }
        printf("\n");
    }

    return 0;
}