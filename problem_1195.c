//PROBLEM 1195
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1195
#include <stdio.h>
#include <stdlib.h>

//NO DA ARVORE
struct node {
    int key;
    struct node *left;  
    struct node *right;
};
typedef struct node* Node;

//FUNCAO QUE INICIALIZA A ARVORE
Node inializeTree() {
    return NULL;
}

//INSERE ELEMENTO NA ARVORE
Node insertNodeTree(Node root, int value) {
    Node tmp = NULL;
    if (root == NULL) {
        tmp = (Node) malloc(sizeof(Node));
        tmp->key = value;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    } else {
        if (value < root->key) {
            root->left = insertNodeTree(root->left, value);
        }
        if (value > root->key) {
            root->right = insertNodeTree(root->right, value);
        }
    }
    return root;
}

//LIMPA ARVORE
void clearTree(Node root){
    if (root != NULL) {
        clearTree(root->left);
        clearTree(root->right);
        free(root);
    } 
}

//IMPRIME A ARVORE PREFIXA
void printTreePre(Node root) {
    if (root != NULL) {
        printf(" %d", root->key);
        printTreePre(root->left);
        printTreePre(root->right);
    }
}

//IMPRIME A ARVORE INFIXA
void printTreeIn(Node root) {
    if (root != NULL) {
        printTreeIn(root->left);
        printf(" %d", root->key);
        printTreeIn(root->right);
    }
}

//IMPRIME A ARVORE POST
void printTreePost(Node root) {
    if (root != NULL) {
        printTreePost(root->left);
        printTreePost(root->right);
        printf(" %d", root->key);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    Node root;
    int numero_elementos = 0, elemento = 0;
    int quantidade_testes = 0, i = 0, j = 0;
    int caso = 1;
    scanf("%d", &quantidade_testes);

    root = inializeTree();

    for (i = 0; i < quantidade_testes; i++) {
        scanf("%d", &numero_elementos);
        
        root = inializeTree();

        for (j = 0; j < numero_elementos; j++) {
            scanf("%d", &elemento);
            root = insertNodeTree(root, elemento);
        }
        printf("Case %d:\n", caso);
        printf("Pre.:");
        printTreePre(root);
        printf("\n");
        printf("In..:");
        printTreeIn(root);
        printf("\n");
        printf("Post:");
        printTreePost(root);
        printf("\n\n");
        
        clearTree(root);
        caso++;
    }

    return 0;
}