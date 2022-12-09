//PROBLEM 3257
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3257
#include <stdio.h>

//DEFINICOES
#define MAX 100000

//FUNCOES
void merge(long vetor[], long inicio, long meio, long fim) {
    long i, j, k;
    long tamanho_esquerda = meio - inicio + 1,
         tamanho_direita = fim - meio;
    
    long parte_esquerda[tamanho_esquerda],
         parte_direita[tamanho_direita];
    
    for (i = 0; i < tamanho_esquerda; i++)
        parte_esquerda[i] = vetor[inicio + i];
    for (j = 0; j < tamanho_direita; j++)
        parte_direita[j] = vetor[meio + j + 1];
    
    i = j = 0;
    k = inicio;

    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (parte_esquerda[i] >= parte_direita[j]) {
            vetor[k] = parte_esquerda[i];
            i++;
        } else {
            vetor[k] = parte_direita[j];
            j++;
        }
        k++;
    }
    
    while (i < tamanho_esquerda)
        vetor[k++] = parte_esquerda[i++];
    
    while (j < tamanho_direita)
        vetor[k++] = parte_direita[j++];
}

void mergeSort(long vetor[], long inicio, long fim) {
    if (inicio < fim) {
        long meio = inicio + (fim - inicio)/2;

        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);

        merge(vetor, inicio, meio, fim);
    }
}

void imprimirVetores(long vetor[], long tamanho) {
    long i;

    for (i = 0; i < tamanho; i++)
        printf("%ld ", vetor[i]);
    printf("\n");
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long qtd_arvores, i;
    long dias_por_arvores[MAX];
    long maior_qtd_dias = 0, tmp;
    long resultado = 0;

    //leitura
    scanf("%ld", &qtd_arvores);
    
    for (i = 0; i < qtd_arvores; i++)
        scanf("%ld", &dias_por_arvores[i]);

    //organiza
    mergeSort(dias_por_arvores, 0, qtd_arvores-1);

    //processamento
    resultado = qtd_arvores + 2;
    for (i = 0; i < qtd_arvores; i++) {
        tmp = dias_por_arvores[i] - (qtd_arvores - i);
        
        if (tmp > maior_qtd_dias)
            maior_qtd_dias = tmp;        
    }

    resultado += maior_qtd_dias;

    //saida
    printf("%ld\n", resultado);

    return 0;
}