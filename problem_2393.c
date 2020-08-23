//PROBLEM 2393
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2393
#include <stdio.h>
#include <string.h>

#define MAX 101

int main() {
    int mar[MAX][MAX], j = 0, k = 0;
    int numero_redes = 0, i = 0;
    int xi = 0, yi = 0, xf = 0, yf = 0;
    int resultado = 0;

    scanf("%d", &numero_redes);
    memset(mar, 0, sizeof(mar));

    for (i = 0; i < numero_redes; i++) {
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        for (j = xi; j < xf; j++) {
            for (k = yi; k < yf; k++) {
                if (mar[j][k] == 0) {
                    resultado++;
                    mar[j][k] = 1;
                }
            }
        }
    }

    printf("%d\n", resultado);

    return 0;
}