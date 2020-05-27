//PROBLEM 1430
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1430
#include <stdio.h>
#include <string.h>

#define MAX 201
#define UM 1.000000

//FUNCAO QUE RETORNA O VALOR DA NOTA
double valorNota(char nota) {
    switch (nota) {
        case 'W': return 1.000000; // 1
        case 'H': return 0.500000; // 1/2
        case 'Q': return 0.250000; // 1/4
        case 'E': return 0.125000; // 1/8
        case 'S': return 0.062500; // 1/16
        case 'T': return 0.031250; // 1/32
        case 'X': return 0.015625; // 1/64
    }
}


//PROGRAMA PRINCIPAL
int main() {
    char composicao[MAX];
    int compassos_corretos = 0;
    int tamanho = 0;
    double compasso = 0.00;

    while (1) {
        scanf("%s", composicao);
        tamanho = strlen(composicao);
        if (tamanho == 1) {
            break;
        }
        compassos_corretos = 0;
        compasso = 0.00;
        tamanho = tamanho - 1; //indice do vetor

        //percorre a pilha para realizar o calculo
        while (tamanho >= 0) {
            if (composicao[tamanho] == '/') {
                if (compasso == UM) {
                    compassos_corretos++;
                }
                compasso = 0; 
            } else {
                compasso += valorNota(composicao[tamanho]);
            }
            tamanho--;
        }

        printf("%d\n", compassos_corretos);
    }

    return 0;
}