//PROBLEM 2342
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2342
#include <stdio.h>

int main() {
    long int maior_valor = 0, numero1 = 0, numero2 = 0, resultado = 0;
    char operacao;
    
    scanf("%ld", &maior_valor);
    scanf("%ld %c %ld", &numero1, &operacao, &numero2);

    if (operacao == '+') {
        resultado = numero1 + numero2;
    } else {
        resultado = numero1 * numero2;
    }

    if (resultado <= maior_valor) {
        printf("OK\n");
    } else {
        printf("OVERFLOW\n");
    }
    
    return 0;
}