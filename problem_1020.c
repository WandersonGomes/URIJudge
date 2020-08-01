//PROBLEM 1020
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1020
#include <stdio.h>

int main(){
    int idade_dias = 0;
    int anos = 0;
    int meses = 0;
    int dias = 0;

    scanf("%d", &idade_dias);

    anos = idade_dias/365;
    idade_dias = idade_dias - (anos * 365);

    meses = idade_dias/30;
    idade_dias = idade_dias - (meses * 30);

    dias = idade_dias;
 
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}