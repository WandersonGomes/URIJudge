//PROBLEM 2651
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2651
#include <stdio.h>
#include <string.h>

#define MAX 100000

//FUNCAO QUE COLOCAR A STRING EM CAIXA ALTA
void caixaAlta(char *string) {
    int tamanho = strlen(string);
    int i = 0;

    for (i = 0; i < tamanho; i++) {
        if ((string[i] > 96) && (string[i] < 123)) {
            string[i] = string[i] - 97 + 65;
        }
    }
} 

//FUNCAO QUE VERIFICA SE A PRIMEIRA STRING EH SUBSTRING DA SEGUNDA
int ehSubstring(char *string1, char *string2) {
    int tamanho1 = strlen(string1);
    int tamanho2 = strlen(string2);
    int fim = tamanho2 - tamanho1 + 1;
    int i = 0, j = 0;

    if (tamanho1 <= tamanho2) {
        for (i = 0; i < fim; i++) {
            for (j = 0; j < tamanho1; j++) {
                if (string1[j] != string2[j+i]) {
                    break;
                }
            }
            if (j == tamanho1) {
                return 1;
            }
        }
    }
    return 0;
}

//PROGRAMA PRINCIPAL
int main() {
    char mensagem[MAX];
    scanf("%s", mensagem);
    caixaAlta(mensagem);

    if (ehSubstring("ZELDA", mensagem)) {
        printf("Link Bolado\n");
    } else {
        printf("Link Tranquilo\n");
    }
    return 0;
}