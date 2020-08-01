//PROBLEM 1013
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1013
#include <stdio.h>

int main(){
    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    int maior = 0;

    scanf("%d", &valor1);
    maior = valor1;

    scanf("%d", &valor2);
    if (valor2 > maior) {
        maior = valor2;
    }
    
    scanf("%d", &valor3);
    if (valor3 > maior) {
        maior = valor3;
    }

    printf("%d eh o maior\n", maior);

    return 0;
}