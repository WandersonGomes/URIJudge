//PROBLEM 2451
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2451
#include <stdio.h>

#define MAX 101

int main() {
    char tabuleiro[MAX][MAX];
    int ordem_tabuleiro = 0, i = 0, j = 0; 
    int direita = 1, pontos = 0, maior_pontuacao = 0; 
    
    scanf("%d", &ordem_tabuleiro);

    for (i = 0; i < ordem_tabuleiro; i++) {
        scanf("%s", tabuleiro[i]);
    }

    //percorre o tabuleiro
    for (i = 0; i < ordem_tabuleiro; i++) {
        if (direita) {
            for (j = 0; j < ordem_tabuleiro; j++) {
                if (tabuleiro[i][j] == 'o') {
                    pontos++;
                } else if (tabuleiro[i][j] == 'A') {
                    if (pontos > maior_pontuacao) {
                        maior_pontuacao = pontos;
                    }
                    pontos = 0;
                }
            }
            direita = 0;
        } else {
            for (j = ordem_tabuleiro - 1; j > -1; j--) {
                if (tabuleiro[i][j] == 'o') {
                    pontos++;
                } else if (tabuleiro[i][j] == 'A') {
                    if (pontos > maior_pontuacao) {
                        maior_pontuacao = pontos;
                    }
                    pontos = 0;
                }
            }
            direita = 1;
        }
    }

    //ultima verificacao caso so tenha comida e nenhum fantasma
    if (pontos > maior_pontuacao) {
        maior_pontuacao = pontos;
    }

    printf("%d\n", maior_pontuacao);
    
    return 0;
}