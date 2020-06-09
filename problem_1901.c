//PROBLEM 1901
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1901
#include <stdio.h>
#include <stdlib.h>

#define MAX 200

//NO DA ARVORE
struct no {
    int valor;

    struct no *esquerdo;
    struct no *direito;
};
typedef struct no NO;

//INSERE NA ARVORE E CONTA A QUANTIDADE DE ESPECIES DIFERENTES
int especies_diferentes = 0;
NO* insereNo(NO* raiz, int valor) {
    NO *aux = NULL;
    if (raiz == NULL) {
        aux = (NO*) malloc(sizeof(NO));
        aux->valor = valor;
        aux->esquerdo = NULL;
        aux->direito = NULL;
        especies_diferentes++;
        return aux;
    } else {
        if (valor < raiz->valor) {
            raiz->esquerdo = insereNo(raiz->esquerdo, valor);
        } else if (valor > raiz->valor) {
            raiz->direito = insereNo(raiz->direito, valor);
        }

        return raiz;
    }
}

//FUNCAO PARA ELIMINAR A ARVORE
void liberaArvore(NO* raiz) {
    if (raiz != NULL) {
        liberaArvore(raiz->esquerdo);
        liberaArvore(raiz->direito);
        free(raiz);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int grid[MAX][MAX];
    int tamanho = 0, i = 0, j = 0, k = 0;
    int max = 0;

    NO* raiz = NULL;

    scanf("%d", &tamanho);

    //preenche o grid
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    max = tamanho * 2;
    for (i = 0; i < max; i++) {
        scanf("%d %d", &j, &k);
        raiz = insereNo(raiz, grid[j-1][k-1]);
    }
    liberaArvore(raiz);

    printf("%d\n", especies_diferentes);

    return 0;
}