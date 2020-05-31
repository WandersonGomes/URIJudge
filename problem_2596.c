//PROBLEM 2596
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2596
#include <stdio.h>

int main() {
    int quantidade_esferas = 0, tmp = 0;
    int numero_testes = 0, i = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%d", &quantidade_esferas);

        tmp = 1;
        while ((tmp * tmp) <= quantidade_esferas) {
            tmp++;
        }
        tmp--;

        printf("%d\n", quantidade_esferas - tmp);
    }

    return 0;
}