//PROBLEM 2153
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2153

#include <stdio.h>
#include <string.h>

//DEFINICOES
#define MAX 31

//FUNCOES
int compararMetades(const char* palavra, int a, int b, int tamanho_palavra) {
    int i, j;

    j = b;
    for (i = a; i < b; i++) {
        if (palavra[i] != palavra[j])
                return 0;
        j++;
    }

    return 1;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    char palavra[MAX];
    int i, a, b, tamanho_palavra;

    //leitura - processamento - saida
    while (scanf("%s", palavra) != EOF) {
        tamanho_palavra = strlen(palavra);

        if (tamanho_palavra % 2 == 0) {
            a = 0;
            b = tamanho_palavra/2;
        } else {
            a = 1;
            b = (tamanho_palavra/2) + 1;
        }

        while (b < tamanho_palavra) {            
            if (compararMetades(palavra, a, b, tamanho_palavra))
                break;
            
            a += 2;
            b += 1;
        }

        for (i = 0; i < b; i++)
            printf("%c", palavra[i]);
        printf("\n");
    }

    return 0;
}