//PROBLEM 1516
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1516
#include <stdio.h>

#define MAX 50

int main() {
    int largura_original = 0, altura_original = 0;
    int largura_nova = 0, altura_nova = 0;
    int i = 0, j = 0, k = 0, w = 0;
    char imagem[MAX][MAX];

    while (1) {
        scanf("%d %d", &altura_original, &largura_original);
        if (altura_original == 0) {
            break;
        }

        for (i = 0; i < altura_original; i++) {
            getchar();
            for (j = 0; j < largura_original; j++) {
                imagem[i][j] = getchar();
            }
        }

        scanf("%d %d", &altura_nova, &largura_nova);

        for (i = 0; i < altura_original; i++) {
            for (k = 0; k < (altura_nova/altura_original); k++) {
                for (j = 0; j < largura_original; j++) {
                    for (w = 0; w < (largura_nova/largura_original); w++) {
                        printf("%c", imagem[i][j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}