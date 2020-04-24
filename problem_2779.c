//PROBLEM 2779
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2779
#include <stdio.h>
#include <string.h>

int main() {
    int figurinhas[100];
    int quantidade_figurinhas_album = 0;
    int figurinhas_compradas = 0;
    int figurinha = 0, resultado = 0;

    scanf("%d", &quantidade_figurinhas_album);

    scanf("%d", &figurinhas_compradas);

    //usada para inicilizar o vetor de figurinhas
    memset(figurinhas,0,sizeof(figurinhas));

    int i = 0;
    for(; i < figurinhas_compradas; i++) {
        scanf("%d", &figurinha);
        figurinhas[figurinha-1] = 1;
    }

    //calcula o resultado
    for (i = 0; i < quantidade_figurinhas_album; i++) {
        if (figurinhas[i] == 0) {
            resultado++;
        } 
    }

    printf("%d\n", resultado);
    return 0;
}