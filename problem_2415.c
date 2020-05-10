//PROBLEM 2415
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2415
#include <stdio.h>

int main() {
    long anterior = 0, numero = 0, tmp = 1, resposta = 1;
    int i = 0;
    int quantidade_numeros = 0;
    scanf("%d", &quantidade_numeros);


    scanf("%ld", &anterior);
    for (i = 1; i < quantidade_numeros; i++) {
        scanf("%ld", &numero);
        if (numero == anterior) {
            tmp++;
        } else {
            anterior = numero;
            if (tmp > resposta) {
                resposta = tmp;
            }
            tmp = 1;
        }
    }

    if (tmp > resposta) {
        resposta = tmp;
    }

    printf("%d\n", resposta);
    return 0;
}