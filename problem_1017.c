//PROBLEM 1017
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1017
#include <stdio.h>

#define CONSUMO_MEDIO 12.0

int main(){
    int tempo = 0;
    int velocidade = 0;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    int distancia = tempo * velocidade;

    double consumo = distancia/CONSUMO_MEDIO;

    printf("%.3lf\n", consumo);
    return 0;
}