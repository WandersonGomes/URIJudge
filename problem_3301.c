//PROBLEM 3301
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3301
#include <stdio.h>
#include <string.h>

int main() {
    int idades[3] = {0, 0, 0};
    char sobrinhos[3][10] = {"huguinho", "zezinho", "luisinho"};
    int aux1 = 0;
    char aux2[10];
    int i = 0, j = 0;

    //ler as idades
    scanf("%d %d %d", &idades[0], &idades[1], &idades[2]);

    //ordena pelo bubble sort
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (idades[i] > idades[j]) {
                aux1 = idades[i];
                idades[i] = idades[j];
                idades[j] = aux1;

                strcpy(aux2, sobrinhos[i]);
                strcpy(sobrinhos[i], sobrinhos[j]);
                strcpy(sobrinhos[j], aux2);
            }
        }
    }

    //apresenta o resultado
    printf("%s\n", sobrinhos[1]);

    return 0;
}