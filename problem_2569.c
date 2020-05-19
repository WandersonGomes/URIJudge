//PROBLEM 2569
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2569
#include <stdio.h>
#include <stdlib.h>

//FUNCAO QUE RETIRA O ALGARISMO 7
int retiraSete(int numero) {
    int resultado = 0, tmp = 0, mult = 1;

    //quebra o numero em seus algarismos
    while (numero != 0) {
        tmp = numero%10;
        numero = numero/10;
        
        //retira o sete
        if (tmp == 7) {
            tmp = 0;
        }

        resultado += (tmp * mult);
        mult = mult * 10;
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, resultado = 0;
    char operador;

    scanf("%d %c %d", &numero1, &operador, &numero2);

    //retira os 7 dos numeros
    numero1 = retiraSete(numero1);
    numero2 = retiraSete(numero2);

    //calcula o resultado
    if (operador == 'x') {
        resultado = numero1 * numero2;
    } else {
        resultado = numero1 + numero2;
    }

    //retira os sete do resultado
    resultado = retiraSete(resultado);

    printf("%d\n", resultado);

    return 0;
}