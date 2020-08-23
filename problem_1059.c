//PROBLEM 1059
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1059
#include <stdio.h>

int main() {
    int numero = 0;
    for (numero = 2; numero < 102; numero = numero + 2) {
        printf("%d\n", numero);
    }
    return 0;
}