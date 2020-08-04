//PROBLEM 1215
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1215
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 201

//FUNCAO QUE RETORNA A LETRA MINUSCULA
char letraMinuscula(char letra) {
    if ((letra >= 65) && (letra <= 90)) {
        letra = (letra%65) + 97;
    }
    return letra;
}

//CONTEUDO DE UM NO DA ARVORE
struct pal {
    char conteudo[MAX];
};
typedef struct pal Palavra;

//NO DE UM ARVORE
struct no {
    Palavra texto;
    struct no* esquerdo;
    struct no* direito;
};
typedef struct no No;

//FUNCAO PARA INICIALIZAR UMA ARVORE
No* inicializaArvore() {
    return NULL;
}

//FUNCAO QUE INSERE UM NO NA ARVORE
No* insereNoArvore(No* no, Palavra texto) {
    No* aux = NULL;
    if (no == NULL) {
        aux = (No*) malloc(sizeof(No));
        aux->texto = texto;
        aux->esquerdo = NULL;
        aux->direito = NULL;
        return aux;
    } else {
        if (strcmp(texto.conteudo, no->texto.conteudo) < 0) {
            no->esquerdo = insereNoArvore(no->esquerdo, texto);
        } else if (strcmp(texto.conteudo, no->texto.conteudo) > 0) {
            no->direito = insereNoArvore(no->direito, texto);
        }
    }
    return no;
}

//FUNCAO QUE IMPRIME UMA ARVORE
void imprimiArvore(No* raiz) {
    if (raiz != NULL) {
        imprimiArvore(raiz->esquerdo);
        printf("%s\n", raiz->texto.conteudo);
        imprimiArvore(raiz->direito);
    }
}

//FUNCAO QUE LIMPA A ARVORE
void limpaArvore(No* raiz) {
    if (raiz != NULL) {
        limpaArvore(raiz->esquerdo);
        limpaArvore(raiz->direito);
        free(raiz);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    char letra = 'a';
    char palavra[MAX];
    int posicao = 0;
    No* raiz = inicializaArvore();
    Palavra texto;

    while (1) {
        //ler cada caractere do texto
        letra = getchar();
        if (letra == EOF) {
            break;
        }

        //coloca a letra para minuscula
        letra = letraMinuscula(letra);

        //verifica se eh uma letra
        if ((letra >= 97) && (letra <= 122)) {
            palavra[posicao] = letra;
            posicao++;
        } else {
            if (posicao > 0) {
                palavra[posicao] = '\0';
                strcpy(texto.conteudo, palavra);
                raiz = insereNoArvore(raiz, texto);
            }
            posicao = 0;
        }
    }

    imprimiArvore(raiz);
    limpaArvore(raiz);

    return 0;
}