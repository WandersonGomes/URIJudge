//PROBLEM 3091
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3091
#include <stdio.h>

int main() {
    long int numero1 = 0, numero2 = 0;
    scanf("%ld", &numero1);
    scanf("%ld", &numero2);

    printf("%ld\n", numero1%numero2);

    return 0;
}