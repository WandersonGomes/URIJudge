//PROBLEM 3090
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3090
#include <stdio.h>

int main() {
    long long int comprimento_campo = 0, largura_campo = 0, numero_soldados = 0;
    long long int coordenada_x = 0, coordenada_y = 0, habilidade = 0;
    long long int exercito1 = 0, exercito2 = 0;
    long long int determinante = 0;
    long long int i = 0;

    scanf("%lld %lld %lld", &comprimento_campo, &largura_campo, &numero_soldados);

    for (i = 0; i < numero_soldados; i++) {
        scanf("%lld %lld %lld", &coordenada_x, &coordenada_y, &habilidade);

        determinante = (comprimento_campo * coordenada_y) - (largura_campo * coordenada_x);

        if (determinante > 0) {
            exercito1 += habilidade;
        } else {
            exercito2 += habilidade;
        }
    }

    printf("%lld %lld\n", exercito1, exercito2);

    return 0;
}