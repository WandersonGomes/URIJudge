//PROBLEM 1198
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1198
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR ABSOLUTO
long long int meu_abs(long long int numero) {
    if (numero < 0) {
        return (-1)*numero;
    }
    return numero;
}


//PROGRAMA PRINCIPAL
int main() {
    long long int hashmat = 0, oponente = 0;

    while (scanf("%lld %lld", &hashmat, &oponente) != EOF){
        printf("%lld\n", meu_abs(hashmat - oponente));
    }

    return 0;
}