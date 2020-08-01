//PROBLEM 1019
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1019
#include <stdio.h>

int main() {
    long int duracao_segundos = 0;

    scanf("%ld", &duracao_segundos);

    int horas = duracao_segundos/3600;
    duracao_segundos = duracao_segundos - (horas * 3600);

    int minutos = duracao_segundos/60;
    duracao_segundos = duracao_segundos - (minutos * 60);

    printf("%d:%d:%ld\n", horas, minutos, duracao_segundos);

    return 0;
}