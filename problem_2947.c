//PROBLEM 2947
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2947
#include <stdio.h>
#include <string.h>

int main() {
    int tabela[26];
    char desafortunato[101];
    int qtd_questoes = 0, qtd_colegas = 0, i = 0, j = 0;
    char respostas_colegas[100][101];
    int maior = 0, max_pontos = 0, posicao_letra = 0;

    scanf("%d", &qtd_questoes);
    scanf("%s", desafortunato);

    scanf("%d", &qtd_colegas);
    for (i = 0; i < qtd_colegas; i++)
        scanf("%s", respostas_colegas[i]);
    

    for (i = 0; i < qtd_questoes; i++) {
        maior = 0;
        memset(tabela, 0, sizeof(tabela));
        for (j = 0; j < qtd_colegas; j++) {
            if (respostas_colegas[j][i] != desafortunato[i]) {
                posicao_letra = respostas_colegas[j][i]%65;
                tabela[posicao_letra]++;

                if (tabela[posicao_letra] > maior)
                    maior = tabela[posicao_letra];
            }
        }
        max_pontos += maior;
    }

    printf("%d\n", max_pontos);

    return 0;
}