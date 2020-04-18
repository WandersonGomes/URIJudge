//PROBLEM 1632
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1632
#include <stdio.h>
#include <string.h>

#define MAX 17

//usado para limpar o buffer
char keyboard[BUFSIZ];

//FUNCAO QUE RETORNA O NUMERO DE MODIFICACOES DA LETRA
int numeroModificacoesLetra(char letra) {
    if ((letra == 'a') || (letra == 'A')) {return 3;}
    if ((letra == 'e') || (letra == 'E')) {return 3;}
    if ((letra == 'i') || (letra == 'I')) {return 3;}
    if ((letra == 'o') || (letra == 'O')) {return 3;}
    if ((letra == 's') || (letra == 'S')) {return 3;}
    
    return 2;
}

//FUNCAO QUE RETONA O NUMERO DE COMBINACOES
long int combinacoesPossiveis(char texto[MAX]) {
    int tamanho_texto = strlen(texto);
    long int resultado = 1;

    int i = 0;
    for(; i < tamanho_texto; i++) {
        resultado = resultado * numeroModificacoesLetra(texto[i]);
    }

    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero_testes = 0;
    char senha[MAX];

    scanf("%d", &numero_testes);
    
    int i = 0;
    for (; i < numero_testes; i++) {
        setbuf(stdin, keyboard);
        scanf("%s", senha);
        
        printf("%ld\n", combinacoesPossiveis(senha));
    }

    return 0;
}