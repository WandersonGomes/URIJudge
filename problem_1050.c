//PROBLEM 1050
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1050
#include <stdio.h>

int main() {
    //dados
    int ddd;

    //leitura
    scanf("%d", &ddd);

    //processamento - saida
    switch (ddd) {
        case 61: puts("Brasilia"); break;
        case 71: puts("Salvador"); break;
        case 11: puts("Sao Paulo"); break;
        case 21: puts("Rio de Janeiro"); break;
        case 32: puts("Juiz de Fora"); break;
        case 19: puts("Campinas"); break;
        case 27: puts("Vitoria"); break;
        case 31: puts("Belo Horizonte"); break;
        default: puts("DDD nao cadastrado"); 
    }

    return 0;
}