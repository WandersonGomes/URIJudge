//PROBLEM 2900
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2900
#include <stdio.h>

int main() {
    int quantidade_varetas = 0;
    long long int varetas = 0, vareta = 0;
    int i = 0;

    while (1) {
        scanf("%d", &quantidade_varetas);
        if (quantidade_varetas == 0) {
            break;
        }

        varetas = 0;

        for (i = 0; i < quantidade_varetas; i++) {
            scanf("%*d %lld", &vareta);
            if (vareta >= 2) {
                if (vareta%2 != 0) {
                    vareta--;
                }
                varetas += vareta;
            }
        }

        printf("%lld\n", varetas/4);
    }
    printf("\n");

    return 0;
}