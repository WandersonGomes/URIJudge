//PROBLEM 2132
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2132
#include <stdio.h>
#include <string.h>

//DEFINICOES
#define MAX 61

#define ESTADO_P 0
#define ESTADO_Q 1

//FUNCOES
long long calcularCusto(const char* palavra, int estado_anterior, int indice_letra) {
    if (indice_letra == strlen(palavra)) {
        if (estado_anterior == ESTADO_P)
            return 0;
        else if (estado_anterior == ESTADO_Q)
            return 1;
    } else {
        if (estado_anterior == ESTADO_Q)
            return 2 * calcularCusto(palavra, ESTADO_Q, indice_letra + 1);
        else if (estado_anterior == ESTADO_P) {
            if (palavra[indice_letra] == 'a')
                return calcularCusto(palavra, ESTADO_P, indice_letra + 1);
            else
                return calcularCusto(palavra, ESTADO_P, indice_letra + 1)
                     + calcularCusto(palavra, ESTADO_Q, indice_letra + 1);
        }
    }
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    char palavra[MAX];
    long long total_custo;
    int indice_palavra = 0;

    //leitura - processamento e saida
    while (scanf("%s", palavra) != EOF) {
        indice_palavra++;
        total_custo = calcularCusto(palavra, ESTADO_P, 0);
        printf("Palavra %d\n", indice_palavra);
        printf("%lld\n\n", total_custo);
    }

    return 0;
}