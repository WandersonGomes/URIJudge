//PROBLEM 1153
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1153
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR DO FATORIAL CALCULO SIMPLES
long int fatorial(int numero) {
    if (numero == 1) {
        return 1;
    } else {
        int produto = 1;
        int i = 1;
        for (; i <= numero; i++) {
            produto = produto * i;
        }

        return produto;
    }
}

//PROGRAMA PRINCIPAL
int main(){
    int numero = 0;
    scanf("%d", &numero);

    printf("%ld\n", fatorial(numero));
    return 0;
}