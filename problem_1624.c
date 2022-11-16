//PROBLEM 1624
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1624
/*
Fontes de estudo:
    https://www.youtube.com/watch?v=QC1jyEImFhk
    https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
    https://youtu.be/ywiH-zRH1mA
*/
#include <stdio.h>

//DEFINICOES
#define MAX 100

//FUNCOES
int maximo(int numero1, int numero2) {
    return (numero1 > numero2) ? numero1 : numero2;
}

int algoritmoMochila(int capacidade, int pesos[], int valores[], int qtd_itens) {
    int item, peso;
    int tabela[qtd_itens + 1][capacidade + 1];

    for (item = 0; item <= qtd_itens; item++) {
        for (peso = 0; peso <= capacidade; peso++) {
            if (item == 0 || peso == 0)
                tabela[item][peso] = 0;
            else if (pesos[item - 1] <= peso)
                tabela[item][peso] = maximo(
                    valores[item - 1] + tabela[item - 1][peso - pesos[item - 1]], 
                    tabela[item - 1][peso]);
            else
                tabela[item][peso] = tabela[item - 1][peso];
        }
    }

    return tabela[qtd_itens][capacidade];
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_produtos,
        i,
        precos[MAX],
        pesos[MAX],
        peso_maximo;
    
    //leitura - processamento - saida
    while (1) {
        scanf("%d", &qtd_produtos);
        if (!qtd_produtos) break;

        for (i = 0; i < qtd_produtos; i++)
            scanf("%d %d", &precos[i], &pesos[i]);
        
        scanf("%d", &peso_maximo);

        printf("%d\n", algoritmoMochila(peso_maximo, pesos, precos, qtd_produtos));
    }
    return 0;
}