//PROBLEM 3106
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3106
#include <stdio.h>

int main(){
    long int numero_universidades = 0, i = 0;
    int numero_alunos = 0;
    long long int resultado = 0;

    scanf("%ld", &numero_universidades);

    for (i = 0; i < numero_universidades; i++) {
        scanf("%d", &numero_alunos);
        resultado += numero_alunos - (numero_alunos%3);
    }

    printf("%lld\n", resultado);

    return 0;
}