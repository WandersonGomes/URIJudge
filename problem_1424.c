//PROBLEM 1424
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1424
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001

//LIST
typedef struct node {
    long int data;
    struct node* next;
} Node;

typedef struct list {
    long int size;
    Node* head;
    Node* tail;
} List;

List* create() {
    List* list = (List*) malloc(sizeof(List));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;

    return list;
}

void insert(List* list, long int data) {
    Node* tmp = (Node*) malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    if (list->size == 0) {
        list->head = tmp;
        list->tail = tmp;
    } else {
        list->tail->next = tmp;
        list->tail = tmp;
    }
    
    list->size++;
}

long int search(List* list, long int index) {
    int i = 0;
    Node* tmp = NULL;

    if ((index < 0) || (index >= list->size))
        return -1;
    
    tmp = list->head;
    for (i = 0; i < index; i++)
        tmp = tmp->next;
        
    return tmp->data;
}

void destroy(List* list) {
    Node* tmp1 = list->head;
    Node* aux = NULL;

    while (tmp1 != NULL) {
        aux = tmp1->next;
        free(tmp1);
        tmp1 = aux;
    }

    free(list);
}

//PROGRAMA PRINCIPAL
int main() {
    List** valores = (List**) malloc(sizeof(List*) * MAX);
    long int qtd_elementos_vetor = 0, qtd_consultas = 0, i = 0;
    long int ocorrencia = 0;
    long long int valor = 0;
    long int resultado = 0;

    for (i = 0; i < MAX; i++)
        valores[i] = NULL;

    while (scanf("%ld %ld", &qtd_elementos_vetor, &qtd_consultas) != EOF) {
        for (i = 0; i < qtd_elementos_vetor; i++) {
            scanf("%lld", &valor);

            if (valores[valor] == NULL)
                valores[valor] = create();
            
            insert(valores[valor], i+1);
        }

        for (i = 0; i < qtd_consultas; i++) {
            scanf("%ld %lld", &ocorrencia, &valor);
            if (valores[valor] != NULL) {
                resultado = search(valores[valor], ocorrencia - 1);
                if (resultado != -1)
                    printf("%ld\n", resultado);
                else
                    printf("0\n");
            } else {
                printf("0\n");
            }
        }

        for (i = 0; i < MAX; i++)
            if (valores[i] != NULL) {
                destroy(valores[i]);
                valores[i] = NULL;
            }
    }

    return 0;
}