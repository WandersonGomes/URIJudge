//PROBLEM 1048
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1048
#include <stdio.h>

//FUNCOES
void imprimirDados(double salario, int porcentagem) {
    printf("Novo salario: %.2lf\n"
            "Reajuste ganho: %.2lf\n"
            "Em percentual: %d %%\n",
            (salario + (salario * porcentagem/100.00)),
            (salario * porcentagem/100.00),
            porcentagem
            );
}

//PROGRAM PRINCIPAL
int main() {
    //dados
    double salario;

    //leitura
    scanf("%lf", &salario);

    //processamento - saida
    if (salario >= 0 && salario <= 400.00) {
        imprimirDados(salario, 15);
    } else if (salario <= 800.00) {
        imprimirDados(salario, 12);
    } else if (salario <= 1200.00) {
        imprimirDados(salario, 10);
    } else if (salario <= 2000.00) {
        imprimirDados(salario, 7);
    } else {
        imprimirDados(salario, 4);
    }

    return 0;
}