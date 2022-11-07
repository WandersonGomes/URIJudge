//PROBLEM 1029
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1029
#include <stdio.h>

//DEFINICOES
#define MAX 40

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long long chamadas_recursivas[MAX];
    long long fatoriais[MAX];
    int i, qtd_testes, numero;

    //preenche os valores dos fatorais e das chamadas recursivas
    fatoriais[0] = 0;
    fatoriais[1] = 1;

    chamadas_recursivas[0] = 0;
    chamadas_recursivas[1] = 0;
    
    for (i = 2; i < MAX; i++) {
        chamadas_recursivas[i] = chamadas_recursivas[i - 1] + chamadas_recursivas[i - 2] + 2;
        fatoriais[i] = fatoriais[i - 1] + fatoriais[i - 2];
    }

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);

    for (i = 0; i < qtd_testes; i++) {
        scanf("%d", &numero);
        printf("fib(%d) = %lld calls = %lld\n", 
            numero,
            chamadas_recursivas[numero],
            fatoriais[numero]
        );
    }

    return 0;
}