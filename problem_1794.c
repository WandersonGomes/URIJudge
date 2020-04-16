//PROBLEM 1794
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1794
#include <stdio.h>

int main() {
    int numero_roupas = 0;
    int limite_minimo_lavadora = 0, limite_maximo_lavadora = 0;
    int limite_minimo_secadora = 0, limite_maximo_secadora = 0;
    
    scanf("%d", &numero_roupas);

    scanf("%d %d", &limite_minimo_lavadora, &limite_maximo_lavadora);
    scanf("%d %d", &limite_minimo_secadora, &limite_maximo_secadora);

    if ((numero_roupas >= limite_minimo_lavadora) && (numero_roupas <= limite_maximo_lavadora)) {
        if ((numero_roupas >= limite_minimo_secadora) && (numero_roupas <= limite_maximo_secadora)) {
            printf("possivel\n");
        } else {
            printf("impossivel\n");
        }
    } else {
        printf("impossivel\n");
    }

    return 0;
}