//PROBLEM 1796
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1796
#include <stdio.h>

//PROGRAMA PRINCIPAL
int main() {
    long int quantidade_entrevistados = 0, favor = 0, contra = 0, i = 0;
    int voto = 0;

    while (scanf("%ld", &quantidade_entrevistados) != EOF) {
        contra = 0; favor = 0;

        for (i = 0; i < quantidade_entrevistados; i++) {
            scanf("%d", &voto);
            if (voto) {
                contra++;
            } else {
                favor++;
            }
        }

        if (contra < favor) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}