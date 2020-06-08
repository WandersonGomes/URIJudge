//PROBLEM 2084
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2084
#include <stdio.h>

int main() {
    int votos[10];
    double x = 0.00, y = 0.00, z = 0.00, aux = 0.00;
    int numero_candidatos = 0, i = 0;
    int total_votos = 0, candidato = 0, mais_votos = 0;
    int flag = 0;

    //preenche com os dados da votacao
    scanf("%d", &numero_candidatos);
    for (i = 0; i < numero_candidatos; i++) {
        scanf("%d", &votos[i]);
        total_votos += votos[i];

        //verifica que teve mais votos
        if (votos[i] > mais_votos) {
            mais_votos = votos[i];
            candidato = i;
        }
    }

    x = (45.00 * total_votos)/100; //quantidade de votos que equivalem a 45%
    y = (40.00 * total_votos)/100; //quantidade de votos que equivalem a 40%
    z = (10.00 * total_votos)/100; //quantidade de votos que equivalem a 10%

    if (votos[candidato] >= x) {
        printf("1\n");
    } else if (votos[candidato] < y) {
        printf("2\n");
    } else if (votos[candidato] >= y) {
        flag = 0;
        for (i = 0; i < numero_candidatos; i++) {
            //verifica a diferenca de 10%
            if (i != candidato) {
                aux = votos[candidato] - votos[i];
                if (aux < z) {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag) {
            printf("2\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}