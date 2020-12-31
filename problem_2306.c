//PROBLEM 2306
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2306
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int qtd_pilhas = 0, i = 0;
    long long int soma = 0, resultado = 0, carregador_pedras = 0, altura_primeiro_degrau = 0;
    int* pilhas = NULL;

    scanf("%lld", &qtd_pilhas);
    
    pilhas = (int*) malloc(sizeof(int) * qtd_pilhas);

    for (i = 0; i < qtd_pilhas; i++) {
        scanf("%d", &pilhas[i]);
        soma += pilhas[i];
    }

    altura_primeiro_degrau = (2 * soma) - (qtd_pilhas * qtd_pilhas) + qtd_pilhas; //calcula a altura do primeiro degrau

    if ((altura_primeiro_degrau % (2 * qtd_pilhas) != 0) || (altura_primeiro_degrau <= 0)) {
        printf("-1\n");
    } else {
        altura_primeiro_degrau = altura_primeiro_degrau/(2 * qtd_pilhas);

        for (i = 0; i < qtd_pilhas; i++) {
            if ((altura_primeiro_degrau + i) < pilhas[i]) {
                resultado += pilhas[i] - (altura_primeiro_degrau + i);
                carregador_pedras += pilhas[i] - (altura_primeiro_degrau + i);
            } else if ((altura_primeiro_degrau + i) > pilhas[i]) {
                carregador_pedras -= (altura_primeiro_degrau + i) - pilhas[i];
            }
        }

        if (carregador_pedras != 0) {
            printf("-1\n");
        } else {
            printf("%lld\n", resultado);
        }
    }

    free(pilhas);

    return 0;
}