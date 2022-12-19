//PROBLEM 1072
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1072
#include <stdio.h>

int main() {
    //dados
    int qtd_numeros, i;

    long numero,
         qtd_fora = 0,
         qtd_dentro = 0;
    
    //leitura
    scanf("%d", &qtd_numeros);

    //processamento - leitura
    for (i = 0; i < qtd_numeros; i++) {
        scanf("%ld", &numero);

        if (numero >= 10 && numero <= 20)
            qtd_dentro++;
        else
            qtd_fora++;
    }

    //saida
    printf("%ld in\n%ld out\n", qtd_dentro, qtd_fora);

    return 0;
}