//PROBLEM 2505
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2505
#include <stdio.h>

//FUNCAO QUE RETORNA A POTENCIA EM RELACAO A UM MODULO FORNECIDO
long long int potenciaRapida(long long int base, long long int expoente, long long int modulo) {
    long long int tmp = 0;

    if (expoente == 0) {
        return 1;
    }
    if (expoente == 1) {
        return base;
    }

    tmp = potenciaRapida(base, expoente/2, modulo);
    tmp = (tmp * tmp)%modulo;

    if (expoente%2 == 1) {
        tmp = (base * tmp)%modulo;
    }

    return tmp;
}

//FUNCAO QUE IDENTIFICA O MODULO CORRETO PARA OS CALCULOS
int moduloAdequado(long long int numero) {
    long long int divisor = 10;

    while (divisor <= numero) {
        divisor *= 10;
    }

    return divisor;
}

//PROGRAMA PRINCIPAL
int main() {
    long long int numero = 0;

    while (scanf("%lld", &numero) != EOF) {
        if (numero == potenciaRapida(numero, numero, moduloAdequado(numero))) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}