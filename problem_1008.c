//PROBLEM 1008
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
#include <stdio.h>

int main() {
    int num_funcionario = 0;
    int num_horas = 0;
    double valor_hora = 0.0;
    double salario = 0.0;

    scanf("%d", &num_funcionario);
    scanf("%d", &num_horas);
    scanf("%lf", &valor_hora);

    salario = num_horas * valor_hora;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}