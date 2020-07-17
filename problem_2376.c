//PROBLEM 2376
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2376
#include <stdio.h>

int main() {
    char equipes[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    char oitavas[8], quartas[4], semifinal[2];
    int equipe1 = 0, equipe2 = 0;
    char campeao = 'A';
    int i = 0, j = 0;
    
    //classificacao das oitavas
    for (i = 0; i < 8; i++) {
        scanf("%d %d", &equipe1, &equipe2);
        if (equipe1 > equipe2) {
            oitavas[i] = equipes[j];
        } else {
            oitavas[i] = equipes[j+1];
        }
        j += 2;
    }

    //classificacao das quartas
    j = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d %d", &equipe1, &equipe2);
        if (equipe1 > equipe2) {
            quartas[i] = oitavas[j];
        } else {
            quartas[i] = oitavas[j+1];
        }
        j += 2;
    }

    //classificao semi final
    j = 0;
    for (i = 0; i < 2; i++) {
        scanf("%d %d", &equipe1, &equipe2);
        if (equipe1 > equipe2) {
            semifinal[i] = quartas[j];
        } else {
            semifinal[i] = quartas[j+1];
        }
        j += 2;
    }

    //final
    scanf("%d %d", &equipe1, &equipe2);
    if (equipe1 > equipe2) {
        campeao = semifinal[0];
    } else {
        campeao = semifinal[1];
    }

    printf("%c\n", campeao);
    return 0;
}