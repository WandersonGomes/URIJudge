//PROBLEM 2473
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2473
#include <stdio.h>

#define QUANTIDADE_NUMEROS 6
#define TERNO 3
#define QUADRA 4
#define QUINA 5
#define SENA 6

//FUNCAO QUE RETORNA O NUMERO DE ACERTOS DE FLAVINHO
int acertos(int numeros_sorteados[QUANTIDADE_NUMEROS], int numeros_jogados[QUANTIDADE_NUMEROS]) {
    int i = 0, j = 0, acertos = 0;
    for(; i < QUANTIDADE_NUMEROS; i++) {
         for (j = 0; j < QUANTIDADE_NUMEROS; j++) {
             if (numeros_jogados[i] == numeros_sorteados[j]) {
                acertos++;
                break; 
             }
         }
    }

    return acertos;
}

//PROGRAMA PRINCIPAL
int main() {
    int resultado_loteria[QUANTIDADE_NUMEROS], numeros_jogados[QUANTIDADE_NUMEROS];

    int i = 0;
    for (; i < QUANTIDADE_NUMEROS; i++) {
        scanf("%d", &numeros_jogados[i]);
    }
    for(i = 0; i < QUANTIDADE_NUMEROS; i++) {
        scanf("%d", &resultado_loteria[i]);
    }

    switch (acertos(resultado_loteria, numeros_jogados))
    {
        case TERNO: printf("terno\n"); break;
        case QUADRA: printf("quadra\n"); break;
        case QUINA: printf("quina\n"); break;
        case SENA: printf("sena\n"); break;
        
        default: printf("azar\n"); break;
    }

    return 0;
}