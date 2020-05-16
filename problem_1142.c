//PROBLEM 1142
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1142
#include <stdio.h>

int main() {
    int numero_linhas = 0;
    scanf("%d", &numero_linhas);

    int i = 0, tmp = 0;
    for (i = 1; i <= numero_linhas; i++) {
        printf("%d %d %d PUM\n", (i + tmp), (i + tmp + 1), (i + tmp + 2));
        tmp += 3;
    }

    return 0;
}