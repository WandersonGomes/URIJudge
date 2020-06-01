//PROBLEM 1989
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1989
#include <stdio.h>

//PROGRAMA PRINCIPAL
int main() {
    long long int numero_temporadas = 0, duracao_capitulo = 0, tempo = 0, i = 0;
    int quantidade_capitulos = 0;
    
    while (1) {
        scanf("%lld %lld", &numero_temporadas, &duracao_capitulo);
        if (numero_temporadas == -1) {
            break;
        }

        tempo = 0;
        for (i = numero_temporadas; i > 0; i--) {
            scanf("%d", &quantidade_capitulos);
            tempo += (quantidade_capitulos * duracao_capitulo) * i;
        }

        printf("%lld\n", tempo);
    }

    return 0;
}