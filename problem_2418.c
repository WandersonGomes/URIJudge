//PROBLEM 2418
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2418
#include <stdio.h>

#define MAX 5

//FUNCAO QUE ORDENA AS NOTAS USANDO BUBBLE SORT (problema simples)
void bubbleSort(float *vetor) {
    int i = 0, continua = 0;
    float tmp = 0.0;

    while(!continua) {
        continua = 1;
        for (i = 0; i < (MAX - 1); i++) {
            if (vetor[i] > vetor[i+1]) {
                tmp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = tmp;
                continua = 0;
            }
        }
    }
}

//PROGRAMA PRINCIPAL
int main() {
    float notas[MAX];
    float resultado = 0.0;

    scanf("%f %f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3], &notas[4]);
    bubbleSort(notas);

    resultado = (notas[1] + notas[2] + notas[3]);

    printf("%.1f\n", resultado);

    return 0;
}