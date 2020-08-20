//PROBLEM 2984
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2984
#include <stdio.h>

//PROGRAMA PRINCIPAL
int main() {
    long int assuntos_abertos = 0;
    char assunto = 'a';

    while (1) {
        assunto = getchar();
        if (assunto == '\n') {
            break;
        }

        if (assunto == '(') {
            assuntos_abertos++;
        } else {
            if (assuntos_abertos > 0) {
                assuntos_abertos--;
            }
        }
    }

    if (assuntos_abertos > 0) {
        printf("Ainda temos %ld assunto(s) pendente(s)!\n", assuntos_abertos);
    } else {
        printf("Partiu RU!\n");
    }

    return 0;
}