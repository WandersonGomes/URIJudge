//PROBLEM 1875
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1875
#include <stdio.h>

#define RED 'R'
#define GREEN 'G'
#define BLUE 'B'

//FUNCAO QUE RETORNA A QUANTIDADE DE GOLS
int quantidadeGols(char equipe1, char equipe2) {
    if (equipe1 == RED) {
        if (equipe2 == GREEN) {
            return 2;
        } else {
            return 1; 
        }
    }

    if (equipe1 == GREEN) {
        if (equipe2 == BLUE) {
            return 2;
        } else {
            return 1;
        }
    }

    if (equipe1 == BLUE) {
        if (equipe2 == RED) {
            return 2;
        } else {
            return 1;
        }
    }

    return 0;
}

//RESULTADO DA PARTIDA
void printResultado(long int gols_red, long int gols_green, long int gols_blue) {
    //UTILIZANDO A VARIAVEL PARA FICAR MAIS CLARO O CODIGO
    char menor;

    //TREMPATE
    if ((gols_red == gols_green) && (gols_green == gols_blue)) {
        printf("trempate\n");
        return;
    }

    //CASO RED SEJA O VENCEDOR
    if ((gols_red > gols_green) && (gols_red > gols_blue)) {
        printf("red\n"); return;
    }

    if ((gols_green > gols_red) && (gols_green > gols_blue)) {
        printf("green\n"); return;
    }

    if ((gols_blue > gols_green) && (gols_blue > gols_red)) {
        printf("blue\n"); return;
    }

    printf("empate\n");
}

//limpa buffer
char keyboard[BUFSIZ];

//PROGRAMA PRINCIPAL
int main() {
    long int gols_red = 0, gols_green = 0, gols_blue = 0;
    long int quantidade_testes = 0, quantidade_gols = 0;
    char equipe1, equipe2;
    scanf("%ld%*c", &quantidade_testes);
    
    long int i = 0, j = 0;
    for (; i < quantidade_testes; i++) {
        gols_red = 0; gols_green = 0; gols_blue = 0;
        scanf("%ld%*c", &quantidade_gols);

        for (j = 0; j < quantidade_gols; j++) {
            setbuf(stdin, keyboard);
            scanf("%c %c%*c", &equipe1, &equipe2);

            if (equipe1 == RED) { gols_red += quantidadeGols(equipe1, equipe2); }
            if (equipe1 == GREEN) { gols_green += quantidadeGols(equipe1, equipe2); }
            if (equipe1 == BLUE) { gols_blue += quantidadeGols(equipe1, equipe2); }
        }

        printResultado(gols_red, gols_green, gols_blue);
    }
    return 0;
}