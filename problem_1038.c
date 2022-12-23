//PROBLEM 1038
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1038
#include <stdio.h>

int main() {
    //dados
    int codigo, quantidade;
    double valor_conta;

    //leitura
    scanf("%d %d", &codigo, &quantidade);

    //processamento
    switch (codigo) {
        case 1: valor_conta = quantidade * 4.00; break;
        case 2: valor_conta = quantidade * 4.50; break;
        case 3: valor_conta = quantidade * 5.00; break;
        case 4: valor_conta = quantidade * 2.00; break;
        case 5: valor_conta = quantidade * 1.50; break;
    }

    //saida
    printf("Total: R$ %.2lf\n", valor_conta);

    return 0;
}