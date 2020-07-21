//PROBLEM 1305
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1305
/*
Obs.: Um detalhe a observar eh no caso de teste do Udebug
onde a entrada eh:
1.1
0.1
Na hora que eu peguei a parte fracionaria do 1.1 deu 0.1......2
ai nao tinha como comparar corretamente, por isso eu multipliquei
por 10^10 pois a string era de no maximo 10 caracteres.
*/
#include <stdio.h>

#define MULTIPLICADOR 1000000000

int main() {
    long double numero = 0.00, cutoff = 0.00;
    long long int parte_inteira = 0, parte_fracionaria = 0, cutoff_atualizado = 0;

    while (scanf("%Lf", &numero) != EOF) {
        scanf("%Lf", &cutoff);

        parte_inteira = numero;
        parte_fracionaria = (numero - parte_inteira) * MULTIPLICADOR;
        cutoff_atualizado = cutoff * MULTIPLICADOR;


        if (parte_fracionaria == 0 || parte_fracionaria <= cutoff_atualizado) {
            printf("%lld\n", parte_inteira);
        } else {
            printf("%lld\n", parte_inteira+1);
        }
    }

    return 0;
}