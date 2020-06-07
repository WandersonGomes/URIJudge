//PROBLEM 1861
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1861
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PERSONAGEM
struct personagem {
    char nome[11];
    int mortes;
    int vivo;

    struct personagem *esquerdo;
    struct personagem *direito;
};
typedef struct personagem Personagem;

//INSERE PERSONAGEM
Personagem* inserePersonagem(Personagem *raiz, char nome[11], int vitima) {
    Personagem *aux = NULL;
    if (raiz == NULL) {
        aux = (Personagem*) malloc(sizeof(Personagem));
        strcpy(aux->nome, nome);
        if (vitima) {
            aux->vivo = 0;
            aux->mortes = 0;
        } else {
            aux->vivo = 1;
            aux->mortes = 1;
        }
        aux->esquerdo = NULL;
        aux->direito = NULL;
        return aux;
    } else {
        if (strcmp(nome, raiz->nome) == 0) {
            if (vitima) {
                raiz->vivo = 0;
            } else {
                raiz->mortes++;
            }
        }
        if (strcmp(nome, raiz->nome) < 0) {
            raiz->esquerdo = inserePersonagem(raiz->esquerdo, nome, vitima);
        }
        if (strcmp(nome, raiz->nome) > 0) {
            raiz->direito = inserePersonagem(raiz->direito, nome, vitima);
        }
        return raiz;
    }
}

//REALIZA A IMPRESSAO
void imprimirListaAssassinos(Personagem* raiz) {
    if (raiz != NULL) {
        imprimirListaAssassinos(raiz->esquerdo);
        if (raiz->vivo) {
            printf("%s %d\n", raiz->nome, raiz->mortes);
        }
        imprimirListaAssassinos(raiz->direito);
    }
}

//LIBERA ARVORE DE PERSONAGENS
void liberaPersonagens(Personagem* raiz) {
    if (raiz != NULL) {
        liberaPersonagens(raiz->esquerdo);
        liberaPersonagens(raiz->direito);
        free(raiz);
    }
}


//PROGRAMA PRINCIPAL
int main() {
    char assassino[11], vitima[11];
    Personagem* personagem = NULL;
    while (scanf("%s %s", assassino, vitima) != EOF) {
        personagem = inserePersonagem(personagem, assassino, 0);
        personagem = inserePersonagem(personagem, vitima, 1);
    }
    printf("HALL OF MURDERERS\n");
    imprimirListaAssassinos(personagem);
    liberaPersonagens(personagem);
    return 0;
}