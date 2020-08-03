//PROBLEM 2823
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2823
/*
Obs.: 
Para mais informacoes acesse:
https://en.wikipedia.org/wiki/Earliest_deadline_first_scheduling
*/
#include <stdio.h>

int main() {
    int numero_processos = 0, i = 0;
    int custo = 0, periodo = 0;
    long double soma = 0.00;

    scanf("%d", &numero_processos);

    for (i = 0; i < numero_processos; i++) {
        scanf("%d %d", &custo, &periodo);
        soma = soma + (custo * 1.00)/(periodo * 1.00);
    }

    if (soma > 1) {
        printf("FAIL\n");
    } else {
        printf("OK\n");
    }

    return 0;
}