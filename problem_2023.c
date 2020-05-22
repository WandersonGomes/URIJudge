//PROBLEM 2023
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2023
#include <stdio.h>
#include <string.h>

#define MAX 100

//FUNCAO QUE RETORNA O CARACTERE EM MAISCULO
char upperCaseCaractere(int caractere) {
    if ((caractere > 96) && (caractere < 123)) {
        return (caractere%97) + 65;
    }
    return caractere;
}

//FUNCAO QUE VERIFICA SE A PALAVRA1 EH MAIOR OU IGUAL OU MENOR
int comparaString(char palavra1[MAX], char palavra2[MAX]) {
    int tamanho_palavra1 = strlen(palavra1);
    int tamanho_palavra2 = strlen(palavra2);
    int tamanho = 0;
    int i = 0;
    char c1, c2;

    if (tamanho_palavra1 == 0) {
        return -1;
    } else if (tamanho_palavra2 == 0) {
        return 1;
    }

    if (tamanho_palavra1 < tamanho_palavra2) {
        tamanho = tamanho_palavra1;
    } else {
        tamanho = tamanho_palavra2;
    }

    for (i = 0; i < tamanho; i++) {
        c1 = upperCaseCaractere(palavra1[i]);
        c2 = upperCaseCaractere(palavra2[i]);
        if (c1 > c2) {
            return 1;
        } else if (c1 < c2) {
            return -1;
        }
    }

    if (tamanho_palavra1 > tamanho_palavra2) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int i = 0;
    char nome[MAX];
    char ultimo[MAX];

    strcpy(ultimo, "");
    while (scanf(" %[^\n]", nome) != EOF) {
        if (comparaString(nome,ultimo) == 1) {
            strcpy(ultimo, nome);
        }
    }
    printf("%s\n", ultimo);

    return 0;
}