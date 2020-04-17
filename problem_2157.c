//PROBLEM 2157
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2157
#include <stdio.h>

//FUNCAO PARA ESCREVE A SEQUENCIA ESPELHADA
void escreveSequenciaEspelhada(int inicio, int fim) {
    int tmp = 0;

    //esquerda
    int i = 0;
    for (i = inicio; i <= fim; i++) {
        printf("%d", i);
    }

    //direita
    for (i = fim; i >= inicio; i--) {
        tmp = i;
        while (tmp != 0) {
            printf("%d", tmp%10);
            tmp = tmp/10;
        }
    }    
    printf("\n");
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_testes = 0;
    int inicio = 0, fim = 0;
    scanf("%d", &quantidade_testes);

    int i = 0;
    for (; i < quantidade_testes; i++) {
        scanf("%d %d", &inicio, &fim);
        escreveSequenciaEspelhada(inicio, fim);
    }

    return 0;
}