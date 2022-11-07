//PROBLEM 2433
//link = https://www.beecrowd.com.br/judge/pt/problems/view/2828
/*
Fontes de estudo:
    https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides_estendido
    https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides
    https://pt.wikipedia.org/wiki/Aritm%C3%A9tica_modular
*/
#include <stdio.h>
#include <string.h>

//DEFINICOES
#define MAX1 26
#define MAX2 100000

//FUNCOES
long long calcularFatorial( long long numero) {
     long long i, resultado = 1;
    
    for (i = 1; i <= numero; i++) {
        resultado *= i;
        resultado = resultado % 1000000007;
    }
    
    return resultado;
}

//utiliza o algoritmo de euclides estendido
long long inversoModular( long long a,  long long b) {
     long long u_anterior = 1,
         v_anterior = 0,
         u_atual = 0,
         v_atual = 1,
         aux;
     long long resto;

    while (b != 0) {
        aux = u_atual;
        u_atual = u_anterior - u_atual * (a/b);
        u_anterior = aux;

        aux = v_atual;
        v_atual = v_anterior - v_atual * (a/b);
        v_anterior = aux;

        resto = a % b;
        a = b;
        b = resto;
    }

    return u_anterior;
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long long letras_qtd[MAX1], i, tamanho_palavra;
    char palavra[MAX2];
    long long resposta, produto = 1;

    //leitura
    scanf("%s", palavra);

    //processamento
    tamanho_palavra = strlen(palavra);


    for (i = 0; i < tamanho_palavra; i++)
        letras_qtd[palavra[i] % 97]++;
    
    for (i = 0; i < MAX1; i++) {
        produto *= calcularFatorial(letras_qtd[i]);
        produto = produto % 1000000007;
    }

    produto = inversoModular(produto, 1000000007);
    if (produto < 0)
        produto += 1000000007;

    resposta = (calcularFatorial(tamanho_palavra) * produto) % 1000000007;

    //saida
    printf("%lld\n", resposta);

    return 0;
}