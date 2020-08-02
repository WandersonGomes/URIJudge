//PROBLEM 1986
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1986
/*
Obs.:
Para mais informacoes aconselho a dar uma olhada na seguinte video aula:
https://www.youtube.com/watch?v=g_4YwXthsdI&t=306s
*/
#include <stdio.h>

int main() {
    unsigned int quantidade_letras = 0, codigo_hexa_letra = 0, i = 0;

    scanf("%d", &quantidade_letras);

    for (i = 0; i < quantidade_letras; i++) {
        scanf("%x", &codigo_hexa_letra);
        printf("%c", codigo_hexa_letra);
    }
    printf("\n");
    
    return 0;
}