//PROBLEM 2484
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2484
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[101];
    int tamanho = 0;
    int i = 0, j = 0;

    while (scanf("%s", palavra) != EOF) {
        tamanho = strlen(palavra);
        
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            for (j = 0; j < (tamanho-i); j++) {
                if (j != 0) {
                    printf(" ");
                }
                printf("%c", palavra[j]);
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}