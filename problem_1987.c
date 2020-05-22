//PROBLEM 1987
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1987
#include <stdio.h>

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
    char numero[11];
    int quantidade_algarismo = 0;
    int soma_algarismo = 0, i = 0;

    while (scanf("%d %s", &quantidade_algarismo, numero) != EOF) {
        soma_algarismo = 0;
        
        for (i = 0; i < quantidade_algarismo; i++) {
            soma_algarismo += (algarismoNumero(numero[i]));
        }

        if (soma_algarismo%3 == 0) {
            printf("%d sim\n", soma_algarismo);
        } else {
            printf("%d nao\n", soma_algarismo);
        }
    }

    return 0;
}