//PROBLEM 1288
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1288
#include <stdio.h>

//DEFINICOES
#define MAX 50

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
    int qtd_testes;
    int qtd_projeteis, i;
    int poderes_destruicao[MAX], pesos_projeteis[MAX];
    int capacidade_carga, resistencia_castelo;

    //leitura - processamento - saida
    scanf("%d", &qtd_testes);

    while (qtd_testes--) {
        scanf("%d", &qtd_projeteis);

        for (i = 0; i < qtd_projeteis; i++)
            scanf("%d %d", &poderes_destruicao[i], &pesos_projeteis[i]);

        scanf("%d", &capacidade_carga);
        scanf("%d", &resistencia_castelo);

        if (algoritmoMochila(capacidade_carga, pesos_projeteis, poderes_destruicao, qtd_projeteis) < resistencia_castelo)
            puts("Falha na missao");
        else
            puts("Missao completada com sucesso");
    }

    return 0;
}