//PROBLEM 1239 
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1239
//Obs.: Tive que usar gets e ainda verificar o tamanho para conseguir accepted
#include <stdio.h>
#include <string.h>

//limpar buffer
char keyboard[BUFSIZ];

int main() {
    char linha[51];
    int tamanho = 0;
    int i = 0, italico = 0, negrito = 0;

    while (gets(linha)) {
        tamanho = strlen(linha);
        if (tamanho == 0) {
            break;
        }

        italico = 0;
        negrito = 0;
        
        for (i = 0; i < tamanho; i++) {
            if (linha[i] == '_') {
                if (italico) {
                    printf("</i>");
                    italico = 0;
                } else {
                    italico = 1;
                    printf("<i>");
                }
            } else if (linha[i] == '*') {
                if (negrito) {
                    printf("</b>");
                    negrito = 0;
                } else {
                    negrito = 1;
                    printf("<b>");
                }
            } else {
                printf("%c", linha[i]);
            }
        }
        printf("\n");
        linha[0] = '\0';
        setbuf(stdin, keyboard);
    }
    
    return 0;
}