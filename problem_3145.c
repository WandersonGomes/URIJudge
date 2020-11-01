//PROBLEM 3145
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3145
#include <stdio.h>

int main() {
    int qtd_viajantes = 0;
    int distancia = 0;

    scanf("%d %d", &qtd_viajantes, &distancia);

    qtd_viajantes += 2; //gandalf e bilbo

    printf("%.2f\n", (distancia*1.0)/qtd_viajantes);

    return 0;
}