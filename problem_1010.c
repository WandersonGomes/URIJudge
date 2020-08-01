//PROBLEM 1010
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1010
#include <stdio.h>

int main() {
    int codigo_peca1 = 0;
    int numero_pecas1 = 0;
    double valor_unitario_1 = 0.0;

    int codigo_peca2 = 0;
    int numero_pecas2 = 0;
    double valor_unitario_2 = 0.0;

    double valor_pago = 0.0;

    scanf("%d %d %lf", &codigo_peca1, &numero_pecas1, &valor_unitario_1);
    scanf("%d %d %lf", &codigo_peca2, &numero_pecas2, &valor_unitario_2);    

    valor_pago = (numero_pecas1 * valor_unitario_1) + (numero_pecas2 * valor_unitario_2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_pago);
    
    return 0;
}