//PROBLEM 2345
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2345
#include <stdio.h>

//FUNCAO QUE RETORNA O MODULOD E UM NUMERO INTEIRO (INT)
int abs(int a) {
    if (a < 0) {
        return -a;
    }
    return a;
}

//PROGRAMA PRINCIPAL
int main() {
    int jogador1 = 0, jogador2 = 0, jogador3 = 0, jogador4 = 0;
    int menor_diferenca = 0, tmp = 0;

    scanf("%d %d %d %d", &jogador1, &jogador2, &jogador3, &jogador4);

    //(A + B) (C + D)
    menor_diferenca = abs((jogador1 + jogador2) - (jogador3 - jogador4));
    
    //(A + C) (B + D)
    tmp = abs((jogador1 + jogador3) - (jogador2 + jogador4));
    if (tmp < menor_diferenca) {
        menor_diferenca = tmp;
    }

    //(A + D) (B + C)
    tmp = abs((jogador1 + jogador4) - (jogador2 + jogador3));
    if (tmp < menor_diferenca) {
        menor_diferenca = tmp;
    }

    printf("%d\n", menor_diferenca);

    return 0;
}