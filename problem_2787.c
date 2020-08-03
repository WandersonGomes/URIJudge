//PROBLEM 2787
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2787
#include <stdio.h>

int main() {
    int linha = 0, coluna = 0; 
    scanf("%d %d", &linha, &coluna);

    //os dois impares
    if ((linha%2 != 0) && (coluna%2 != 0)) {
        printf("1\n");
    }
    //linha impar e coluna par
    if ((linha%2 != 0) && (coluna%2 == 0)) {
        printf("0\n");
    }
    //linha par e coluna impar
    if ((linha%2 == 0) && (coluna%2 != 0)) {
        printf("0\n");
    }
    //linha par e coluna par
    if ((linha%2 == 0) && (coluna%2 == 0)) {
        printf("1\n");
    }

    return 0;
}