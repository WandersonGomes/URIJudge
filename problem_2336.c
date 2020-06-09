//PROBLEM 2336
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2336
#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MODULO 1000000007

//FUNCAO PARA PREENCHIMENTO DOS VALORES POSICIONAIS
void preencheValorPosicional(long long int *posicional) {
    int i = 0;
    long long int resultado = 1;
    
    for (i = 0; i < MAX; i++) {
        posicional[i] = resultado;
        resultado = (resultado * 26)%MODULO;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    long long int valor_posicional[1000];
    char numero_base_abc[1001];
    long long int resultado = 0;
    int i = 0, tamanho = 0;
    

    for (i = 0; i < 1000; i++) {
        preencheValorPosicional(valor_posicional);
    }

    while (scanf("%s", numero_base_abc) != EOF) {
        tamanho = strlen(numero_base_abc) - 1; //usado para o indice por isso o -1
        resultado = 0;

        for (i = tamanho; i >= 0; i--) {
            resultado = resultado + ((numero_base_abc[i] - 65) * valor_posicional[tamanho-i]);
            resultado = resultado%MODULO;
        }

        printf("%lld\n", resultado);
    }

    return 0;
}