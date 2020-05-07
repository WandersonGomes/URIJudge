//PROBLEM 1515
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1515
#include <stdio.h>
#include <string.h>

#define MAX 4000

//FUNCAO QUE APRESENTA O VALOR DO ANO DE ENVIO DA MENSAGEM - Obs.: facilita leitura do codigo
int anoTransmissao(int ano_recebimento, int tempo_distancia) {
    return ano_recebimento - tempo_distancia;
}

//PROGRAMA PRINCIPAL
int main() {
    int quantidade_hello_galaxy = 0;
    char planeta[51], primeiro_planeta[51];
    int ano_recebimento = 0, tempo_distancia = 0, i = 0, ano_mais_antigo = MAX;
    int tmp = 0;

    while (1) {
        scanf("%d", &quantidade_hello_galaxy);
        if (!quantidade_hello_galaxy) {
            break;
        }
        
        ano_mais_antigo = MAX;
        
        for (i = 0; i < quantidade_hello_galaxy; i++) {
            scanf("%s%*c %d %d", planeta, &ano_recebimento, &tempo_distancia);

            tmp = anoTransmissao(ano_recebimento, tempo_distancia);
            if (tmp < ano_mais_antigo) {
                strcpy(primeiro_planeta, planeta);
                ano_mais_antigo = tmp;
            }
        }

        printf("%s\n", primeiro_planeta);
    }

    return 0;
}