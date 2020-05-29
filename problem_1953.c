//PROBLEM 1953
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1953
#include <stdio.h>
#include <string.h>

int main() {
    long long int numero_alunos = 0, i = 0;
    long long int epr = 0, ehd = 0, intrusos = 0;
    char sigla[10];

    while (scanf("%lld", &numero_alunos) != EOF) {
        epr = 0;
        ehd = 0;
        intrusos = 0;

        for (i = 0; i < numero_alunos; i++) {
            scanf("%*d %s", sigla);
            if (strcmp(sigla, "EPR") == 0) {
                epr++;
            } else if (strcmp(sigla, "EHD") == 0) {
                ehd++;
            } else {
                intrusos++;
            }
        }

        printf("EPR: %lld\n", epr);
        printf("EHD: %lld\n", ehd);
        printf("INTRUSOS: %lld\n", intrusos);
    }

    return 0;
}