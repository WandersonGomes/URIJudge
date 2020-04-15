//PROBLEM 1250
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1250
#include <stdio.h>

#define PULA 'J'

int main() {
    int quantidade_testes = 0, numero_tiros = 0, alturas_tiros[50], quantidade_tiros_levados = 0;
    char acoes[51];

    scanf("%d", &quantidade_testes);
    int i = 0, j = 0;
    for (; i < quantidade_testes; i++) {
        quantidade_tiros_levados = 0;

        //leitura dados
        scanf("%d", &numero_tiros);

        int i = 0;
        for (j = 0; j < numero_tiros; j++) {
            scanf("%d", &alturas_tiros[j]);
        }

        scanf("%s", acoes);

        //contagem de tiros levados
        for (j = 0; j < numero_tiros; j++) {
            if (acoes[j] == PULA) {
                if (alturas_tiros[j] > 2) {
                    quantidade_tiros_levados++;
                }
            } else {
                if (alturas_tiros[j] <= 2) {
                    quantidade_tiros_levados++;
                }
            }
        }

        printf("%d\n", quantidade_tiros_levados);
    }

    return 0;
}