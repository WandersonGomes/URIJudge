//PROBLEM 2175
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2175 
#include <stdio.h>

int main() {
    double tempos[3], menor_tempo = 101.000;
    int vencedor = 0, i = 0, j = 0, empate = 0;

    //pega os tempos
    for (i = 0; i < 3; i++) {
        scanf("%lf", &tempos[i]);      
    }

    //verifica o capeao
    for (i = 0; i < 3; i++) {
        if (tempos[i] < menor_tempo) {
            menor_tempo = tempos[i];
            vencedor = i + 1;
        }
    }

    //verifica se houve empate entre
    for (i = 0; i < 3; i++) {
        for (j = i+1; j < 3; j++) {
            if (tempos[i] == tempos[j]){
                empate++;
                break;
            }
        }
        if (empate > 0) {
            break;
        }
    }


    //apresenta o resultado
    if (empate > 0) {
        printf("Empate\n");
    } else {
        switch (vencedor)
        {
            case 1: printf("Otavio\n"); break;
            case 2: printf("Bruno\n"); break;
            case 3: printf("Ian\n"); break;
        }
    }


    return 0;
}