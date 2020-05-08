//PROBLEM 1121
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1121
#include <stdio.h>

#define MAX 100
#define MAX_INSTRUCOES 50001

#define NORTE 0
#define LESTE 1
#define SUL 2
#define OESTE 3

char campo[MAX][MAX];

//ROBO
struct tipo_robo {
    int x;
    int y;
    int direcao;
};

//TRANSFORMA A DIRECAO DE CHAR PARA UM VALOR NUMERICO
int direcaoRobo(char valor) {
    switch (valor)
    {
        case 'N': return 0;
        case 'L': return 1;
        case 'S': return 2;
        case 'O': return 3; 
    }
}

//ATUALIZA DIRECAO DO ROBO
int atualizaDirecaoRobo(int direcao_atual, char comando) {
    int tmp = 0;
    if (comando == 'D') {
        tmp = direcao_atual + 1;
        if (tmp == 4) {
            return 0;
        }
        return tmp;
    } else {
        tmp = direcao_atual - 1;
        if (tmp == -1) {
            return 3;
        }
        return tmp;
    }
}

//MOVIMENTA ROBO
void movimentaRobo(struct tipo_robo *robo, int limite_y, int limite_x, int *score) {
    int tmp_x = 0, tmp_y = 0;

    //NORTE
    if (((*robo).direcao) == NORTE) {
        if ((*robo).y - 1 >= 0) {
            tmp_y = (*robo).y - 1;
            tmp_x = (*robo).x;

            if (campo[tmp_y][tmp_x] != '#') {
                (*robo).y = tmp_y;
                if (campo[tmp_y][tmp_x] == '*') {
                    (*score)++;
                    campo[tmp_y][tmp_x] = '.';
                }
            }
        }
    }

    //SUL
    if (((*robo).direcao) == SUL) {
        if ((*robo).y + 1 < limite_y){
            tmp_y = (*robo).y + 1;
            tmp_x = (*robo).x;

            if (campo[tmp_y][tmp_x] != '#') {
                (*robo).y = tmp_y;
                if (campo[tmp_y][tmp_x] == '*') {
                    (*score)++;
                    campo[tmp_y][tmp_x] = '.';
                }
            }
        }
    }

    //LESTE
    if (((*robo).direcao) == LESTE) {
        if ((*robo).x + 1 < limite_x){
            tmp_y = (*robo).y;
            tmp_x = (*robo).x + 1;

            if (campo[tmp_y][tmp_x] != '#') {
                (*robo).x = tmp_x;
                if (campo[tmp_y][tmp_x] == '*') {
                    (*score)++;
                    campo[tmp_y][tmp_x] = '.';
                }
            }
        }
    }

    //OESTE
    if (((*robo).direcao) == OESTE) {
        if ((*robo).x - 1 >= 0){
            tmp_y = (*robo).y;
            tmp_x = (*robo).x - 1;

            if (campo[tmp_y][tmp_x] != '#') {
                (*robo).x = tmp_x;
                if (campo[tmp_y][tmp_x] == '*') {
                    (*score)++;
                    campo[tmp_y][tmp_x] = '.';
                }
            }
        }
    }
}


//PROGRAMA PRINCIPAL
int main() {
    char comandos[MAX_INSTRUCOES];
    int direcoes[] = {0, 1, 2, 3};
    int numero_linhas = 0, numero_colunas = 0;
    long int numero_instrucoes;
    char linha[MAX]; //linha utilizada devido ao tipo de leitura da entrada
    int i = 0, j = 0, score = 0;
    struct tipo_robo robo;

    while (1) {
        score = 0;
        scanf("%d %d %ld%*c", &numero_linhas, &numero_colunas, &numero_instrucoes);
        if ((numero_linhas == 0) && (numero_colunas == 0)) {
            break;
        }
        //prepara campo
        for (i = 0; i < numero_linhas; i++) {
            scanf("%s", linha);
            for (j = 0; j < numero_colunas; j++) {
                campo[i][j] = linha[j];
                if (campo[i][j] != '.' && campo[i][j] != '#' && campo[i][j] != '*') {
                    robo.x = j;
                    robo.y = i;
                    robo.direcao = direcaoRobo(campo[i][j]);
                    campo[i][j] = '.';
                }
            }
        }

        //realiza os comandos
        scanf("%s%*c", comandos);
        for (i = 0; i < numero_instrucoes; i++) {
            if (comandos[i] != 'F') {
                robo.direcao = atualizaDirecaoRobo(robo.direcao, comandos[i]);
            } else {
                movimentaRobo(&robo, numero_linhas, numero_colunas, &score);
            }
        }

        printf("%d\n", score);
    }

    return 0;
}