//PROBLEM 1076
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1076
#include <stdio.h>

//PROTOTIPOS FUNCOES
int calcularQuantidadeMovimentos(int qtd_vertices, int qtd_arestas) {
    int matriz_adjacencia[qtd_vertices][qtd_vertices];
    int quantidadeMovimentos = 0;
    int vertice1, vertice2;
    int i, j;

    for (i = 0; i < qtd_vertices; i++)
        for (j = 0; j < qtd_vertices; j++)
            matriz_adjacencia[i][j] = 0;

    for (i = 0; i < qtd_arestas; i++) {
        scanf("%d %d", &vertice1, &vertice2);
        
        if (!matriz_adjacencia[vertice1][vertice2] && !matriz_adjacencia[vertice2][vertice1])
            quantidadeMovimentos += 2;

        matriz_adjacencia[vertice1][vertice2] = 1;
    }

    return quantidadeMovimentos;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_testes,
        no_inicial,
        qtd_vertices,
        qtd_arestas;

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);

    while (qtd_testes--) {
        scanf("%d", &no_inicial);

        scanf("%d %d", &qtd_vertices, &qtd_arestas);

        printf("%d\n", calcularQuantidadeMovimentos(qtd_vertices, qtd_arestas));
    }

    return 0;
}