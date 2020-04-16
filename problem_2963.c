//PROBLEM 2963
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2963
#include <stdio.h>

#define POSICAO_CARLOS 1

int main() {
    int quantidade_participantes = 0, posicao_vencedora = POSICAO_CARLOS;
    long int numero_votos = 0, votos_carlos = 0;

    scanf("%d", &quantidade_participantes);
    
    scanf("%d", &numero_votos);
    votos_carlos = numero_votos;

    int i = 1;
    for (; i < quantidade_participantes; i++) {
        scanf("%d", &numero_votos);
        if (numero_votos > votos_carlos) {
            posicao_vencedora = 0; //carlos nao venceu eh apenas o que desejamos saber. O loop continua por causa da leitura dos votos
        }
    }

    //analisa o resultado
    if (posicao_vencedora) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}