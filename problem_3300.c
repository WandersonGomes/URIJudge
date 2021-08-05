//PROBLEM 3300
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3300
#include <stdio.h>
#include <string.h>

int main() {
    //dados
    char numero[101];
    int tamanho = 0, i = 0;

    //leitura
    scanf("%s", numero);

    //calculo
    tamanho = strlen(numero);
    for (i = 0; i < (tamanho - 1); i++) {
        if (numero[i] == '1') {
            if (numero[i+1] == '3') {
                printf("%s es de Mala Suerte\n", numero);
                break;
            }
        }
    }

    if (i == (tamanho - 1))
        printf("%s NO es de Mala Suerte\n", numero);

    return 0;
}