//PROBLEM 3263
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3263
#include <stdio.h>
#include <string.h>

//DEFINICOES
#define MAX 1001

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_sobrescricao,
        tamanho_arquivo, 
        indice;

    char arquivo_antes[MAX],
         arquivo_depois[MAX];

    int eh_par,
        resposta;

    //leitura
    scanf("%d", &qtd_sobrescricao);
    scanf("%s", arquivo_antes);
    scanf("%s", arquivo_depois);

    //processamento
    tamanho_arquivo = strlen(arquivo_antes);
    eh_par = qtd_sobrescricao % 2;
    resposta = 1;

    for (indice = 0; indice < tamanho_arquivo; indice++) {
        if (!eh_par) {
            if (arquivo_antes[indice] != arquivo_depois[indice]) {
                resposta = 0;
                break;
            }
        } else {
            if (arquivo_antes[indice] == arquivo_depois[indice]) {
                resposta = 0;
                break;
            }
        }
    }

    //saida
    if (resposta)
        puts("Deletion succeeded");
    else
        puts("Deletion failed");

    return 0;
}