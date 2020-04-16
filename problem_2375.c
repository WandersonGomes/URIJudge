//PROBLEM 2375
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2375
#include <stdio.h>

//FUNCAO PARA VERIFICAR A POSSIBILIDADE DA INSERCAO DA BOLA NA CAIXA
int cabeNaCaixa(int diametro, int largura, int altura, int profundidade){
    if (diametro > largura) {
        return 0;
    }
    if (diametro > altura) {
        return 0;
    }
    if (diametro > profundidade) {
        return 0;
    }

    return 1;
}

//PROGRAMA PRINCIPAL
int main() {
    int diametro = 0, altura_caixa = 0, largura_caixa = 0, profundidade_caixa = 0;

    scanf("%d", &diametro);
    scanf("%d %d %d", &altura_caixa, &largura_caixa, &profundidade_caixa);

    if (cabeNaCaixa(diametro, largura_caixa, altura_caixa, profundidade_caixa)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}