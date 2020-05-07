//PROBLEM 1471
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1471
#include <stdio.h>
#include <string.h> //usada para preenchimento rapido do vetor

#define MAX 10000

int main() {
    long int quantidade_mergulhadores = 0, quantidade_que_voltaram = 0, mergulhador = 0;
    int flag = 0;
    long int codigos[MAX], i = 0;

    while (scanf("%ld %ld", &quantidade_mergulhadores, &quantidade_que_voltaram) != EOF) {
        flag = 1;
        memset(codigos,0,sizeof(codigos));//zera todos os elementos do vetor

        for (i = 0; i < quantidade_que_voltaram; i++) {
            scanf("%ld", &mergulhador);
            codigos[mergulhador-1] = -1;
        }

        for (i = 0; i < quantidade_mergulhadores; i++) {
            if (codigos[i] != -1) {
                flag = 0;
                printf("%ld ", i+1);
            }
        }

        if (flag) {
            printf("*\n");
        } else {
            printf("\n");
        }
    }

    return 0;
}