//PROBLEM 2927
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2927
#include <stdio.h>

#define COMPUTADOR_PROFESSOR 1 //legibilidade do codigo

int main() {
    int funcionais = 0;
    int alunos = 0, computadores = 0, queimados = 0, compilador = 0;
    scanf("%d %d %d %d", &alunos, &computadores, &queimados, &compilador);

    funcionais = computadores - queimados - compilador - COMPUTADOR_PROFESSOR;
    if (funcionais < alunos) {
        if (queimados > (compilador/2)) {
            printf("Caio, a culpa eh sua!\n");
        } else {
            printf("Igor bolado!\n");
        }
    } else {
        printf("Igor feliz!\n");
    }

    return 0;
}