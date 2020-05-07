//PROBLEM 2514
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2514
#include <stdio.h>

//FUNCAO PARA ENCONTRAR O MDC
long long int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a%b);
    }
}

//FUNCAO PARA ENCONTRAR O MMC
long long int mmc(int a, int b, long long int mdc) {
    return (a*b)/mdc;
}

//PROGRAMA PRINCIPAL
int main() {
    long long int anos_antes = 0;
    int lua1 = 0, lua2 = 0, lua3 = 0;
    long long int tmp_mmc = 0, tmp_mdc = 0;

    while (scanf("%lld", &anos_antes) != EOF) {
        scanf("%d %d %d", &lua1, &lua2, &lua3);
    
        tmp_mdc = mdc(lua1, lua2);
        tmp_mmc = mmc(lua1, lua2, tmp_mdc);

        tmp_mdc = mdc(lua3, tmp_mmc);
        tmp_mmc = mmc(lua3, tmp_mmc, tmp_mdc);

        printf("%lld\n", tmp_mmc - anos_antes);
    }

    return 0;
}