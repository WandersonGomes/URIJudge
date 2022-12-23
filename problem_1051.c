//PROBLEM 1051
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1051
#include <stdio.h>

int main() {
    float renda = 0.0;
    float imposto = 0.0;

    scanf("%f", &renda);

    if (renda <= 2000.00) {
        printf("Isento\n");
        return 0;
    } else {
        if (renda <= 3000.00) {
            imposto = (renda - 2000) * 0.08;
        } else {
            if (renda <= 4500.00) {
                imposto = (1000 * 0.08) + (0.18 * (renda - 3000));
            } else {
                imposto = (1000 * 0.08) + (0.18 * 1500) + ((renda - 4500) * 0.28);
            }
        }
    }

    printf("R$ %.2f\n", imposto);
    return 0;
}