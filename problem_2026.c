//PROBLEM 2026
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2026
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
                    tabela[item - 1][peso]
                );
            else
                tabela[item][peso] = tabela[item - 1][peso];
        }
    }

    return tabela[qtd_itens][capacidade];
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_galhos;
    int qtd_pacotes, capacidade_galho;
    int i, j;
    int qtd_enfeites[MAX], pesos_pacotes[MAX];

    //leitura - processamento - saida
    scanf("%d", &qtd_galhos);

    for (i = 1; i <= qtd_galhos; i++) {
        scanf("%d", &qtd_pacotes);
        scanf("%d", &capacidade_galho);

        for (j = 0; j < qtd_pacotes; j++)
            scanf("%d %d", &qtd_enfeites[j], &pesos_pacotes[j]);

        printf("Galho %d:\n", i);
        printf("Numero total de enfeites: %d\n\n", algoritmoMochila(capacidade_galho, pesos_pacotes, qtd_enfeites, qtd_pacotes));
    }

    return 0;
}