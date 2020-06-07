//PROBLEM 2494
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2494
#include <stdio.h>

//FUNCAO QUE RETORNA O MDC DE DOIS NUMEROS
int mdc(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return mdc(b, a%b);
}

//PROGRAMA PRINCIPAL
int main() {
    int azuis = 0, pretas = 0, equipes = 0;
    int pacotes_azuis = 0, pacotes_pretas = 0;
    int canetas_por_pacote = 0;

    while (scanf("%d %d %d", &azuis, &pretas, &equipes) != EOF) {
        canetas_por_pacote = mdc(azuis, pretas);

        pacotes_azuis = azuis/canetas_por_pacote;
        pacotes_pretas = pretas/canetas_por_pacote;

        if ((pacotes_azuis + pacotes_pretas)/equipes > 0) {
            printf("sim\n");
        } else {
            printf("nao\n");
        }
    }

    return 0;
}