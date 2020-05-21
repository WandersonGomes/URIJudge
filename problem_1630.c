//PROBLEM 1630
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1630
#include <stdio.h>

//FUNCAO QUE RETORNA O MDC
long long int mdc(long long int a, long long int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a%b);
}

//PROGRAMA PRINCIPAL
int main() {
    long long int largura = 0, comprimento = 0;
    long long int mdc_largura_comprimento = 0, resultado = 0;

    while (scanf("%lld %lld", &largura, &comprimento) != EOF) {
        mdc_largura_comprimento = mdc(largura, comprimento);

        resultado = ((largura/mdc_largura_comprimento)*2) + ((comprimento/mdc_largura_comprimento) * 2);

        printf("%lld\n", resultado);
    }

    return 0;
}