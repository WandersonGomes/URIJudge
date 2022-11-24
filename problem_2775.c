//PROBLEM 2775
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2775
/*
Fontes:
    https://www.youtube.com/watch?v=k9RQh21KrH8
*/
#include <stdio.h>

//DEFINICOES
#define MAX 1000

//NOVOS TIPOS
typedef struct {
    int numero;
    int custo_troca;
} Pacote;

//FUNCOES
void merge(Pacote vetor[], int inicio, int meio, int fim, long* soma_troca) {
    int i, j, k, z;

    int qtd_parte_esquerda = meio - inicio + 1,
        qtd_parte_direita = fim - meio;
    
    Pacote parte_esquerda[qtd_parte_esquerda],
           parte_direita[qtd_parte_direita];
    
    for (i = 0; i < qtd_parte_esquerda; i++)
        parte_esquerda[i] = vetor[inicio + i];
    
    for (j = 0; j < qtd_parte_direita; j++)
        parte_direita[j] = vetor[meio + j + 1];
    
    i = j = 0;
    k = inicio;

    while (i < qtd_parte_esquerda && j < qtd_parte_direita) {
        //printf("%d - %d\n", parte_esquerda[i].numero, parte_direita[j].numero);

        if (parte_esquerda[i].numero < parte_direita[j].numero) {
            vetor[k] = parte_esquerda[i];
            i++;
        } else {
            vetor[k] = parte_direita[j];
            
            for (z = qtd_parte_esquerda - 1; z >= i; z--)
                *soma_troca += parte_direita[j].custo_troca + parte_esquerda[z].custo_troca;

            j++;
        }
        k++;
    }

    while (i < qtd_parte_esquerda)
        vetor[k++] = parte_esquerda[i++];
    
    while (j < qtd_parte_direita)
        vetor[k++] = parte_direita[j++];
}

void mergeSort(Pacote vetor[], int inicio, int fim, long* soma_troca) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio)/2;

        mergeSort(vetor, inicio, meio, soma_troca);
        mergeSort(vetor, meio + 1, fim, soma_troca);

        merge(vetor, inicio, meio, fim, soma_troca);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_pacotes, i;
    long soma_troca;
    Pacote pacotes[MAX];

    //leitura - processamento - saida
    while (scanf("%d", &qtd_pacotes) != EOF) {
        for (i = 0; i < qtd_pacotes; i++)
            scanf("%d", &pacotes[i].numero);
        for (i = 0; i < qtd_pacotes; i++)
            scanf("%d", &pacotes[i].custo_troca);
               
        soma_troca = 0;
        mergeSort(pacotes, 0, qtd_pacotes - 1, &soma_troca);

        printf("%ld\n", soma_troca);
    }

    return 0;
}