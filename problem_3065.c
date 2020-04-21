//PROBLEM 3065
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3065
#include <stdio.h>

int main() {
    int quantidade_termos = 0;
    int resultado = 0, numero = 0, teste = 1;
    int i = 0;
    
    while ((scanf("%d", &quantidade_termos) == 1) && (quantidade_termos > 0)) {
        resultado = 0;
        for (i = 0; i < quantidade_termos; i++) {
            scanf("%d", &numero);
            resultado += numero;
        }
    
        printf("Teste %d\n%d\n\n", teste, resultado);
        teste++;
    }

    return 0;
}