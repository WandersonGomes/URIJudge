//PROBLEM 1129
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1129
#include <stdio.h>

//CONSTANTES PARA FACILITAR A LEITURA DO CODIGO
#define TRUE 1
#define FALSE 0

//FUNCAO QUE RETORNA A LETRA MARCADA
char alternativaMarcada(char indice){
    switch (indice)
    {
        case 0: return 'A';
        case 1: return 'B';
        case 2: return 'C';
        case 3: return 'D';
        case 4: return 'E';
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_questoes = -1;
    int i = 0, j = 0, flag = TRUE, indice = 0;
    int alternativas[5] = {0, 0, 0, 0, 0};

    while (quantidade_questoes != 0) {
        scanf("%d", &quantidade_questoes);

        for (i = 0; i < quantidade_questoes; i++) {
            scanf("%d %d %d %d %d", &alternativas[0], &alternativas[1], &alternativas[2], &alternativas[3], &alternativas[4]);

            flag = TRUE;
            indice = -1;
            for (j = 0; j < 5; j++) {
                if ((alternativas[j] <= 127) && (indice == -1)) {
                    indice = j;
                } else if ((alternativas[j] <= 127) && (indice != -1)) {
                    flag = FALSE;
                    break;
                }
            }

            if ((flag) && (indice != -1)) {
                printf("%c\n", alternativaMarcada(indice));
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}