//PROBLEM 2187
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2187
#include <stdio.h>

int main() {
    //50 10 5 1
    long int numero = 0, teste = 1;
    int cedula_50 = 0, cedula_10 = 0, cedula_5 = 0, cedula_1 = 0;

    while (1) {
        cedula_50 = 0;
        cedula_10 = 0;
        cedula_5 = 0;
        cedula_1 = 0;

        scanf("%ld", &numero);
        if (numero == 0) {
            break;
        }

        cedula_50 = numero/50;
        numero = numero%50;
        cedula_10 = numero/10;
        numero = numero%10;
        cedula_5 = numero/5;
        numero = numero%5;
        cedula_1 = numero;
        
        printf("Teste %ld\n", teste);
        printf("%d %d %d %d\n\n", cedula_50, cedula_10, cedula_5, cedula_1);

        teste++;
    }

    return 0;
}