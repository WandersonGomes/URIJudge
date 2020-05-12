//PROBLEM 1393
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1393
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR
long long int calcula(int numero) {
    long long int valor1 = 1, valor2 = 2, tmp = 0;
    int i = 0;
    
    if (numero < 3) {
        return numero;
    } 


    for (i = 2; i < numero; i++) {
        tmp = valor2;
        valor2 = valor2 + valor1;
        valor1 = tmp;
    }

    return valor2;
}


//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }

        printf("%lld\n", calcula(numero));
    }

    return 0;
}