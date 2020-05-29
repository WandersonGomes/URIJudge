//PROBLEM 2497
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2497
#include <stdio.h>

int main() {
    int numero = 0;
    int caso = 0;

    while (1) {
        caso++;
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }

        printf("Experiment %d: %d full cycle(s)\n", caso, (numero/2));
    }

    return 0;
}