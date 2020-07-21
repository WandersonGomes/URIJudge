//PROBLEM 1147
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1147
/*
Obs.:
Nao eh a melhor abordagem devido o tempo de procura na lista de posicoes de peoes,
mas vai ficar claro o objetivo do codigo.
*/
#include <stdio.h>

//FUNCAO QUE VERIFICA SE EH POSSIVEL O MOVIMENTO
int ehPossivelMovimento(int posicao_peoes[8][2], int linha, int coluna) {
    int i = 0;
    linha = linha + 1;

    for (i = 0; i < 8; i++) {
        if ((posicao_peoes[i][0] == linha) && (posicao_peoes[i][1] == coluna - 1)) {
            return 0;
        }
        if ((posicao_peoes[i][0] == linha) && (posicao_peoes[i][1] == coluna + 1)) {
            return 0;
        }
    }

    return 1;
}

//PROGRAMA PRINCIPAL
int main() {
    int cavalo_linha = 0, cavalo_coluna = 0;
    int linha = 0, teste = 0;
    char coluna = 'a';
    int numero_movimentos = 0, i = 0;
    int lista_movimentos[8][2];
    int lista_posicao_peoes[8][2];

    while (1) {
        teste++;
        //leitura das coordenadas
        scanf("%d", &linha);
        if (linha == 0) {
            break;
        }
        scanf("%c", &coluna);
        
        //linha e coluna onde o cavalo esta
        cavalo_linha = linha - 1;
        cavalo_coluna = coluna%97;

        //posicao dos peoes
        for (i = 0; i < 8; i++) {
            scanf("%d%c", &linha, &coluna);
            lista_posicao_peoes[i][0] = linha-1;
            lista_posicao_peoes[i][1] = coluna%97;
        }

        //movimentos que o cavalo pode realizar
        lista_movimentos[0][0] = cavalo_linha + 2;
        lista_movimentos[0][1] = cavalo_coluna + 1;

        lista_movimentos[1][0] = cavalo_linha + 1;
        lista_movimentos[1][1] = cavalo_coluna + 2;

        lista_movimentos[2][0] = cavalo_linha - 1;
        lista_movimentos[2][1] = cavalo_coluna + 2;

        lista_movimentos[3][0] = cavalo_linha - 2;
        lista_movimentos[3][1] = cavalo_coluna + 1;

        lista_movimentos[4][0] = cavalo_linha - 2;
        lista_movimentos[4][1] = cavalo_coluna - 1;

        lista_movimentos[5][0] = cavalo_linha - 1;
        lista_movimentos[5][1] = cavalo_coluna - 2;

        lista_movimentos[6][0] = cavalo_linha + 1;
        lista_movimentos[6][1] = cavalo_coluna - 2;

        lista_movimentos[7][0] = cavalo_linha + 2;
        lista_movimentos[7][1] = cavalo_coluna - 1;

        //checa o numero de movimentos validos
        numero_movimentos = 0;
        for (i = 0; i < 8; i++) {
            //se a linha esta nos limites do tabuleiro
            if ((lista_movimentos[i][0] > -1) && (lista_movimentos[i][0] < 8)) {
                //se a coluna esta nos limites do tabuleiro
                if ((lista_movimentos[i][1] > -1) && (lista_movimentos[i][1] < 8)) {
                    if (ehPossivelMovimento(lista_posicao_peoes, lista_movimentos[i][0], lista_movimentos[i][1])) {
                        numero_movimentos++;
                    }
                }
            }
        }

        //apresenta resultado
        printf("Caso de Teste #%d: %d movimento(s).\n", teste, numero_movimentos);
    }

    return 0;
}