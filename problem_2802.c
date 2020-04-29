//PROBLEM 2802
//link = https://www.urionlinejudge.com.br/judge/pt/runs/add/2802
//Obs.: solucionado gracas a:
//aula: https://www.youtube.com/watch?v=_gMRRS1wbj4
//post: https://www.urionlinejudge.com.br/judge/pt/questions/view/2802/4261
#include <stdio.h>

int main() {
    long long int resultado = 0;
    long long int numero_pontos = 0;
    scanf("%lld", &numero_pontos);

    resultado = 1 + (((numero_pontos-1) * numero_pontos)/2) + (((numero_pontos) * (numero_pontos - 1) * (numero_pontos - 2 ) * (numero_pontos - 3))/24);
    printf("%lld\n", resultado);
    return 0;
}