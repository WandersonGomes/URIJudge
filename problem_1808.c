//PROBLEM 1808
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1808
#include <stdio.h>
#include <string.h>

//CARACTERE PARA NUMERO
int caractereNumero(char caractere) {
    switch(caractere) {
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
    int soma = 0, qtd_notas = 0;
    int tam = 0, i = 0;
    char notas[101];

    scanf("%s", notas);
    tam = strlen(notas);

    for (i = 0; i < tam; i++) {
        if (notas[i] != '1') {
            soma = soma + caractereNumero(notas[i]);
        } else {
            if (i < tam) {
                if (notas[i+1] == '0') {
                    soma += 10;
                    i++;
                } else {
                    soma += 1;
                }
            } else {
                soma += 1;
            }
        }
        qtd_notas++;
    }

    printf("%.2lf\n", ((soma * 1.0)/qtd_notas));


    return 0;
}