//PROBLEM 3140
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3140
#include <stdio.h>
#include <string.h>

//FUNCAO QUE VERIFICA SE UMA PALAVRA EH SUBSTRING
int substring(char* string1, char* string2) {
    int tam1 = strlen(string1);
    int tam2 = strlen(string2);
    int i = 0, j = 0;

    for (i = 0; i < (tam1 - tam2); i++) {
        for (j = 0; j < tam2; j++) {
            if (string1[i+j] != string2[j])
                break;
        }

        if (j == tam2)
            return i;
    }


    return -1;
}

//FUNCAO PARA FAZER A LEITURA DA STRING (LINHA)
void lerString(char* string, int tamanho) {
    char letra = 'a';
    int i = 0;

    while (1) {
        letra = getchar();
        
        if (letra == EOF)
            break;

        string[i] = letra;
        i++;

        if (letra == '\n')
            break;
    }

    string[i] = '\0';
}

//PROGRAMA PRINCIPAL
int main() {
    int imprime = 0;
    char linha[1001];

    while (1) {
        lerString(linha, 1001);
        if (strlen(linha) == 0)
            break;
        
        if (substring(linha, "<body>") != -1) {
            imprime = 1;
        } else if (substring(linha, "</body>") != -1) {
            imprime = 0;
        } else if (imprime) {
            printf("%s", linha);
        }
    }

    return 0;
}