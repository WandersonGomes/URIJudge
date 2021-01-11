//PROBLEM 1802
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1802

#include <stdio.h>

#define MAX 100000

//MERGE SORT - GEEKFORGEEKS.ORG
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}


//FUNCAO QUE PREENCHE O VETOR
void preencheVetor(int* vetor) {
    int qtd_elementos = 0, i = 0;
    
    scanf("%d", &qtd_elementos);
    vetor[10] = qtd_elementos;

    for (i = 0; i < qtd_elementos; i++)
        scanf("%d", &vetor[i]);
}
//PROGRAMA PRINCIPAL
int main() {
    int portugues[11] = {0},
        matematica[11] = {0},
        fisica[11] = {0}, 
        quimica[11] = {0}, 
        biologia[11] = {0};
    int somas[MAX] = {0};
    int qtd_conjuntos = 0, resultado = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, i = 0;
    int tamanho = 0;

    //preenche os dados
    preencheVetor(portugues);
    preencheVetor(matematica);
    preencheVetor(fisica);
    preencheVetor(quimica);
    preencheVetor(biologia);
    
    for (a = 0; a < portugues[10]; a++)
        for (b = 0; b < matematica[10]; b++)
            for (c = 0; c < fisica[10]; c++)
                for (d = 0; d < quimica[10]; d++)
                    for (e = 0; e < biologia[10]; e++)
                        somas[i++] = portugues[a] + matematica[b] + fisica[c] + quimica[d] + biologia[e];

    tamanho = portugues[10] * matematica[10] * fisica[10] * quimica[10] * biologia[10];
    mergeSort(somas, 0, tamanho - 1);        

    scanf("%d", &qtd_conjuntos);
    for (i = 0; i < qtd_conjuntos; i++)
        resultado += somas[tamanho - (i + 1)];
    printf("%d\n", resultado);

    return 0;
}