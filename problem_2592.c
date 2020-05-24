//PROBLEM 2592
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2592
#include <stdio.h>

int main() {
    int quantidade_pedras = 0, i = 0;
    int resultado = 0, flag = 0, pedra = 0;

    while (1) {
        flag = 1;
        resultado = 0;
        scanf("%d", &quantidade_pedras);
        if (quantidade_pedras == 0) {
            break;
        }

        while (flag) {
            flag = 0;
            for (i = 0; i < quantidade_pedras; i++) {
                scanf("%d", &pedra);
                if (pedra != (i + 1)) {
                    flag = 1;
                }
            }
            resultado++;
        }

        printf("%d\n", resultado);
    }

    return 0;
}