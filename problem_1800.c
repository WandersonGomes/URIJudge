//PROBLEM 1800
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1800
#include <stdio.h>
#include <stdlib.h>

//NO DA ARVORE
struct no {
    long long int valor;
    struct no* esquerdo;
    struct no* direito;
};
typedef struct no No;

//FUNCAO QUE INICALIZA A ARVORE
No* inicializaArvore() {
    return NULL;
}

//FUNCAO QUE INSERE NO NA ARVORE
No* insereNoArvore(No *raiz, int valor) {
    No *aux = NULL;
    if (raiz == NULL) {
        aux = (No *) malloc(sizeof(No));
        aux->valor = valor;
        aux->esquerdo = NULL;
        aux->direito = NULL;
        return aux;
    } else {
        if (valor > raiz->valor) {
            raiz->direito = insereNoArvore(raiz->direito, valor);
        } else if (valor < raiz->valor) {
            raiz->esquerdo = insereNoArvore(raiz->esquerdo, valor);
        }
        return raiz;
    }
}

//FUNCAO QUE LIMPA A ARVORE
void limpaArvore(No *raiz) {
    if (raiz != NULL) {
        limpaArvore(raiz->esquerdo);
        limpaArvore(raiz->direito);
        free(raiz);
    }
}

//FUNCAO QUE PROCURA ELEMENTO
int procuraElementoArvore(No *raiz, long long int valor) {
    if (raiz == NULL) {
        return 0;
    } else {
        if (raiz->valor == valor) {
            return 1;
        } else if (valor < raiz->valor) {
            return procuraElementoArvore(raiz->esquerdo, valor);
        } else {
            return procuraElementoArvore(raiz->direito, valor);
        }
    }
}

//PROGRAMA PRINCIPAL
int main() {
    long long int escritorio = 0;
    long long int quantidade_escritorios = 0, visitados = 0, i = 0;
    scanf("%lld %lld", &quantidade_escritorios, &visitados);

    No *raiz = inicializaArvore();
    for (i = 0; i < visitados; i++) {
        scanf("%lld", &escritorio);
        raiz = insereNoArvore(raiz, escritorio);
    }

    for (i = 0; i < quantidade_escritorios; i++) {
        scanf("%lld", &escritorio);
        if (procuraElementoArvore(raiz, escritorio) == 1) {
            printf("0\n");
        } else {
            insereNoArvore(raiz, escritorio);
            printf("1\n");
        }
    }

    limpaArvore(raiz);
    return 0;
}