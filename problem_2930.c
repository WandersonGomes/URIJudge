//PROBLEM 2930
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2930
#include <stdio.h>

int main() {
    int entrega = 0, final = 0, diferenca = 0;

    scanf("%d %d", &entrega, &final);

    diferenca = final - entrega;

    if (diferenca > 2) {
        printf("Muito bem! Apresenta antes do Natal!\n");
    } else if (diferenca < 0) {
        printf("Eu odeio a professora!\n");
    } else {
        printf("Parece o trabalho do meu filho!\n");

        final += 2;
        
        if (final <= 24) {
            printf("TCC Apresentado!\n");
        } else {
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }

    return 0;
}