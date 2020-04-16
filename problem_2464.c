//PROBLEM 2464
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2464
#include <stdio.h>
#include <string.h>

//usada para limpar o buffer
char keyboard[BUFSIZ];

//FUNCAO PARA IDENTIFICAR A POSICAO NO ALFABETO DE LETRAS MINUSCULAS
int posicaoAlfabeto(char letra) {
    return (letra - 97);
}


//PROGRAMA PRINCIPAL
int main() {
    char chave[26], frase_criptografada[10001];
    
    setbuf(stdin, keyboard); //limpa buffer
    scanf("%s", chave);
    setbuf(stdin, keyboard);
    scanf("%s", frase_criptografada);

    //decifra
    int i = 0;
    for (; i < strlen(frase_criptografada); i++) {
        frase_criptografada[i] = chave[posicaoAlfabeto(frase_criptografada[i])]; 
    }

    printf("%s\n", frase_criptografada);

    return 0;
}