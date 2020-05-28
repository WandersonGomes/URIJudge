//PROBLEM 3004
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3004
#include <stdio.h>

//FUNCAO QUE RETORNA A DISTANCIA ENTRE DOIS PONTOS
int ehPossivel(int x1, int y1, int x2, int y2) {    
    //sem giro
    if (x1 < x2 && y1 < y2) {
        return 1;
    }

    //gira o primeiro
    if (y1 < x2 && x1 < y2) {
        return 1;
    }

    //gira o segundo
    if (x1 < y2 && y1 < x2) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int retangulo1_x = 0, retangulo1_y = 0;
    int retangulo2_x = 0, retangulo2_y = 0;

    int numero_testes = 0, i = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%d %d %d %d", &retangulo1_x, &retangulo1_y, &retangulo2_x, &retangulo2_y);

        if (ehPossivel(retangulo1_x, retangulo1_y, retangulo2_x, retangulo2_y)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}