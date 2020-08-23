//PROBLEM 1067
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1067
#include <stdio.h>

int main() {
    int numero = 0;
    
    scanf("%d", &numero);

    int aux = 1;
    while (aux <= numero) {
        if ((aux%2) != 0) {
            printf("%d\n", aux);
        }
        aux = aux + 2;
    }
    return 0;
}