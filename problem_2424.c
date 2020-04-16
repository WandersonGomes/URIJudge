//PROBLEM 2424
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2424
#include <stdio.h>

#define LARGURA_QUADRA 468
#define COMPRIMENTO_QUADRA 432

//FUNCAO QUE RETORNA SE A BOLA FOI DENTRO OU FORA
int foiDentro(int x, int y) {
    if ((x >= 0) && (x <= COMPRIMENTO_QUADRA)) {
        if ((y >= 0) && (y <= LARGURA_QUADRA)) {
            return 1;
        }
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int coordenada_x_bola = 0, coordenada_y_bola = 0;

    scanf("%d %d", &coordenada_x_bola, &coordenada_y_bola);

    if (foiDentro(coordenada_x_bola, coordenada_y_bola)) {
        printf("dentro\n");
    } else {
        printf("fora\n");
    }

    return 0;
}