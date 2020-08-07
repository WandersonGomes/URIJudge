//PROBLEM 2158
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2158
/*
Para mais informacoes:
https://brasilescola.uol.com.br/matematica/relacao-euler.htm
https://www.blogmatica.pt/news/p4-quantas-arestas-tem-uma-bola-de-futebol-/
*/
#include <stdio.h>

int main() {
    unsigned long long int numero_pentagonos = 0, numero_hexagonos = 0;
    unsigned long long int numero_arestas = 0, numero_vertices = 0, teste = 0;

    while (scanf("%lld %lld", &numero_pentagonos, &numero_hexagonos) != EOF) {
        numero_arestas = ((numero_pentagonos*5) + (numero_hexagonos*6))/2;
        numero_vertices = 2 + numero_arestas - (numero_pentagonos + numero_hexagonos);

        teste++;
        printf("Molecula #%lld.:.\n", teste);
        printf("Possui %lld atomos e %lld ligacoes\n\n", numero_vertices, numero_arestas);
    }

    return 0;
}