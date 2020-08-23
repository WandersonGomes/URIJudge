//PROBLEM 2409
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2409
#include <stdio.h>

//FUNCAO QUE INFORMA SE EH POSSIVEL OU NAO ENTRA DA MANEIRA QUERIDA
int consegueEntrar(int largura_porta, int altura_porta, int x, int y) {
    if ((x <= largura_porta) && (y <= altura_porta)) {
        return 1;
    }

    if ((x <= altura_porta) && (y <= largura_porta)) {
        return 1;
    }

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int largura = 0, altura = 0, comprimento = 0;
    int altura_porta = 0, largura_porta = 0;

    scanf("%d %d %d", &largura, &altura, &comprimento);
    scanf("%d %d", &altura_porta, &largura_porta);
    
    //caso 1
    if (consegueEntrar(largura_porta, altura_porta, largura, altura)) {
        printf("S\n");
    } else {
        //caso 2
        if (consegueEntrar(largura_porta, altura_porta, largura, comprimento)) {
            printf("S\n");
        } else {
            //caso 3
            if (consegueEntrar(largura_porta, altura_porta, comprimento, altura)) {
                printf("S\n");
            } else {
                printf("N\n");
            }    
        }
    }

    return 0;
}