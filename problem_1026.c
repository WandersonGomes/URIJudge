//PROBLEM 1026
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1026
#include <stdio.h>

int main() {
    unsigned int numero1 = 0, numero2 = 0;
    
    while (scanf("%u %u", &numero1, &numero2) != EOF) {
        printf("%u\n", numero1^numero2);
    }

    return 0;
}