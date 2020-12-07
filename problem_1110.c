//PROBLEM 1110
//link = https://www.urionlinejudge.com.br/judge/pt/runs/code/20775326
/*
Obs.: 
Para mais dados por favor assista as seguintes aulas:
https://www.youtube.com/watch?v=0MxItm1z5xU
https://www.youtube.com/watch?v=EqYAERvAnyQ
https://www.youtube.com/watch?v=uP_8hjxNslg
https://www.youtube.com/watch?v=5Ah7Fg4vIkw
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct {
    int tamanho;
    int inicio;
    int fim;
    int valores[MAX];
} Deque;

Deque* criarDeque() {
    Deque* deque = (Deque*) malloc(sizeof(Deque));
    deque->tamanho = 0;
    deque->inicio = 0;
    deque->fim = 0;
    return deque;
}

void liberarDeque(Deque* deque) {
    free(deque);
}

int tamanhoDeque(Deque* deque) {
    return deque->tamanho;
}

int inicioDeque(Deque* deque) {
    return deque->valores[deque->inicio];
}

int fimDeque(Deque* deque) {
    int pos = deque->fim - 1;
    if (pos < 0) 
        pos = MAX - 1;
    return deque->valores[pos];
}

void insereInicioDeque(Deque* deque, int valor) {
    deque->inicio--;
    if (deque->inicio < 0)
        deque->inicio = MAX - 1;
    deque->valores[deque->inicio] = valor;
    deque->tamanho++;
}

void insereFimDeque(Deque* deque, int valor) {
    deque->valores[deque->fim] = valor;
    deque->fim = (deque->fim + 1) % MAX;
    deque->tamanho++;
}

void removeInicioDeque(Deque* deque) {
    deque->inicio = (deque->inicio + 1) % MAX;
    deque->tamanho--;
}

//PROGRAMA PRINCIPAL
int main() {
    Deque* baralho = NULL;
    int numero_cartas = 0, i = 0;

    while(1) {
        scanf("%d", &numero_cartas);
        if (numero_cartas == 0)
            break;
        
        baralho = criarDeque();

        //preencher o monte
        for (i = 1; i <= numero_cartas; i++) {
            insereFimDeque(baralho, i);
        }

        printf("Discarded cards: ");
        while (tamanhoDeque(baralho) > 1) {
            if (tamanhoDeque(baralho) > 2) {
                printf("%d, ", inicioDeque(baralho));
            } else {
                printf("%d\n", inicioDeque(baralho));
            }
            removeInicioDeque(baralho);
            insereFimDeque(baralho, inicioDeque(baralho));
            removeInicioDeque(baralho);
        }
        printf("Remaining card: %d\n", inicioDeque(baralho));

        liberarDeque(baralho);
    }
    
    return 0;
}