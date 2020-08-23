//PROBLEM 1521
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1521
#include <stdio.h>
#include <string.h>

#define MAX 51

int main() {
    int alunos[51], numero_alunos = 0, i = 0, aluno_dedurado = 0;

    while (1) {
        scanf("%d", &numero_alunos);
        if (numero_alunos == 0) {
            break;
        }

        memset(alunos, 0, sizeof(alunos));

        for (i = 1; i <= numero_alunos; i++) {
            scanf("%d", &alunos[i]);
        }

        //primeiro aluno a ser dedurado
        scanf("%d", &aluno_dedurado);

        while (alunos[aluno_dedurado] != aluno_dedurado) {
            aluno_dedurado = alunos[aluno_dedurado];
        }

        printf("%d\n", aluno_dedurado);
    }

    return 0;
}