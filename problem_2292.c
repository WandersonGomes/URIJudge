//PROBLEM 2292
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2292
#include <stdio.h>
#include <string.h>

int main() {
    int qtd_testes = 0, i = 0, j = 0;
    char painel_leds[61];
    int tamanho_painel = 0;
    long long int binario = 0;
    long long int qtd_alternancias = 0, base = 1;

    scanf("%d", &qtd_testes);

    for (i = 0; i < qtd_testes; i++) {
        scanf("%s %lld", painel_leds, &qtd_alternancias);
        
        binario = 0;
        base = 1;
        tamanho_painel = strlen(painel_leds);
        
        for (j = 0; j < tamanho_painel; j++) {
            if (painel_leds[j] == 'O') //O = 1
                binario += base;
            base *= 2;
        }

        binario += qtd_alternancias;

        for (j = 0; j < tamanho_painel; j++) {
            if (binario & 1)
                printf("O");
            else 
                printf("X");
            binario = binario >> 1;
        }
        printf("\n");
    }

    return 0;
}