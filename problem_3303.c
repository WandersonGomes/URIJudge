//PROBLEM 3303
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3303
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];
    int tamanho = 0;

    scanf("%s", palavra);

    tamanho = strlen(palavra);

    if (tamanho < 10)
        printf("palavrinha\n");
    else
        printf("palavrao\n");

    return 0;
}