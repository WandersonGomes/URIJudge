//PROBLEM 1267
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1267
#include <stdio.h>

int main() {
    int alunos = 0, jantares = 0;
    int i = 0, j = 0;
    int soma = 0, jantar = 0, positivo = 0;

    while (1) {
        scanf("%d %d", &alunos, &jantares);
        if (alunos == 0) {
            break;
        }
        
        positivo = 0;
        for (i = 0; i < alunos; i++) {
            soma = 0;
            for (j = 0; j < jantares; j++) {
                scanf("%d", &jantar);
                soma += jantar;
            }

            if (soma == jantares) {
                positivo = 1;
            }
        }

        if (positivo) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}