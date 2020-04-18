//PROBLEM 2598
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2598
#include <stdio.h>

//FUNCAO QUE RETORNA O NUMERO MINIMO DE RADARES
long long int numeroMinimoRadar(long long int tamanho_avenida, long long int cobertura_radar) {
    long long int resultado = 0, resto = 0;

    resultado = tamanho_avenida/cobertura_radar;
    resto = tamanho_avenida%cobertura_radar;

    if (resto != 0) {
        resultado++;
    }    

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_testes = 0;
    long long int tamanho_avenida = 0, cobertura_radar = 0;
    
    scanf("%d", &quantidade_testes);

    int i = 0;
    for (; i < quantidade_testes; i++) {
        scanf("%lld %lld", &tamanho_avenida, &cobertura_radar);
        printf("%lld\n", numeroMinimoRadar(tamanho_avenida, cobertura_radar));
    }

    return 0;
}