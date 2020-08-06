//PROBLEM 1306
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1306
#include <stdio.h>

int main() {
    int numero_ruas = 0, numero_inteiros = 0, caso = 0, resultado = 0;
    int i = 0;

    while (1) {
        //recebe os dados para calcular os valores
        scanf("%d %d", &numero_ruas, &numero_inteiros);
        if (numero_ruas == 0) {
            break;
        }

        //faz o calculo
        if (numero_ruas <= numero_inteiros) {
            resultado = 0;
        } else {
            for (i = 1; i < 27; i++) {
                if (((numero_inteiros*i) + numero_inteiros) >= numero_ruas) {
                    resultado = i;
                    break;
                }
            }

            //caso nao tenha sido encontrado um numero de prefixos disponiveis
            if (i == 27) {
                resultado = -1;
            }
        }


        //apresenta o resultado
        caso++;
        printf("Case %d: ", caso);
        if (resultado != -1) {
            printf("%d\n", resultado);
        } else {
            printf("impossible\n");
        }
    }

    return 0;
}