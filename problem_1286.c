//PROBLEM 1286
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1286
/*
Fontes de estudo:
    https://www.youtube.com/watch?v=QC1jyEImFhk
    https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
    https://youtu.be/ywiH-zRH1mA
*/
#include <stdio.h>

//DEFINICOES
#define MAX 30

//FUNCOES
int maximo(int numero1, int numero2) {
    return (numero1 > numero2) ? numero1 : numero2;
}

int algoritmoMochila01(int capacidade, int pesos[], int valores[], int qtd_itens) {
    //dados
    int item, peso;
    int tabela[qtd_itens + 1][capacidade + 1];

    //preenche a tabela
    for (item = 0; item <= qtd_itens; item++) {
        for (peso = 0; peso <= capacidade; peso++) {
            if (item == 0 || peso == 0)
                tabela[item][peso] = 0;
            else if (pesos[item - 1] <= peso)
                tabela[item][peso] = maximo(valores[item - 1] + tabela[item - 1][peso - pesos[item - 1]], tabela[item - 1][peso]);
            else
                tabela[item][peso] = tabela[item - 1][peso];
        }
    }

    return tabela[qtd_itens][capacidade];
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_pedidos,
        qtd_maxima_pizzas;
    
    int qtd_pizzas[MAX],
        tempos_pedidos[MAX];
    
    int pedido;
    
    //leitura - processamento - saida
    while (1) {
        scanf("%d", &qtd_pedidos);
        
        if (qtd_pedidos == 0)
            break;

        scanf("%d", &qtd_maxima_pizzas);

        for (pedido = 0; pedido < qtd_pedidos; pedido++)
            scanf("%d %d", &tempos_pedidos[pedido], &qtd_pizzas[pedido]);

        printf("%d min.\n", algoritmoMochila01(qtd_maxima_pizzas, qtd_pizzas, tempos_pedidos, qtd_pedidos));
    }

    return 0;
}