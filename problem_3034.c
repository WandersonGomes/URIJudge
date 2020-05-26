//PROBLEM 3034
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3034
#include <stdio.h>
#include <string.h>

#define QTD_PRIMOS_ATE_10000 1229

//FUNCAO QUE PREENCHE UM VETOR GLOBAL DE PRIMOS
int primos[QTD_PRIMOS_ATE_10000];
void preenchePrimos(int *primos) {
    int i = 0, j = 0, k = 1;
    int flag = 0;
    primos[0] = 2;

    for (i = 3; i < 10000; i += 2) {
        flag = 1;
        for (j = 0; j < k; j++) {
            if (i%primos[j] == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            primos[k] = i;
            k++;
        }
    }
}

//FUNCAO QUE REALIZA UMA BUSCA BINARIA
int buscaBinariaVetor(int *vetor, int valor,  int inicio,  int fim) {
    int meio = 0;
    meio = (fim + inicio)/2;
    
    if (valor == vetor[meio]) {
        return 1;
    }

    if (inicio == fim) {
        return 0;
    }

    if (valor > vetor[meio]) {
        return buscaBinariaVetor(vetor, valor, meio+1, fim);
    }
    if (valor < vetor[meio]) {
        return buscaBinariaVetor(vetor, valor, 0, meio);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int flag = 0, caso = 0;
    int numero_testes = 0, i = 0;
    scanf("%d", &numero_testes);

    preenchePrimos(primos);

    for (i = 0; i < numero_testes; i++) {
        flag = 1;
        scanf("%d", &caso);
        caso++;

        if (caso%2 != 0) {
            if (caso%7 == 0) {
                if (buscaBinariaVetor(primos,(caso+2),0,QTD_PRIMOS_ATE_10000-1)) {
                    printf("Yes\n");
                    flag = 0;
                }
            }
        }

        if (flag) {
            printf("No\n");
        }
    }

    return 0;
}