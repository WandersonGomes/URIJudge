//PROBLEM 1228
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1228
#include <stdio.h>

#define MAX 24

int main() {
    int numero_competidores = 0, i = 0, j = 0;
    int grid_largada[MAX], grid_chegada[MAX];
    int numero_ultrapassagens = 0, competidor_procurado = 0;


    while (scanf("%d", &numero_competidores) != EOF) {
        //preenche o grid de largada
        for (i = 0; i < numero_competidores; i++) {
            scanf("%d", &grid_largada[i]);
        }

        //preenche o grid de chegada
        for (i = 0; i < numero_competidores; i++) {
            scanf("%d", &grid_chegada[i]);
        }

        //calcula a quantidade ultrapassagens
        numero_ultrapassagens = 0;
        for (i = 0; i < numero_competidores; i++) {
            competidor_procurado = grid_chegada[i];
            for (j = 0; j < numero_competidores; j++) {
                if (grid_largada[j] != 0) {
                    if (grid_largada[j] == competidor_procurado){
                        grid_largada[j] = 0;
                        break;
                    } else {
                        numero_ultrapassagens++;
                    }
                }
            }
        }

        //apresenta o resultado
        printf("%d\n", numero_ultrapassagens);
    }


    return 0;
}