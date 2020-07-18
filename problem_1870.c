//PROBLEM 1870
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1870
#include <stdio.h>

#define MAX 9

int main() {
    int matriz[MAX][MAX];
    int linhas = 0, colunas = 0, partida = 0;
    int l = 0, c = 0, boom = 0, movimenta = 0;
    int ventilador_esquerda = 0, ventilador_direita = 0;

    while (1) {
        boom = 0;
        scanf("%d %d %d", &linhas, &colunas, &partida);
        if (linhas == 0) {
            break;
        }
        partida--;
        
        //preenchimento da matriz
        for (l = 0; l < linhas; l++)
            for (c = 0; c < colunas; c++)
                scanf("%d", &matriz[l][c]);

        //comeca o caminho do balao
        c = partida;
        for (l = 0; l < linhas; l++) {
            //verifica ao iniciar uma linha se ele ja vai bater em um ventilador
            if (matriz[l][c] > 0) {
                boom = 1;
                break;
            }

            //descobre o valor do ventilador da esquerda
            ventilador_esquerda = c - 1;
            while (matriz[l][ventilador_esquerda] < 1) {
                ventilador_esquerda--;
            }

            //descobre o valor do ventilador da direita
            ventilador_direita = c + 1;
            while (matriz[l][ventilador_direita] < 1) {
                ventilador_direita++;
            }

            //calcula o quanto o balao se movimenta
            movimenta = matriz[l][ventilador_esquerda] - matriz[l][ventilador_direita];

            //verifica se no movimento o balao encontra algum ventilador
            c += movimenta;
            if ((c <= ventilador_esquerda) || (c >= ventilador_direita)) {
                boom = 1;
                break;
            }
        }

        //checa se estourou ou nao
        if (boom) {
            printf("BOOM %d %d\n", l+1, c+1);
        } else {
            printf("OUT %d\n", c+1);
        }
    }

    return 0;
}