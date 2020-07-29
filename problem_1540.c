//PROBLEM 1540
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1540
#include <stdio.h>

int main() {
    int numero_testes = 0, i = 0;
    int ano1 = 0, ano2 = 0, consumo1 = 0, consumo2 = 0;
    int total_anos = 0, parte_inteira = 0, parte_fracionaria = 0;
    double taxa = 0.00;

    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%d %d %d %d", &ano1, &consumo1, &ano2, &consumo2);
        total_anos = ano2 - ano1;

        taxa = (consumo2 - consumo1)/(total_anos * 1.00);

        parte_inteira = taxa;
        parte_fracionaria = (taxa - parte_inteira) * 100;

        printf("%d,%02d\n", parte_inteira, parte_fracionaria);
    }

    return 0;
}