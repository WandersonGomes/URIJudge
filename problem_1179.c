//PROBLEM 1179
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1179
#include <stdio.h>

int main() {
    int impar[5]; int qtd_impar = 0;
    int par[5]; int qtd_par = 0;

    int valor = 0;

    int i = 0;
    int j = 0;
    for(; i < 15; i++) {
        scanf("%d", &valor);

        if (valor%2 == 0) {
            if (qtd_par <= 4) {
                par[qtd_par] = valor;
                qtd_par++;
            } else {
                //imprimi o vetor
                for(j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0;
                par[qtd_par] = valor;
                qtd_par++;
            }
        } else {
            if (qtd_impar <= 4) {
                impar[qtd_impar] = valor;
                qtd_impar++;
            } else {
                //imprimi o vetor
                for(j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0;
                impar[qtd_impar] = valor;
                qtd_impar++;
            }
        }
    }

    //imprimi o vetor impar
    for(i = 0; i < qtd_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);    
    }
    //imprimi o vetor par
    for(i = 0; i < qtd_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}