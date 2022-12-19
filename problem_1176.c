//PROBLEM 1176
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1176
#include <stdio.h>

//DEFINICOES
#define MAX 61

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int i;
    unsigned long long fibonacci[MAX];
    int qtd_testes, indice_fibonacci;

    //inicializacao
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;

    for (i = 3; i < MAX; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);

    while (qtd_testes--) {
        scanf("%d", &indice_fibonacci);
        printf("Fib(%d) = %llu\n", indice_fibonacci, fibonacci[indice_fibonacci]);      
    }

    return 0;
}