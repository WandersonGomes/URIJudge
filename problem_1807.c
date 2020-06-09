//PROBLEM 1807
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1807
//Dica:
//https://www.youtube.com/watch?v=bRMVU3Gy_JY&list=WL&index=185&t=0s
#include <stdio.h>

#define MODULO 2147483647

//FUNCAO QUE CALCULA UM NUMERO ELEVADO A OUTRO USANDO RECURSIVIDADE
long long int my_exp(long long int base, long long int expoente) {
    long long int resultado = 0;
    
    if (expoente == 0) {
        resultado = 1;
    } else if (expoente == 1) {
        resultado = base;
    } else if (expoente%2 == 0) {
        resultado = my_exp((base*base)%MODULO, expoente/2);
    } else {
        resultado = (base * my_exp((base*base)%MODULO, expoente/2));
    }

    return resultado%MODULO;
}

//PROGRAMA PRINCIPAL
int main() {
    long long int resultado = 0, i = 0, linha = 0;

    scanf("%lld", &linha);

    resultado = my_exp(3, linha);

    printf("%lld\n", resultado);

    return 0;
}