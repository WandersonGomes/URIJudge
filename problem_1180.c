//PROBLEM 1180
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1180
#include <stdio.h>

int main() {
    //dados
    int tamanho_vetor, i;
    int valor;
    int menor_valor;
    int posicao;

    //leitura - processamento
    scanf("%d", &tamanho_vetor);

    scanf("%d", &valor);
    menor_valor = valor;
    posicao = 0;
    
    for (i = 1; i < tamanho_vetor; i++) {
        scanf("%d", &valor);
        
        if (valor < menor_valor) {
            menor_valor = valor;
            posicao = i;
        }
    }

    //saida
    printf("Menor valor: %d\nPosicao: %d\n", menor_valor, posicao);

    return 0;
}