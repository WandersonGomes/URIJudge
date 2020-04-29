//PROBLEM 3040
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3040
#include <stdio.h>

int main() {
    int quantidade_testes = 0;
    scanf("%d", &quantidade_testes);

    int altura = 0, diametro = 0, galhos = 0;
    int flag = 0;

    int i = 0;
    for (; i < quantidade_testes; i++) {
        scanf("%d %d %d", &altura, &diametro, &galhos);

        flag = 0;
        if ((altura >= 200) && (altura <= 300)) {
            if (diametro >= 50) {
                if (galhos >= 150) {
                    flag = 1;
                }
            }
        }

        if (flag) {
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
    }

    return 0;
}