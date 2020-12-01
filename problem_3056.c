//PROBLEM 3056
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3056
#include <stdio.h>

//STRUCT BASES PARA O CALCULO
typedef struct {
    long long int valores[50];
} Bases;

//PREENCHE AS BASES
void preencheBases(Bases* bases) {
    int i;
    bases->valores[0] = 3;
    for (i = 1; i < 50; i++) {
        bases->valores[i] = (2 * bases->valores[i-1]) - 1;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int passo = 0;
    unsigned long long int resultado = 0;
    Bases bases;
    preencheBases(&bases);

    scanf("%d", &passo);

    resultado = bases.valores[passo-1] * bases.valores[passo-1];

    printf("%llu\n", resultado);

    return 0;
}