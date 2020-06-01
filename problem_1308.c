//PROBLEM 1308
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1308
//Obs.:
//Foi utilizado a nocao de PA e uso de long double para trabalhar com os
//limites do problema.
#include <stdio.h>
#include <math.h>

//PROGRAMA PRINCIPAL
int main() {
    long long int numero_testes = 0, i = 0;
    long long int resultado = 0;
    long double numero = 0.000;

    scanf("%lld", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%Lf", &numero);
    
        resultado = (-1 + sqrt(1 + 4*2*numero))/2;

        printf("%lld\n", resultado);
    }

    return 0;
}