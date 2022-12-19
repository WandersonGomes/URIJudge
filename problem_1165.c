//PROBLEM 1165
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1165
#include <stdio.h>
#include <math.h>

int main() {
    //dados
    int qtd_testes;
    int divisor, flag_primo;
    long numero;
    double raiz;

    //leitura
    scanf("%d", &qtd_testes);

    while (qtd_testes--) {
        scanf("%ld", &numero);
        
        raiz = sqrt(numero);
        flag_primo = 1;

        for (divisor = 2; divisor <= raiz; divisor++)
            if (numero % divisor == 0) {
                flag_primo = 0;
                break;
            }
        
        (flag_primo) ? printf("%ld eh primo\n", numero) : 
                       printf("%ld nao eh primo\n", numero);
    }

    return 0;
}