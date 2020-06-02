//PROBLEM 2251
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2251 
#include <stdio.h>
#include <math.h>

//PROGRAMA PRINCIPAL
int main() {
    long long int resultado = 0;
    int teste = 0, discos = 0;

    while (1) {
        teste++;
        scanf("%d", &discos);
        if (discos <= 0) {
            break;
        }
        
        resultado = pow(2, discos) - 1;

        printf("Teste %d\n", teste);
        printf("%lld\n", resultado);
        printf("\n");
    }

    return 0;
}