//PROBLEM 2450
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2450
#include <stdio.h>

int main() {
    int qtd_linhas = 0, qtd_colunas = 0, i = 0, j = 0;
    long long int matriz[500][500];
    int flag_linha_zerada = 1, coluna_anterior = 0, resultado = 1;

    //preenche a matriz
    scanf("%d %d", &qtd_linhas, &qtd_colunas);

    for (i = 0; i < qtd_linhas; i++)
        for (j = 0; j < qtd_colunas; j++)
            scanf("%lld", &matriz[i][j]);

    //faz a inicializacao de acordo com a primeira linha
    for (j = 0; j < qtd_colunas; j++) {
        if (matriz[0][j] != 0) {
            flag_linha_zerada = 0;
            coluna_anterior = j;
            break;
        }
    }

    for (i = 1; i < qtd_linhas; i++) {
        for (j = 0; j < qtd_colunas; j++) {
            //se a linha anterior estava zerada e encontramos um termo abaixo nao zerado
            if (flag_linha_zerada && (matriz[i][j] != 0)) {
                resultado = 0;
                break;
            }

            //verifica se os elementos abaixo e a esquerda sao zerados
            if ((matriz[i][j] != 0) && (j <= coluna_anterior)) {
                resultado = 0;
                break;
            }

            //atualiza a coluna coluna_anterior
            if ((j > coluna_anterior) && (matriz[i][j] != 0)) {
                flag_linha_zerada = 0;
                coluna_anterior = j;
                break;
            }
        }

        //verifica se o resultado ja eh incompativel
        if (!resultado)
            break;
        
        if (j == qtd_colunas)
            flag_linha_zerada = 1;
    }

    if (resultado)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}