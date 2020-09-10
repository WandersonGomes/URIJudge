//PROBLEM 1382
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1382
#include <stdio.h>

#define MAX 10001

int main() {
    int numero_instancias = 0, i = 0;
    int qtd_numeros = 0, j = 0;
    int vetor[MAX] = {0};
    int resultado = 0, aux = 0, k = 0;

    scanf("%d", &numero_instancias);
    
    for (i = 0; i < numero_instancias; i++) {
        scanf("%d", &qtd_numeros);
        for (j = 1; j <= qtd_numeros; j++) {
            scanf("%d", &vetor[j]);
        }

        resultado = 0;
        j = 1;
        while (j <= qtd_numeros) {
            while (vetor[j] != j) {
                aux = vetor[vetor[j]];
                vetor[vetor[j]] = vetor[j];
                vetor[j] = aux;
                resultado++;
            } 
            j++;
        }

        printf("%d\n", resultado);
    }

    return 0;
}