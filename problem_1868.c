//PROBLEM 1868
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1868
#include <stdio.h>
#include <string.h>

//FUNCAO PARA IMPRIMIR O QUADRO
void imprimirQuadro(char quadro[25][25], int dimensao) {
    int i, j;

    for (i = 0; i < dimensao; i++) {
        for (j = 0; j < dimensao; j++) {
            printf("%c", quadro[i][j]);
        }
        printf("\n");
    }
    printf("@\n");
}

//PROGRAMA PRINCIPAL
int main() {
    char quadro[25][25];
    int dimensao = 0, x = 0, y = 0, limite = 0, i = 0;

    while (1) {
        scanf("%d", &dimensao);
        if (dimensao == 0) {
            break;
        }

        limite = 2;

        memset(quadro, 79, sizeof(quadro));

        x = dimensao/2;
        y = dimensao/2;

        quadro[x][y] = 'X';
        imprimirQuadro(quadro, dimensao);
        quadro[x][y] = 'O';

        while (limite < dimensao) {
            for (i = 0; i < limite; i++) {
                quadro[x][y+1] = 'X';
                imprimirQuadro(quadro, dimensao);
                quadro[x][y+1] = 'O';
                x -= 1;
            }
            
            x += 1;
            for (i = 0; i < limite; i++) {
                quadro[x][y] = 'X';
                imprimirQuadro(quadro, dimensao);
                quadro[x][y] = 'O';
                y--;
            }
            
            y += 1;
            x += 1;
            for (i = 0; i < limite; i++) {
                quadro[x][y] = 'X';
                imprimirQuadro(quadro, dimensao);
                quadro[x][y] = 'O';
                x += 1;
            }

            x -= 1;
            y += 1;
            for (i = 0; i < limite; i++) {
                quadro[x][y] = 'X';
                imprimirQuadro(quadro, dimensao);
                quadro[x][y] = 'O';
                y += 1;
            }
            y -= 1;

            limite += 2;
        }
    }

    return 0;
}