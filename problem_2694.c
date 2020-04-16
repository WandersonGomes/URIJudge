//PROBLEM 2694
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2694
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_NUMERO 5
#define TAMANHO_TEXTO 15

//serve para limpar o buffer
char keyboard[BUFSIZ];

//FUNCAO QUE INFORMA SE UM CARACTERE EH UM NUMERO OU UM SIMBOLO DE + OU -
int ehDigitoOuSinal(char caractere) {
    switch (caractere)
    {
        case '-': return 1;
        case '+': return 1;
        case '0': return 1;
        case '1': return 1;
        case '2': return 1;
        case '3': return 1;
        case '4': return 1;
        case '5': return 1;
        case '6': return 1;
        case '7': return 1;
        case '8': return 1;
        case '9': return 1;
        default:
            return 0;
    }
}

//FUNCAO PARA CALCULAR A SOMA
int calculaSoma(char texto[TAMANHO_TEXTO]) {
    char numero[TAMANHO_NUMERO];
    numero[0] = '\0';
    int numeros[3];
    
    int i = 0, j = 0, k = 0;
    for(; i < TAMANHO_TEXTO; i++) {
        if (ehDigitoOuSinal(texto[i])) {
            numero[j] = texto[i];
            numero[j+1] = '\0';
            j++;
        } else {
            if (strlen(numero) > 0) {
                numeros[k] = atoi(numero);
                numero[0] = '\0';
                j = 0;
                k++;
                if (k == 3) {
                    break;
                }
            }
        }
    }

    return (numeros[0] + numeros[1] + numeros[2]);
}


//PROGRAMA PRINCIPAL
int main() {
    long int quantidade_testes = 0;
    char linha[TAMANHO_TEXTO];
    scanf("%ld", &quantidade_testes);
    
    long int i = 0;
    for (; i < quantidade_testes; i++) {
        setbuf(stdin, keyboard); //limpa buffer
        scanf("%s", linha);
        printf("%d\n", (calculaSoma(linha)));
    }

    return 0;
}