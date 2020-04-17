//PROBLEM 2293
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2293
#include <stdio.h>

#define LARGURA_MAX 101
#define ALTURA_MAX 101

int main() {
    long long int criatorio[LARGURA_MAX][ALTURA_MAX], maior_soma = 0; //utilizacao de mais memoria para um processamento mais rapido
    int numero_linhas = 0, numero_colunas = 0;

    scanf("%d %d", &numero_linhas, &numero_colunas);

    //inicializa o criatorio para nao ter lixo da memoria
    int linha = 0, coluna = 0;
    for (; linha <= numero_linhas; linha++) {
        for (coluna = 0; coluna <= numero_colunas; coluna++) {
            criatorio[linha][coluna] = 0;
        }
    }
    
    //preenche o criatorio
    for (linha = 0; linha < numero_linhas; linha++) {
        for (coluna = 0; coluna < numero_colunas; coluna++) {
            scanf("%lld", &criatorio[linha][coluna]);
            criatorio[linha][numero_colunas] += criatorio[linha][coluna];
            criatorio[numero_linhas][coluna] += criatorio[linha][coluna];
            
            //verifica logo a maior soma
            if (criatorio[linha][numero_colunas] > maior_soma) {
                maior_soma = criatorio[linha][numero_colunas];
            }
            if (criatorio[numero_linhas][coluna] > maior_soma) {
                maior_soma = criatorio[numero_linhas][coluna];
            }
        }
    }

    printf("%lld\n", maior_soma);

    return 0;
}