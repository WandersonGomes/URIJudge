//PROBLEM 2567
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2567
#include <stdio.h>
#include <stdlib.h>

//MERGE SORT
void merge(int* array, int esquerdo, int meio, int direito) {
    int qtd_esquerda = meio - esquerdo + 1;
    int qtd_direita = direito - meio;

    int* metade_esquerda = (int*) malloc(sizeof(int) * qtd_esquerda);
    int* metade_direita = (int*) malloc(sizeof(int) * qtd_direita);
    int i = 0, j = 0, k = esquerdo;

    for (; i < qtd_esquerda; i++)
        metade_esquerda[i] = array[esquerdo + i];
    for (; j < qtd_direita; j++)
        metade_direita[j] = array[meio + j + 1];

    i = j = 0;

    while (i < qtd_esquerda && j < qtd_direita) {
        if (metade_esquerda[i] <= metade_direita[j]) {
            array[k] = metade_esquerda[i];
            i++;
        } else {
            array[k] = metade_direita[j];
            j++;
        }
        k++;
    }

    while (i < qtd_esquerda) {
        array[k] = metade_esquerda[i];
        i++; k++;
    }

    while (j < qtd_direita) {
        array[k] = metade_direita[j];
        j++; k++;
    }

    free(metade_esquerda);
    free(metade_direita);
}

void mergeSort(int* array, int esquerdo, int direito) {
    if (esquerdo < direito) {
        int meio = esquerdo + (direito - esquerdo)/2;
        mergeSort(array, esquerdo, meio);
        mergeSort(array, (meio + 1), direito);
        merge(array, esquerdo, meio, direito);
    }
}

//FUNCAO VALOR ABSOLUTO
int valorAbsoluto(int numero) {
    if (numero < 0)
        return (-1) * numero;
    return numero;
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_virus = 0, i = 0;
    int virus[1000] = {0};
    int resultado = 0;
    
    while (scanf("%d", &qtd_virus) != EOF) {
        for (i = 0; i < qtd_virus; i++)
            scanf("%d", &virus[i]);
        
        mergeSort(virus, 0, qtd_virus - 1);

        resultado = 0;
        for (i = 0; i < qtd_virus/2; i++)
            resultado += valorAbsoluto(virus[i] - virus[qtd_virus - i - 1]);

        printf("%d\n", resultado);
    }

    return 0;
}