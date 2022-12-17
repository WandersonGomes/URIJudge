//PROBLEM 1041
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1041
#include <stdio.h>

int main() {
    //dados
    float x, y;

    //leitura
    scanf("%f %f", &x, &y);

    //processamento - saida
    if (x == 0.0 && y == 0.0)
        puts("Origem");
    else if (x == 0.0)
        puts("Eixo Y");
    else if (y == 0.0)
        puts("Eixo X");
    else if (x > 0.0 && y > 0.0)
        puts("Q1");
    else if (x < 0.0 && y > 0.0)
        puts("Q2");
    else if (x < 0.0 && y < 0.0)
        puts("Q3");
    else
        puts("Q4");

    return 0;
}