//PROBLEM 1553
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1553
#include <stdio.h>
#include <string.h>

#define MAX 101

int main() {
    int numero_perguntas = 0, frequencia = 0;
    int historico[MAX], pergunta = 0;
    int i = 0, resultado = 0;

    while (1) {
        scanf("%d %d", &numero_perguntas, &frequencia);
        if (numero_perguntas == 0) {
            break;
        }

        resultado = 0;
        memset(historico, 0, sizeof(historico));

        for (i = 0; i < numero_perguntas; i++) {
            scanf("%d", &pergunta);
            historico[pergunta]++;
            if (historico[pergunta] == frequencia) {
                resultado++;
            }
        }

        printf("%d\n", resultado);
    }

    return 0;
}