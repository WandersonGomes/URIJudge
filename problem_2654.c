//PROBLEM 2654
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2654
/*
Obs.:
Algoritmo do mergeSort baseado neste link:
https://www.geeksforgeeks.org/merge-sort/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//NODE
typedef struct personagem {
    char nome[101];
    int poder;
    int deuses_mortos;
    int mortes;
} Personagem;

//FUNCAO DE COMPARACAO
int comparacao(Personagem personagem1, Personagem personagem2) {
    //compara poder
    if (personagem1.poder > personagem2.poder)
        return 1;
    if (personagem1.poder < personagem2.poder)
        return 2;
    //compara numero de deuses mortos
    if (personagem1.deuses_mortos > personagem2.deuses_mortos)
        return 1;
    if (personagem1.deuses_mortos < personagem2.deuses_mortos)
        return 2;
    //compara o numero de mortes
    if (personagem1.mortes < personagem2.mortes)
        return 1;
    if (personagem1.mortes > personagem2.mortes)
        return 2;
    //compara os nomes
    if (strcmp(personagem1.nome, personagem2.nome) < 0)
        return 1;
    if (strcmp(personagem1.nome, personagem2.nome) > 0)
        return 2;
    //caso ainda persista o empate
    return 2;
}

//MERGE SORT
void merge(Personagem* array, int esquerda, int meio, int direita) {
    int tamanho_esquerda = meio - esquerda + 1;
    int tamanho_direita = direita - meio;
    int i = 0, j = 0, k = 0;

    Personagem* lado_esquerdo = (Personagem *) malloc(sizeof(Personagem) * tamanho_esquerda);
    Personagem* lado_direito = (Personagem *) malloc(sizeof(Personagem) * tamanho_direita);

    for (; i < tamanho_esquerda; i++)
        lado_esquerdo[i] = array[esquerda + i];
    for (; j < tamanho_direita; j++)
        lado_direito[j] = array[meio + 1 + j];
    
    i = j = 0;
    k = esquerda;

    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (comparacao(lado_esquerdo[i], lado_direito[j]) == 2) {
            array[k] = lado_esquerdo[i];
            i++;
        } else {
            array[k] = lado_direito[j];
            j++;
        }
        k++;
    }

    while (i < tamanho_esquerda) {
        array[k] = lado_esquerdo[i];
        i++; k++;
    }

    while (j < tamanho_direita) {
        array[k] = lado_direito[j];
        j++; k++;
    }

    free(lado_esquerdo);
    free(lado_direito);
}

void mergeSort(Personagem* array, int esquerda, int direita) {
    int meio = esquerda + (direita - esquerda)/2;
    if (esquerda < direita) {
        mergeSort(array, esquerda, meio);
        mergeSort(array, (meio + 1), direita);
        merge(array, esquerda, meio, direita);
    }
}


//PROGRAMA PRINCIPAL
int main() {
    int qtd_personagens = 0, i = 0;
    Personagem* personagens = NULL;

    scanf("%d", &qtd_personagens);
    personagens = (Personagem*) malloc(sizeof(Personagem) * qtd_personagens);

    for (; i < qtd_personagens; i++)
        scanf("%s %d %d %d", personagens[i].nome, &personagens[i].poder, &personagens[i].deuses_mortos, &personagens[i].mortes);

    mergeSort(personagens, 0, qtd_personagens - 1);

    printf("%s\n", personagens[qtd_personagens-1].nome);

    free(personagens);
    return 0;
}