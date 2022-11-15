//PROBLEM 2472
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2472
#include <stdio.h>

//FUNCOES
long long potencia2(long long numero) {
    return numero * numero;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long long comprimento_tubo,
              qtd_tapetes;
    
    long long maior_area;

    //leitura
    scanf("%lld %lld", &comprimento_tubo, &qtd_tapetes);

    //processamento
    maior_area = potencia2(comprimento_tubo - (qtd_tapetes - 1)) + (qtd_tapetes - 1);

    //saida
    printf("%lld\n", maior_area);

    return 0;
}