//PROBLEM 2587
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2587
#include <stdio.h>
#include <string.h>

#define MAX 16

//FUNCAO QUE VERIFICA SE EH POSSIVEL ACERTAR COM DOIS PALPITES
int acertaDoisPalpites(int espacos[2], char palavra1[MAX], char palavra2[MAX]) {
    int i = espacos[0];
    int j = espacos[1];

    if (palavra1[i] == palavra2[j]) {
        return 1;
    }

    if (palavra1[j] == palavra2[i]) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    char palavra1[MAX], palavra2[MAX], palavra3[MAX];
    int tam = 0, j = 0, k = 0, espacos[] = {0, 0};
    int quantidade_testes = 0, i = 0;
    scanf("%d", &quantidade_testes);

    for (i = 0; i < quantidade_testes; i++) {
        scanf("%s", palavra1);
        scanf("%s", palavra2);
        scanf("%s", palavra3);

        tam = strlen(palavra3);
        k = 0;

        for (j = 0; j < tam; j++) {
            if (k == 2) {
                break;
            }
            if (palavra3[j] == '_') {
                espacos[k] = j;
                k++;
            }
        }

        if (acertaDoisPalpites(espacos, palavra1, palavra2)) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}