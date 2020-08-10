//PROBLEM 1997
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1997
#include <stdio.h>
#include <string.h>

#define MAX 501

int main() {
    char palavra1[MAX], palavra2[MAX];
    int tam = 0, i = 0, flag = 0, resultado = 0;

    while (1) {
        scanf("%s %s", palavra1, palavra2);
        if (palavra1[0] == '*') {
            break;
        }

        flag = 1;
        resultado = 0;

        tam = strlen(palavra1);
        for (i = 0; i < tam; i++) {
            if (palavra1[i] != palavra2[i]) {
                if (flag) {
                    resultado++;
                    flag = 0;
                }
            } else {
                flag = 1;
            }
        }

        printf("%d\n", resultado);
    }

    return 0;
}