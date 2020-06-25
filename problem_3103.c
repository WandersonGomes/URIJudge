//PROBLEM 3106
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3106
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX (1024*1024)

int main(){
    int quantidade_testes = 0, i = 0, j = 0, k = 0, tam = 0;
    int algarismos[10];
    char numero[MAX];

    scanf("%d", &quantidade_testes);
    for(i = 0; i < quantidade_testes; i++) {
        memset(algarismos, 0, sizeof(algarismos));

        scanf("%s", numero);
        tam = strlen(numero);

        for (j = 0; j < tam; j++) {
            algarismos[numero[j] - '0']++;
        }

        for (j = 1; j < 10; j++) {
            if (algarismos[j] > 0) {
                printf("%d", j);
                algarismos[j]--;
                break;
            }
        }

        //printa os zeros
        for (j = 0; j < algarismos[0]; j++) {
            printf("0");
        }

        //printa os restantes dos algarismos
        for (j = 1; j < 10; j++) {
            for (k = 0; k < algarismos[j]; k++) {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}