//PROBLEM 1367
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1367
#include <stdio.h>
#include <string.h>

#define MAX 26

int main() {
    long int problemas[2][MAX], somatorio = 0;
    int quantidade_submissoes = 0, i = 0;
    char problema, veredito[10];
    int tempo = 0, numero_problemas = 0;

    while (1) {
        somatorio = 0;
        numero_problemas = 0;

        scanf("%d%*c", &quantidade_submissoes);
        if (quantidade_submissoes == 0) {
            break;
        }

        memset(problemas,0,sizeof(problemas));

        for (i = 0; i < quantidade_submissoes; i++) {
            scanf("%c %d %s%*c", &problema, &tempo, veredito);
            
            if (strcmp(veredito,"correct") == 0) {
                problemas[0][problema - 65] = -1;
                problemas[1][problema - 65] = problemas[1][problema - 65] + tempo;
            } else {
                problemas[1][problema - 65] = problemas[1][problema - 65] + 20;
            }
        }

        for (i = 0; i < MAX; i++) {
            if (problemas[0][i] == -1) {
                numero_problemas++;
                somatorio += problemas[1][i];
            } 
        }
    
        printf("%d %ld\n", numero_problemas, somatorio);
    }

    return 0;
}