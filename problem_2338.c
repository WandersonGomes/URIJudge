//PROBLEM 2338
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2338
#include <stdio.h>
#include <string.h>

#define MAX 1001

//PILHA ESTATICA
typedef struct pil {
    int tam;
    char conteudo[MAX];
} Pilha;

//FUNCAO QUE RETORNA A LETRA
char simbolo(Pilha pilha) {
    int i = 0;
    pilha.conteudo[pilha.tam] = '\0';

    if (strcmp("=.===", pilha.conteudo) == 0) return 'a';
    if (strcmp("===.=.=.=", pilha.conteudo) == 0) return 'b';
    if (strcmp("===.=.===.=", pilha.conteudo) == 0) return 'c';
    if (strcmp("===.=.=", pilha.conteudo) == 0) return 'd';
    if (strcmp("=", pilha.conteudo) == 0) return 'e';
    if (strcmp("=.=.===.=", pilha.conteudo) == 0) return 'f';
    if (strcmp("===.===.=", pilha.conteudo) == 0) return 'g';
    if (strcmp("=.=.=.=", pilha.conteudo) == 0) return 'h';
    if (strcmp("=.=", pilha.conteudo) == 0) return 'i';
    if (strcmp("=.===.===.===", pilha.conteudo) == 0) return 'j';
    if (strcmp("===.=.===", pilha.conteudo) == 0) return 'k';
    if (strcmp("=.===.=.=", pilha.conteudo) == 0) return 'l';
    if (strcmp("===.===", pilha.conteudo) == 0) return 'm';
    if (strcmp("===.=", pilha.conteudo) == 0) return 'n';
    if (strcmp("===.===.===", pilha.conteudo) == 0) return 'o';
    if (strcmp("=.===.===.=", pilha.conteudo) == 0) return 'p';
    if (strcmp("===.===.=.===", pilha.conteudo) == 0) return 'q';
    if (strcmp("=.===.=", pilha.conteudo) == 0) return 'r';
    if (strcmp("=.=.=", pilha.conteudo) == 0) return 's';
    if (strcmp("===", pilha.conteudo) == 0) return 't';
    if (strcmp("=.=.===", pilha.conteudo) == 0) return 'u';
    if (strcmp("=.=.=.===", pilha.conteudo) == 0) return 'v';
    if (strcmp("=.===.===", pilha.conteudo) == 0) return 'w';
    if (strcmp("===.=.=.===", pilha.conteudo) == 0) return 'x';
    if (strcmp("===.=.===.===", pilha.conteudo) == 0) return 'y';
    if (strcmp("===.===.=.=", pilha.conteudo) == 0) return 'z';
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_testes = 0, tam = 0, i = 0, j = 0;
    char mensagem[MAX];
    Pilha palavra, separador;

    //ler a quantidade de testes
    scanf("%d", &numero_testes);

    for (i = 0; i < numero_testes; i++) {
        //ler as mensagens
        scanf("%s", mensagem);
        tam = strlen(mensagem);

        //inicializa as variaveis
        palavra.tam = 0;
        separador.tam = 0;

        for (j = 0; j < tam; j++) {
            //se o simbolo for o igual guarda dentro da pilha palavra
            if (mensagem[j] == '=') {
                //se o separador foi 3 entao que dizer que deve-se inicializar outra palavra
                if (separador.tam == 3) {
                    printf("%c", simbolo(palavra));
                    separador.tam = 0;
                    palavra.tam = 0;
                    //se o separador foi 1 entao que dizer que eh apenas um novo simbolo e adiciona o ponto a palavra
                } else if (separador.tam == 1) {
                    palavra.conteudo[palavra.tam] = separador.conteudo[0];
                    separador.tam--;
                    palavra.tam++;
                }
                //preenche a pilha palavra
                palavra.conteudo[palavra.tam] = mensagem[j];
                palavra.tam++;
                
            //se o simbolo foi o ponto coloca na pilha do separador
            } else if (mensagem[j] == '.') {
                separador.conteudo[separador.tam] = '.';
                separador.tam++;
                //verifica se eh um espaco em branco
                if (separador.tam == 7) {
                    //pega a ultima coisa que tinha na palavra
                    if (palavra.tam > 0) {
                       printf("%c", simbolo(palavra));
                        palavra.tam = 0;
                    }
                    printf(" ");
                    separador.tam = 0;
                }
            }
        }
        //pega a ultima coisa que tinha na palavra
        if (palavra.tam > 0) {
            printf("%c", simbolo(palavra));
        }
        printf("\n");
    }

    return 0;
}