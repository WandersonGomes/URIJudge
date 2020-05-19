//PROBLEM 2926
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2926
#include <stdio.h>

//FUNCAO QUE ESCREVE A QUANTIDADE DE IS
void preencheA(int quantidade) {
    int i = 0;
    for (i = 0; i < quantidade; i++) {
        printf("a");
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int nivel_felicidade = 0;    
    scanf("%d", &nivel_felicidade);


    printf("Ent");
    preencheA(nivel_felicidade);
    printf("o eh N");
    preencheA(nivel_felicidade);
    printf("t");
    preencheA(nivel_felicidade);
    printf("l!\n");

    return 0;
}