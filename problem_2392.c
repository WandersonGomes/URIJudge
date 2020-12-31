//PROBLEM 2392
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2392
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int qtd_pedras = 0, qtd_sapos = 0, i = 0;
    int posicao_inicial = 0, salto = 0, atual = 0;
    int* caminho = NULL;

    scanf("%d %d", &qtd_pedras, &qtd_sapos);
    caminho = (int*) malloc(sizeof(int) * qtd_pedras);

    memset(caminho, 0, sizeof(caminho));
    for (i = 0; i < qtd_sapos; i++) {
        scanf("%d %d", &posicao_inicial, &salto);
        posicao_inicial--;

        //frente
        atual = posicao_inicial;
        while (atual < qtd_pedras) {
            caminho[atual] = 1;
            atual += salto;
        }

        //atras
        atual = posicao_inicial;
        while (atual > -1) {
            caminho[atual] = 1;
            atual -= salto;
        }
    }

    for (i = 0; i < qtd_pedras; i++)
        printf("%d\n", caminho[i]);


    return 0;
}