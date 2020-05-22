//PROBLEM 2217
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2217
#include <stdio.h>

int main() {
    long long int expoente = 0;
    long long int numero_instancias = 0, i = 0;

    scanf("%lld", &numero_instancias);
    for (i = 0; i < numero_instancias; i++) {
        scanf("%lld", &expoente);
        if (expoente%2 == 0) {
            printf("1\n");
        } else {
            printf("9\n");
        }
    }

    return 0;
}