//PROBLEM 1300
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1300
#include <stdio.h>

int main() {
    int numero = 0;
    
    while (scanf("%d", &numero) != EOF) {
        if (numero%6 == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    
    return 0;
}