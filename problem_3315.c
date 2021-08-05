//PROBLEM 3315
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3315
#include <stdio.h>

//FUNCAO QUE TRANSFORMA EM BINARIO
void binario(int numero) {
    if (numero != 0) {
        binario(numero/2);
        printf("%d", numero%2);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int semana = 0, dia = 0;
    int interacao = 0;
    int maior = 0, soma = 0;

    //leitura
    for (semana = 0; semana < 4; semana++) {
        soma = 0;
        for (dia = 0; dia < 7; dia++) {
            scanf("%d", &interacao);
            soma += interacao;
        }

        if (soma > maior)
            maior = soma;
    }

    //escreve em binario
    printf("%d = ", maior);
    binario(maior);
    printf("\n");

    return 0;
}