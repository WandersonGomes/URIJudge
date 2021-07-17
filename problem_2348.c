//PROBLEM 2348
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2348
/*
Codigo do Merge Sort pode ser obtido no seguinte link:
https://www.geeksforgeeks.org/merge-sort/

Obs.: Foi feito a insercao do codigo para reduzir o tempo
de resolucao (tava com preguica de implementar)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* MERGE SORT */
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
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
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
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

//FUNCAO QUE CONVERTE DE GRAU PARA RADIANOS
double converterGrausRadianos(double graus) {
    return (2 * M_PI * graus)/360.00;
}

//FUNCAO QUE CALCULA O VALOR DO OUTRO LADO DE UM TRIANGULO USANDO A LEI DOS COSSENOS (angulo em graus)
double calcularLadoLeiCossenos(double b, double c, double angulo) {
    return sqrt((b * b) + (c * c) - (2 * b * c * cos(angulo)));
}

//FUNCAO QUE CALCULA A AREA DE UM TRIANGULO USANDO A FORMULA DE HERON
double areaTrianguloHeron(double a, double b, double c) {
    long double p = (a + b + c)/2.00;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_atividades = 0;
    int* atividades = NULL;
    int* ordenado = NULL;
    int i = 0, inicio = 0, fim = 0;
    double area = 0.00, a = 0.00, angulo = 0.00;

    scanf("%d", &qtd_atividades);

    //posicao extra para repetir o score da primeira atividade, poupando trabalho, 
    //porem aumentando consumo de memoria (muito pouca coisa)
    atividades = malloc(sizeof(int) * qtd_atividades + 1); 
    ordenado = malloc(sizeof(int) * qtd_atividades);

    for (i = 0; i < qtd_atividades; i++) {
        scanf("%d", &atividades[i]);
        ordenado[i] = atividades[i];
    }
    
    //ordena o vetor de forma equilibrada (duas partes de forma decrescente)
    mergeSort(ordenado, 0, qtd_atividades - 1);
    fim = qtd_atividades - 1;

    for (i = 0; i < qtd_atividades; i++) {
        if (i%2 == 0)
            atividades[inicio++] = ordenado[qtd_atividades - i - 1];
        else
            atividades[fim--] = ordenado[qtd_atividades - i - 1];
    }
    atividades[i] = atividades[0];

    //calculando a area
    angulo = converterGrausRadianos(360.00/qtd_atividades);
    for (i = 0; i < qtd_atividades; i++) {
        a = calcularLadoLeiCossenos(atividades[i], atividades[i + 1], angulo);
        area += areaTrianguloHeron(a, atividades[i], atividades[i + 1]);
    }

    printf("%.3lf\n", area);

    free(atividades);
    free(ordenado);

    return 0;
}