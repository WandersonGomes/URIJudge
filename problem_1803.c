//PROBLEM 1803
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1803
#include <stdio.h>
#include <string.h>

#define MAX 82

//FUNCAO QUE RETORNA O VALOR INTEIRO DE UM ALGARISMO
int algarismoNumero(char algarismo) {
    switch (algarismo)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    char matriz[4][MAX];
    int i = 0, j = 0, k = 0;
    long long int chave_f = 0, chave_l = 0;
    int tamanho = 0, multiplicador = 0, letra = 0;
    long long int tmp = 0;

    //preenche matriz
    for (i = 0; i < 4; i++) {
        scanf("%s", matriz[i]);
    }
    tamanho = strlen(matriz[0]);

    //chave F
    multiplicador = 1000;
    for (i = 0; i < 4; i++) {
        chave_f += (algarismoNumero(matriz[i][0]) * multiplicador);
        multiplicador = multiplicador/10;
    }

    //chave M
    multiplicador = 1000;
    for (i = 0; i < 4; i++) {
        chave_l += (algarismoNumero(matriz[i][tamanho-1]) * multiplicador);
        multiplicador = multiplicador/10;
    }

    //calcula os caracteres
    for (j = 1; j < (tamanho - 1); j++) {
        tmp = 0;
        multiplicador = 1000;
        for (i = 0; i < 4; i++) {
            tmp += (algarismoNumero(matriz[i][j]) * multiplicador);
            multiplicador = multiplicador/10;
        }

        letra = ((chave_f*tmp) + chave_l)%257;
        printf("%c", letra);
    }

    printf("\n");

    return 0;
}