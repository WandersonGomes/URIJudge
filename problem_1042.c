//PROBLEM 1042
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1042
#include <stdio.h>

int main() {
    //dados
    int numero1, numero2, numero3;
    int maior, meio, menor;

    //leitura
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    //processamento
    if (numero1 > numero2) {
        if (numero2 > numero3) {
            maior = numero1;
            meio = numero2;
            menor = numero3;
        } else {
            if (numero1 > numero3) {
                maior = numero1;
                meio = numero3;
                menor = numero2;
            } else {
                maior = numero3;
                meio = numero1;
                menor = numero2;
            }
        }
    } else {
        if (numero2 > numero3) {
            if (numero1 > numero3) {
                maior = numero2;
                meio = numero1;
                menor = numero3;
            } else {
                maior = numero2;
                meio = numero3;
                menor = numero1;
            }
        } else {
            maior = numero3;
            meio = numero2;
            menor = numero1;
        }
    }

    //saida
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", numero1, numero2, numero3);

    return 0;
}