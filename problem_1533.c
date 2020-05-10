//PROBLEM 1533
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1533
#include <stdio.h>

int main() {
    int numero_suspeitos = 0;
    int suspeito = 0, suspeito1 = 0, suspeito2 = 0, indice1 = 0, indice2 = 0;
    int i = 0, tmp = 0;

    while (1) {
        suspeito1 = 0; 
        suspeito2 = 0;
        indice1 = 0;
        indice2 = 0;
        
        scanf("%d", &numero_suspeitos);
        if (numero_suspeitos == 0) {
            break;
        }

        for (i = 0; i < numero_suspeitos; i++) {
            scanf("%d", &suspeito);
            if (suspeito > suspeito1) {
                tmp = suspeito1;
                suspeito1 = suspeito;
                suspeito2 = tmp;

                tmp = indice1;
                indice1 = i;
                indice2 = tmp;
            } else if (suspeito > suspeito2) {
                suspeito2 = suspeito;
                indice2 = i;
            }
        }

        printf("%d\n", indice2 + 1);
    }

    return 0;
}