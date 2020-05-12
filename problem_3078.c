//PROBLEM 3078
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3078
#include <stdio.h>
#include <math.h>

//FUNCAO QUE DEVOLVE O DELTA
long int delta(long int a, long int b, long int c) {
    return (b * b) - (4 * a * c);
}

//FUNCAO QUE RETORNA O NUMERO DE RAIZES
int numeroRaizes(long int numero) {
    long int a = 1, b = 0, c = 0, d = 0;
    double resultado = 0.00;

    b = numero%257;
    c = numero%193;

    d = delta(a,b,c);

    if (d < 0) {
        return 0;
    }

    resultado = (-b + sqrt(d))/2.0;

    if (resultado == 0) {
        return 1;
    } else if (resultado < 0) {
        return 0;
    } else {
        return 2;
    }
}


//PROGRAMA PRINCIPAL
int main() {
    long int numero = 0;
    int resultado = 0;

    while (1) {
        scanf("%ld", &numero);

        if (numero == -1) {
            break;
        }

        resultado = numeroRaizes(numero);
    
        if (resultado == 0) {
            printf("So o ouro\n");
        } else if (resultado == 1) {
            printf("Bom\n");
        } else {
            printf("Regular\n");
        }
    }

    return 0;
}