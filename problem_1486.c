//PROBLEM 1486
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1486
//Obs.:
//numero de pontos de processamento = colunas
//numero de medicoes = linhas
#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    int linhas = 0, colunas = 0, l = 0, c = 0;
    int tamanho_palito = 0, resultado = 0, tmp = 0;
    int matriz[MAX][MAX];
    memset(matriz, 0, sizeof(matriz));

    while (1) {
        scanf("%d %d %d", &colunas, &linhas, &tamanho_palito);
        if (colunas == 0 && linhas == 0 && tamanho_palito == 0) {
            break;
        }
        resultado = 0;

        //preenche as leituras
        for (l = 0; l < linhas; l++) {
            for (c = 0; c < colunas; c++) {
                scanf("%d", &matriz[l][c]);
            }
        }

        //verifica os palitos
        for (c = 0; c < colunas; c++) {
            tmp = 0;
            for (l = 0; l < linhas; l++) {
                if ((matriz[l][c] == 0) && (tmp != 0)) {
                    if (tmp >= tamanho_palito) {
                        resultado++;
                    }
                    tmp = 0;
                } else if (matriz[l][c] != 0) {
                    tmp++;
                    if (l == (linhas - 1)) {
                        if (tmp >= tamanho_palito) {
                            resultado++;
                        }
                    }
                }
            }
        }

        printf("%d\n", resultado);
    }
    return 0;
}