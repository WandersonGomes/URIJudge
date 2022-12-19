//PROBLEM 1150
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1150
#include <stdio.h>
#include <math.h>

int main() {
    //dados
    int x, z;
    int n1, n2;
    int qtd_numeros;

    //leitura
    scanf("%d", &x);

    do {
        scanf("%d", &z);
    } while (z <= x);

    //processamento
    n1 = (-(2*x - 1) + sqrt(4 * x * x - 4 * x + 1 + 8 * z))/2;
    n2 = (-(2*x - 1) - sqrt(4 * x * x - 4 * x + 1 + 8 * z))/2;

    if (n1 >= 0 && n2 < 0)
        qtd_numeros = n1 + 1;
    else if (n2 >= 0 && n1 < 0)
        qtd_numeros = n2 + 1;
    else if (n1 >= n2)
        qtd_numeros = n1 + 1;
    else
        qtd_numeros = n2 + 1;

    //saida
    printf("%d\n", qtd_numeros);

    return 0;
}