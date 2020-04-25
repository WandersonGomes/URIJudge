//PROBLEM 1890
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1890
#include <stdio.h>

//FUNCAO QUE RETORNA A QUANTIDADE DE COMBINACOES
long int quantidadeCombinacoes(long int consoantes, long int digitos) {
    long int resultado = 1;
    if ((consoantes == 0) && (digitos == 0)) {
        return 0;
    }

    //combinacoes de digitos
    int i = 0;
    for(; i < digitos; i++) {
        resultado = resultado * 10;
    }

    //combinacoes de consoantes
    for(i = 0; i < consoantes; i++) {
        resultado = resultado * 26;
    }
    
    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    long int quantidade_consoantes = 0, quantidade_digitos = 0;
    int quantidade_testes = 0;
    scanf("%d", &quantidade_testes);

    int i = 0;
    for(; i < quantidade_testes; i++) {
        scanf("%ld %ld", &quantidade_consoantes, &quantidade_digitos);
        printf("%ld\n", quantidadeCombinacoes(quantidade_consoantes, quantidade_digitos));
    }
    return 0;
}