//PROBLEM 1379
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1379
#include <stdio.h>

int main() {
    long long int numeroA = 0, numeroB = 0, numeroC = 0, tmp = 0;

    scanf("%lld %lld", &numeroA, &numeroB);

    do {
        if (numeroA < numeroB) {
            tmp = numeroA;
        } else {
            tmp = numeroB;
        }

        numeroC = (3*tmp) - (numeroA + numeroB);
        
        printf("%lld\n", numeroC);
        
        scanf("%lld %lld", &numeroA, &numeroB);
    } while ((numeroA != 0) && (numeroB != 0));

    return 0;
}