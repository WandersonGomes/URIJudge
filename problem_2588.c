//PROBLEM 2588
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2588
#include <stdio.h>
#include <string.h>

//a = 97

#define MAX 1001

int main() {
    char palavra[MAX];
    int placar[26], tam = 0, i = 0, flag = 0, resultado = 0;

    while (scanf("%s", palavra) != EOF) {
        flag = 0;
        resultado = 0;
        tam = strlen(palavra);
        memset(placar, 0, sizeof(placar));

        for (i = 0; i < tam; i++) {
            placar[palavra[i]%97]++;
        }

        for (i = 0; i < 26; i++) {
            if (placar[i] > 0) {
                if (placar[i]%2 != 0) {
                    if (flag) {
                        resultado++;
                    }
                    flag = 1;
                }
            }
        }

        printf("%d\n", resultado);
    }

    return 0;
}