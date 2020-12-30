//PROBLEM 2556
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2556
#include <stdio.h>
#include <stdlib.h>

//MERGE SORT IMPLEMENTACAO DO LINK = https://www.geeksforgeeks.org/merge-sort/
void merge(int* array, int left, int middle, int right) {
    int i = 0, j = 0, k = 0;
    int size1 = middle - left + 1;
    int size2 = right - middle;

    int* array_left = (int*) malloc(sizeof(int) * size1);
    int* array_right = (int*) malloc(sizeof(int) * size2);

    for (i = 0; i  < size1; i++)
        array_left[i] = array[left + i];
    for (j = 0; j < size2; j++)
        array_right[j] = array[middle + 1 + j];
    
    i = 0; j = 0; k = left;
    while (i < size1 && j < size2) {
        if (array_left[i] <= array_right[j]) {
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

void mergeSort(int* array, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);

        merge(array, left, middle, right);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int qtd_registros = 0, metade = 0, i = 0;
    int* valores = NULL;

    while (scanf("%d", &qtd_registros) != EOF) {
        valores = (int*) malloc(sizeof(int) * qtd_registros);
        for (i = 0; i < qtd_registros; i++)
            scanf("%d", &valores[i]);
        
        mergeSort(valores, 0, qtd_registros - 1);

        metade = qtd_registros/2;

        printf("%d %d\n", metade, (valores[metade] - valores[metade - 1]));

        free(valores);
    }

    return 0;
}
