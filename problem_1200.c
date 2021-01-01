//PROBLEM 1200
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1200
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FLAG GLOBAL POR CAUSA DOS ESPACOS EM BRANCO
int flag = 0;

//ARVORE
typedef struct node {
    char data;
    struct node* left;
    struct node* right;
} Node;

Node* insert(Node* root, char data) {
    if (root == NULL) {
        Node* tmp = (Node*) malloc(sizeof(Node));
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    }

    if (data <= root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

void printPreOrder(Node* root) {
    if (root != NULL) {
        if (!flag)
            printf("%c", root->data);
        else
            printf(" %c", root->data);
        flag = 1;

        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

void printInOrder(Node* root) {
    if (root != NULL) {
        printInOrder(root->left);
        if (!flag)
            printf("%c", root->data);
        else
            printf(" %c", root->data);
        flag = 1;
        printInOrder(root->right);
    }
}

void printPostOrder(Node* root) {
    if (root != NULL) {
        printPostOrder(root->left);
        printPostOrder(root->right);
        if (!flag)
            printf("%c", root->data);
        else
            printf(" %c", root->data);
        flag = 1;
    }
}

int search(Node* root, char data) {
    if (root == NULL)
        return 0;
    
    if (data == root->data)
        return 1;
    
    if (data < root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

void destroy(Node* root) {
    if (root != NULL) {
        destroy(root->left);
        destroy(root->right);
        free(root);
    }
}

//FUNCAO PARA LER A STRING
int lerString(char* string) {
    char letra = 'a';
    int i = 0;

    while (1) {
        letra = getchar();

        if ((i == 0) && (letra == EOF))
            return 0;

        if ((letra == ' ') || (letra == '\n') || (letra == EOF)) {
            string[i] = '\0';
            return 1;
        }

        string[i] = letra;
        i++;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    Node* root = NULL;
    char operacao[8], data = 'a';

    while (1) {
        if (!lerString(operacao)) 
            break;

        if (!strcmp(operacao, "I")) {
            scanf("%c", &data);
            root = insert(root, data);
        }

        if (!strcmp(operacao, "INFIXA")) {
            printInOrder(root);
            printf("\n");
            flag = 0;
        }
        
        if (!strcmp(operacao, "PREFIXA")) {
            printPreOrder(root);
            printf("\n");
            flag = 0;
        }
        
        if (!strcmp(operacao, "POSFIXA")) {
            printPostOrder(root);
            printf("\n");
            flag = 0;
        }
    
        if (!strcmp(operacao, "P")) {
            scanf("%c", &data);
            if (search(root, data))
                printf("%c existe\n", data);
            else
                printf("%c nao existe\n", data);
        }
    }

    destroy(root);
    return 0;
}