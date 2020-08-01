//PROBLEM 1009
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
#include <stdio.h>

#define COMISSAO 0.15

int main() {
    char nome[50];
    double salario_fixo = 0.00;
    double total_vendas = 0.00;
    double total_final = 0.00;

    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    total_final = salario_fixo + (total_vendas * COMISSAO);

    printf("TOTAL = R$ %.2lf\n", total_final);

    return 0;
}