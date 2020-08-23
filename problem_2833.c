//PROBLEM 2833
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2833
/*
Obs.:
Para melhora a visualizacao da resolucao optei em realizar as verificacoes apos
o preenchimento das oitavas de finais
*/
#include <stdio.h>
#include <string.h>

int main() {
    int oitavas[16], quartas[8], semifinal[4], final[2];
    int i = 0, j = 0, encontro = 0;

    //preenchendo as oitavas de finais
    memset(oitavas, 0, sizeof(oitavas));
    for (i = 0; i < 16; i++) {
        scanf("%d", &oitavas[i]);
    }

    //verificando se o encontro ocorreu nas oitavas
    memset(quartas, 0, sizeof(quartas));
    for (i = 0; i < 16; i += 2) {
        if ((oitavas[i] == 1) && (oitavas[i+1] == 9)) {
            encontro = 8;
            break;
        } else if ((oitavas[i] == 9) && (oitavas[i+1] == 1)) {
            encontro = 8;
            break;
        } else {
            if ((oitavas[i] == 1) || (oitavas[i] == 9)) {
                quartas[j] = oitavas[i];
            } else if ((oitavas[i+1] == 1) || (oitavas[i+1] == 9)) {
                quartas[j] = oitavas[i+1];
            } else {
                quartas[j] = oitavas[i];
            }
            j++;
        }
    }

    //verificando se o encontro ocorreu nas quartas
    if (encontro == 0) {
        memset(semifinal, 0, sizeof(semifinal));
        j = 0;
        for (i = 0; i < 8; i += 2) {
            if ((quartas[i] == 1) && (quartas[i+1] == 9)) {
                encontro = 4;
                break;
            } else if ((quartas[i] == 9) && (quartas[i+1] == 1)) {
                encontro = 4;
                break;
            } else {
                if ((quartas[i] == 1) || (quartas[i] == 9)) {
                    semifinal[j] = quartas[i];
                } else if ((quartas[i+1] == 1) || (quartas[i+1] == 9)) {
                    semifinal[j] = quartas[i+1];
                } else {
                    semifinal[j] = quartas[i];
                }
                j++;
            }
        }
    }

    //verificando se foi nas semifinais
    if (encontro == 0) {
        memset(final, 0, sizeof(final));
        j = 0;
        for (i = 0; i < 4; i += 2) {
            if ((semifinal[i] == 1) && (semifinal[i+1] == 9)) {
                encontro = 2;
                break;
            } else if ((semifinal[i] == 9) && (semifinal[i+1] == 1)) {
                encontro = 2;
                break;
            } else {
                if ((semifinal[i] == 1) || (semifinal[i] == 9)) {
                    final[j] = semifinal[i];
                } else if ((semifinal[i+1] == 1) || (semifinal[i+1] == 9)) {
                    final[j] = semifinal[i+1];
                } else {
                    final[j] = semifinal[i];
                }
                j++;
            }
        }
    }

    //apresentando o resultado
    switch (encontro) {
        case 0: printf("final\n"); break;
        case 2: printf("semifinal\n"); break;
        case 4: printf("quartas\n"); break;
        case 8: printf("oitavas\n"); break;
    }

    return 0;
}