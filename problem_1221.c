//PROBLEM 1221
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1221
#include <stdio.h>
#include <math.h>

//FUNCAO QUE INFORMA SE EH PRIMO OU NAO
void ehPrimo(long long int numero) {
    long long int divisor = 2;
    long long int raiz = (long long int) sqrt(numero);
    
    if (numero == 2) {
        printf("Prime\n");
    } else {

        while (divisor <= raiz) {
            if ((numero%divisor) == 0) {
                printf("Not Prime\n");
                return;
            }

            //para usar apenas valores impares
            if (divisor == 2) {
                divisor = 3;
            } else {
                divisor += 2;
            }
        }
        
        printf("Prime\n");
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_testes = 0;
    long long int numero = 0;

    scanf("%d", &quantidade_testes);

    while(quantidade_testes) {
        scanf("%lld", &numero);
        ehPrimo(numero);
        quantidade_testes--;
    }

    return 0;
}