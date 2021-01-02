//PROBLEM 1766
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1766
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 150

//NO
typedef struct node {
    char name[MAX];
    int weight;
    int age;
    float height;
} Node;

//ESCOLHE O MENOR
int compare(Node tmp1, Node tmp2) {
    //peso
    if (tmp1.weight > tmp2.weight)
        return 1;
    if (tmp1.weight < tmp2.weight)
        return 2;
    
    //idade
    if (tmp1.age < tmp2.age)
        return 1;
    if (tmp1.age > tmp2.age)
        return 2;
    
    //altura
    if (tmp1.height < tmp2.height)
        return 1;
    if (tmp1.height > tmp2.height) 
        return 2;

    //nome
    if (strcmp(tmp1.name, tmp2.name) <= 0)
        return 1;
    else
        return 2;
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
        if (compare(array_left[i], array_right[j]) == 1) {
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
    long int qtd_testes = 0, i = 0;
    int total_renas = 0, qtd_renas_treno = 0, j = 0;
    Node renas[1000];

    scanf("%ld", &qtd_testes);

    for (i = 1; i <= qtd_testes; i++) {
        scanf("%d %d", &total_renas, &qtd_renas_treno);

        for (j = 0; j < total_renas; j++)
            scanf("%s %d %d %f", renas[j].name, &renas[j].weight, &renas[j].age, &renas[j].height);
        
        mergeSort(renas, 0, total_renas - 1);

        printf("CENARIO {%ld}\n", i);
        for (j = 1; j <= qtd_renas_treno; j++)
            printf("%d - %s\n", j, renas[j-1].name);
    }

    return 0;
}