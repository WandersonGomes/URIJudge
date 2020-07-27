//PROBLEM 2691
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2691
#include <stdio.h>

int main() {
    int primeiro_numero = 0, segundo_numero = 0;
    int numero_testes = 0, i = 0, j = 0;
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        scanf("%dx%d", &primeiro_numero, &segundo_numero);
        
        if (primeiro_numero == segundo_numero) {
            for (j = 5; j < 11; j++) {
                printf("%d x %d = %d\n", primeiro_numero, j, (primeiro_numero*j));
            }
        } else {
            for (j = 5; j < 11; j++) {
                printf("%d x %d = %d", primeiro_numero, j, (primeiro_numero*j));
                printf(" && ");
                printf("%d x %d = %d\n", segundo_numero, j, (segundo_numero*j));
            }
        }
    }

    return 0;
}