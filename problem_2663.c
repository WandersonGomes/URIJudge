//PROBLEM 2663
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2663
#include <stdio.h>
#include <string.h>

#define MAX 1001
#define MAX_METADE 501

//MERGE (JUNCAO DA PARTE ESQUERDA E DIREITA)
void merge(int *vetor, int inicio, int meio, int fim) {
    int direita[MAX_METADE];
    int esquerda[MAX_METADE];
    int i = 0, j = 0, k = inicio;
    int tamanho_direita = 0, tamanho_esquerda = 0;

    //direita
    for (i = inicio; i <= meio; i++) {
        esquerda[j] = vetor[i];
        j++; 
    }
    tamanho_esquerda = j - 1;

    //esquerda
    j = 0;
    for (i = meio+1; i <= fim; i++) {
        direita[j] = vetor[i];
        j++;
    }
    tamanho_direita = j - 1;

    //faz a organizacao
    i = 0;
    j = 0;
    while ((i <= tamanho_direita) && (j <= tamanho_esquerda)) {
        if (direita[i] < esquerda[j]) {
            vetor[k] = direita[i];
            i++;
        } else {
            vetor[k] = esquerda[j];
            j++;
        }
        k++;
    }

    //restante que sobrou
    while (i <= tamanho_direita) {
        vetor[k] = direita[i];
        i++;
        k++;
    }

    while (j <= tamanho_esquerda) {
        vetor[k] = esquerda[j];
        j++;
        k++;
    }
}

//O VERDADEIRO MERGE_SORT
void _mergeSort(int *vetor, int inicio, int fim) {
    int meio = 0;
    if (inicio < fim) {
        meio = (inicio+fim)/2;
        _mergeSort(vetor, inicio, meio);
        _mergeSort(vetor, meio+1, fim);
        merge(vetor, inicio, meio, fim);
    }
}

//MASCARA PARA O MERGE SORT
void mergeSort(int *vetor, int tamanho) {
    _mergeSort(vetor, 0, tamanho-1);
}

//PROGRAMA PRINCIPAL
int main() {
    int notas_competidores[MAX];
    int numero_classificados = 0, numero_competidores = 0;
    int i = 0, nota_ultimo = 0;

    scanf("%d", &numero_competidores);
    scanf("%d", &numero_classificados);

    memset(notas_competidores, 0, sizeof(notas_competidores)); //zera as notas competidores

    //preenche as notas dos competidores
    for (i = 0; i < numero_competidores; i++) {
        scanf("%d", &notas_competidores[i]);
    }

    //ordena as notas
    mergeSort(notas_competidores, numero_competidores);

    //conta os classificados
    i = numero_competidores - numero_classificados;
    nota_ultimo = notas_competidores[i];
    i--;
    while (i > -1) {
        if (notas_competidores[i] == nota_ultimo) {
            numero_classificados++;
        } else {
            break;
        }
        i--;
    }

    printf("%d\n", numero_classificados);

    return 0;
}