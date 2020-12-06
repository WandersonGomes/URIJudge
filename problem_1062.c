//PROBLEM 1062
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1062
#include <stdio.h>
#include <stdlib.h>

//CONSTANTES
#define MAX 1001

//PILHA IMPLEMENTADA COM AUXILIO DO SEGUINTE MATERIAL
//material = https://www.ic.unicamp.br/~ra069320/PED/MC102/1s2008/Apostilas/Cap11.pdf
//STRUCT
typedef struct {
    int quantidade;
    int valores[MAX];
} Pilha;

//FUNCOES PILHA
Pilha* criaPilha() {
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->quantidade = 0;
    return pilha;
}

void push(Pilha* pilha, int valor) {
    if (pilha->quantidade == MAX) {
        printf("Pilha cheia!\n");
        return;
    }
    pilha->valores[pilha->quantidade] = valor;
    pilha->quantidade++;
}

int vazia(Pilha* pilha) {
    return (pilha->quantidade == 0);
}

int pop(Pilha* pilha) {
    int aux = 0;
    if (vazia(pilha)) {
        return -1;
    }
    aux = pilha->valores[pilha->quantidade - 1];
    pilha->quantidade--;
    return aux;
}

void libera(Pilha* pilha) {
    free(pilha);
}

int topo(Pilha* pilha) {
    if (pilha->quantidade > 0)
        return pilha->valores[pilha->quantidade-1];
    return -1;
}

//FUNCAO QUE VERIFICA SE E POSSIVEL FAZER A REORGANIZACAO
int ehPossivelReorganizar(int quantidade_vagoes) {
    int i = 0, vagao = 0, vagao_retirar = quantidade_vagoes;
    Pilha* estacao = criaPilha();
    Pilha* saida = criaPilha();

    //preenche os dados de saida
    for (; i < quantidade_vagoes; i++) {
        scanf("%d", &vagao);
        if (vagao == 0) {
            libera(estacao);
            libera(saida);
            return -1;
        }

        push(saida, vagao);
    }

    //faz a retirada e tenta organizar da mesma forma que veio a entrada
    while (!vazia(saida)) {
        //verifica a estacao primeiro
        if (topo(estacao) == vagao_retirar) {
            vagao_retirar--;
            pop(estacao);
        } else {
            //verifica a saida
            if (topo(saida) == vagao_retirar) {
                vagao_retirar--;
                pop(saida);
            } else {
                push(estacao, pop(saida));
            }
        }
    }
    
    //checa se ainda tem os vagoes na estacao
    while (!vazia(estacao)) {
        if (vagao_retirar == pop(estacao)) {
            vagao_retirar--;
        } else {
            break;
        }
    }

    //desaloca a memoria das pilhas
    libera(estacao);
    libera(saida);

    //verifica se foi reorganizado
    if (vagao_retirar == 0)
        return 1;

    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_vagoes_trem = 0, resultado = 0;
    
    while (1) {
        //ler a quantidade de vagoes
        scanf("%d", &quantidade_vagoes_trem);
        if (quantidade_vagoes_trem == 0)
            break;
        
        while (1) {
            //faz os resultados
            resultado = ehPossivelReorganizar(quantidade_vagoes_trem);

            if (resultado == -1) {
                printf("\n");
                break;
            } else if (resultado == 1) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    return 0;
}