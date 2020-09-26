//PROBLEM 2844
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2844
#include <stdio.h>
#include <string.h>

#define MAX 100001

int main() {
    int atraso1 = 0, reacao1 = 0, velocidade1 = 0;
    int atraso2 = 0, reacao2 = 0, velocidade2 = 0;
    long long int matheus = 0, vinicius = 0, tam = 0;
    char frase[MAX];

    scanf("%d %d %d", &atraso1, &reacao1, &velocidade1);
    scanf("%d %d %d", &atraso2, &reacao2, &velocidade2);
    scanf(" %[^\n]s", frase);

    tam = strlen(frase);

    matheus = (atraso1*2) + reacao1 + (velocidade1*tam);
    vinicius = (atraso2*2) + reacao2 + (velocidade2*tam);
    
    if (matheus < vinicius) {
        printf("Matheus\n");
    } else if (vinicius < matheus) {
        printf("Vinicius\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}