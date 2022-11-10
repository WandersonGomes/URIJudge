//PROBLEM 3339
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3339
#include <stdio.h>
#include <math.h>

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_testes;
    long inferior, superior;
    int qtd_quadrados_perfeitos;

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);
    while (qtd_testes--) {
        scanf("%ld %ld", &inferior, &superior);

        qtd_quadrados_perfeitos = (long long)floor(sqrt(superior)) - (long long)ceil(sqrt(inferior)) + 1;

        printf("%d\n", qtd_quadrados_perfeitos);
    }

    return 0;
}