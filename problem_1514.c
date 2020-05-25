//PROBLEM 1514
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1514
//Obs.:
/*
Eu sei que nao eh a maneira mais eficiente, porem eh legivel a logica.
*/
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int ninguem = 0;
    int todo_problema = 0;
    int nenhum = 0; 
    int todos_resolveram = 0;
    
    
    int linha = 0, coluna = 0, participantes = 0, problemas = 0;
    int tabela[MAX][MAX];
    int problemas_concluidos[MAX];
    int soma = 0;

    while (1) {
        scanf("%d %d", &participantes, &problemas);
        if ((participantes == 0) && (problemas == 0)) {
            break;
        }

        //inicializa
        ninguem = 1;
        todo_problema = 1;
        nenhum = 1;
        todos_resolveram = 1;

        memset(tabela, 0, sizeof(tabela));
        memset(problemas_concluidos, 0, sizeof(problemas_concluidos));

        //preenche a matriz
        for (linha = 0; linha < participantes; linha++) {
            soma = 0;
            for (coluna = 0; coluna < problemas; coluna++) {
                scanf("%d", &tabela[linha][coluna]);
                //para verificar se teve alguem que conseguiu resolver todos os problemas
                soma += tabela[linha][coluna];
                //preenche todos os problemas que foram resolvidos
                if (tabela[linha][coluna] == 1) {
                    problemas_concluidos[coluna] = 1;
                }
            }

            //alguem resolveu todos os problemas
            if (soma == problemas) {
                ninguem = 0;
            } else if (soma == 0) {
                //se teve alguem que nao conseguiu nenhum
                todos_resolveram = 0;
            }
        }
        
        //verifica se todos os problemas foram resolvidos
        for (coluna = 0; coluna < problemas; coluna++) {
            if (problemas_concluidos[coluna] == 0) {
                todo_problema = 0;
                break;
            }
        }

        //verifica se teve algum problema resolvido por todos
        for (coluna = 0; coluna < problemas; coluna++) {
            soma = 0;
            for (linha = 0; linha < participantes; linha++) {
                soma += tabela[linha][coluna];
            }

            if (soma == participantes) {
                nenhum = 0;
                break;
            }
        }

        printf("%d\n", (todo_problema + todos_resolveram + ninguem + nenhum));
    }
    
    return 0;
}