//PROBLEM 3068
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3068
//Obs.: A formatacao na saida do problema original esta incorreta.

#include <stdio.h>

int main() {
    int x_canto_esquerdo = 0, y_canto_esquerdo = 0;
    int x_canto_direito = 0, y_canto_direito = 0;
    int x_meteorito = 0, y_meteorito = 0;
    int impactos = 0, teste = 1;
    int quantidade_meteoritos = 0, i = 0;

    while (1) {
        impactos = 0;
        scanf("%d %d %d %d",&x_canto_esquerdo, &y_canto_esquerdo, &x_canto_direito, &y_canto_direito);
        if ((x_canto_esquerdo == 0) && (y_canto_esquerdo == 0) && (x_canto_direito == 0) && (y_canto_direito == 0)) {
            break;
        }

        scanf("%d", &quantidade_meteoritos);

        for (i = 0; i < quantidade_meteoritos; i++) {
            scanf("%d %d", &x_meteorito, &y_meteorito);
        
            if ((x_meteorito >= x_canto_esquerdo) && (x_meteorito <= x_canto_direito)) {
                if ((y_meteorito <= y_canto_esquerdo) && (y_meteorito >= y_canto_direito)) {
                    impactos++;
                }
            }
        }

        printf("Teste\n%d\n%d\n", teste, impactos);

        teste++;
    }

    return 0;
}