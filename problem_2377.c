//PROBLEM 2377
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2377
#include <stdio.h>

int main() {
    int distancia = 0, distancia_pedagio = 0;
    int custo_kilometro = 0, custo_pedagio = 0;
    int resultado = 0;

    scanf("%d %d", &distancia, &distancia_pedagio);
    scanf("%d %d", &custo_kilometro, &custo_pedagio);

    resultado = (distancia * custo_kilometro) + ((distancia/distancia_pedagio) * custo_pedagio);

    printf("%d\n", resultado);

    return 0;
}