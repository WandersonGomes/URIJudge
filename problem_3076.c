//PROBLEM 3076
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3076
#include <stdio.h>

int main() {
    long long int ano = 0;
    int seculo = 0;
    while (scanf("%lld", &ano) != EOF) {
        seculo = ano/100;
        if (ano%100 != 0) {
            seculo++;
        } 
        printf("%d\n", seculo);
    }
    return 0;
}