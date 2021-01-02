//PROBLEM 1252
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1252
#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

//NO
typedef struct node {
    int data;
    int rest;
} Node;

//ESCOLHE O MENOR
int menorIgual(Node tmp1, Node tmp2) {
    if (tmp1.rest < tmp2.rest)
        return 1;
    else if (tmp1.rest > tmp2.rest)
        return 2;
    
    //impar e par
    if ((tmp1.data % 2 != 0) && (tmp2.data % 2 == 0))
        return 1;
    if ((tmp1.data % 2 == 0) && (tmp2.data % 2 != 0))
        return 2;
    
    //impar impar
    if ((tmp1.data % 2 != 0) && (tmp2.data % 2 != 0)) {
        if (tmp1.data >= tmp2.data)
            return 1;
        else
            return 2;
    }

    //par par
    if ((tmp1.data % 2 == 0) && (tmp2.data % 2 == 0)) {
        if (tmp1.data <= tmp2.data)
            return 1;
        else
            return 2;
    }
}

//MERGE
void merge(Node* array, int left, int middle, int right) {
    int size1 = middle - left + 1;
    int size2 = right - middle;
    int i = 0, j = 0, k = 0;

    Node* array_left = (Node*) malloc(sizeof(Node) * size1);
    Node* array_right = (Node*) malloc(sizeof(Node) * size2);

    for (i = 0; i < size1; i++)
        array_left[i] = array[left + i];
    for (j = 0; j < size2; j++)
        array_right[j] = array[middle + 1 + j];
    
    i = 0;
    j = 0;
    k = left;

    while ((i < size1) && (j < size2)) {
        if (menorIgual(array_left[i], array_right[j]) == 1) {
            array[k] = array_left[i];
            i++;
        } else {
            array[k] = array_right[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        array[k] = array_left[i];
        i++; k++;
    }

    while (j < size2) {
        array[k] = array_right[j];
        j++; k++;
    }

    free(array_left);
    free(array_right);
}

//MERGE SORT
void mergeSort(Node* array, int left, int right) {
    if (left >= right)
        return;
    
    int middle = (left + right - 1)/2;
    mergeSort(array, left, middle);
    mergeSort(array, middle+1, right);
    merge(array, left, middle, right);
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_numeros = 0, i = 0;
    int modulo = 0, numero = 0;
    Node valores[MAX];

    while (1) {
        scanf("%d %d", &qtd_numeros, &modulo);
        printf("%d %d\n", qtd_numeros, modulo);

        if ((qtd_numeros == 0) && (modulo == 0))
            break;
        
        for (i = 0; i < qtd_numeros; i++) {
            scanf("%d", &numero);
            valores[i].data = numero;
            valores[i].rest = numero%modulo;
        }

        mergeSort(valores, 0, qtd_numeros - 1);

        for (i = 0; i < qtd_numeros; i++)
            printf("%d\n", valores[i].data);
    }

    return 0;
}