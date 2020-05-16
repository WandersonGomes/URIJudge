//PROBLEM 1031
//link = https://www.urionlinejudge.com.br/judge/pt/runs/code/18194956
#include <stdio.h>
#include <string.h>

#define MAX 101

//FUNCAO PARA DESCOBRIR A ESTACAO QUE FICARA LIGADA APOS M PULOS
//Como eh possivel perceber eh a mesma funcao recursiva para descobrir a posicacao
//que se salva no problema de Josephus
int josephusRecursiva(int pessoas, int pulos) {
    if (pessoas == 1) {
        return 1;
    }

    return (pulos - 1 + josephusRecursiva(pessoas - 1, pulos))%pessoas + 1;
}

//PROGRAMA PRINCIPAL
int main() {
    //memorizacao para agilizar os calculos
    int memo[MAX];
    memset(memo, 0, sizeof(memo));

    int numero = 0, saltos = 0;
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }

        if (memo[numero] == 0) {
            saltos = 1;
            while (josephusRecursiva(numero - 1, saltos) != 12) {
                saltos++;
            }
            memo[numero] = saltos;
        }
        
        printf("%d\n", memo[numero]);
    }
    return 0;
}
