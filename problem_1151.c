//PROBLEM 1151
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1151
#include <stdio.h>

int main() {
    //dados
    int qtd_termos, i;
    int anterior1 = 0, anterior2 = 1, atual;
    
    //leitura
    scanf("%d", &qtd_termos);

    //processamento - saida
    if (qtd_termos == 1) printf("0\n");
    else if (qtd_termos == 2) printf("0 1\n");
    else {
        printf("0 1");

        for (i = 3; i <= qtd_termos; i++) {
            atual = anterior1 + anterior2;
            
            printf(" %d", atual);

            anterior1 = anterior2;
            anterior2 = atual;
        }
        printf("\n");
    }

    return 0;
}