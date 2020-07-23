//PROBLEM 1787
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1787
/*
Obs.: Pesquisando no forum sobre a resolucao dessa questao um usuario informou
que tem um metodo melhor para descobrir se um numero eh potencia utilizando
o operador e binario (&).
(num & (num - 1) == 0)
*/
#include <stdio.h>

//para facilitar na legibilidade da logica do codigo
#define UILTON 1
#define RITA 2
#define INGRED 3
#define EMPATE 4

//LISTA DAS POTENCIAS DE 2 ABAIXO DE 1000000000 - 29 ITENS
long long int potencia_dois[] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};
#define MAX 28

//FUNCAO QUE CHECA O MAIOR VALOR DA RODADA
int qualMaior(long long int a, long long int b, long long int c) {
    long long int maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;
    return maior;
}

//BUSCA BINARIA NO VETOR DE POTENCIAS
int buscaBinaria(long long int numero, int inicio, int fim) {
    long long int meio = 0;

    if (inicio <= fim) {
        meio = (fim + inicio)/2;
        if (numero == potencia_dois[meio]) {
            return meio;
        }
        if (numero < potencia_dois[meio]) {
            return buscaBinaria(numero, inicio, meio-1);
        } else {
            return buscaBinaria(numero, meio+1, fim);
        }
    }
    return -1;
}

//FUNCAO QUE VERIFICA SE EH POTENCIA DE 2
int ehPotenciaDois(long long int numero) {
    if (buscaBinaria(numero, 0, MAX) > -1) {
        return 1;
    }
    return 0;
}

//FUNCAO QUE VERIFICA QUANTOS PONTOS O JOGADOR MARCOU
int numeroPontos(long long int jogada, long long int maior) {
    int pontos = 0;
    if (ehPotenciaDois(jogada)) {
        pontos++;
        if (maior == jogada) {
            pontos++;
        }
    }
    return pontos;
}

//FUNCAO QUE CHECA O VENCEDOR
int quemVenceu(long long int pontos_uilton, long long int pontos_rita, long long int pontos_ingred) {
    int resultado = EMPATE;
    if ((pontos_uilton > pontos_rita) && (pontos_uilton > pontos_ingred))
        resultado = UILTON;
    if ((pontos_rita > pontos_uilton) && (pontos_rita > pontos_ingred))
        resultado = RITA;
    if ((pontos_ingred > pontos_uilton) && (pontos_ingred > pontos_rita))
        resultado = INGRED;
    
    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    long int numero_rodadas = 0, i = 0;
    long long int jogada_uilton = 0, jogada_rita = 0, jogada_ingred = 0;
    long long int maior_numero_rodada = 0;
    long long int pontos_uilton = 0, pontos_rita = 0, pontos_ingred = 0;
    int vencedor = 0;

    while (1) {
        //ler a quantidade de rodadas
        scanf("%ld", &numero_rodadas);
        if (numero_rodadas == 0) {
            break;
        }
        
        //inicializa a pontuacao a cada rodada
        pontos_uilton = 0;
        pontos_rita = 0;
        pontos_ingred = 0;

        //ler as rodadas
        for (i = 0; i < numero_rodadas; i++) {
            //ler a jogada de cada um
            scanf("%lld %lld %lld", &jogada_uilton, &jogada_rita, &jogada_ingred);
            
            //pega o maior numero da rodada
            maior_numero_rodada = qualMaior(jogada_uilton, jogada_rita, jogada_ingred);
            
            //adiciona os pontos
            pontos_uilton += numeroPontos(jogada_uilton, maior_numero_rodada);
            pontos_rita += numeroPontos(jogada_rita, maior_numero_rodada);
            pontos_ingred += numeroPontos(jogada_ingred, maior_numero_rodada);
        }

        //verifica quem venceu
        vencedor = quemVenceu(pontos_uilton, pontos_rita, pontos_ingred);
        switch (vencedor)
        {
            case UILTON: printf("Uilton\n"); break;
            case RITA: printf("Rita\n"); break;
            case INGRED: printf("Ingred\n"); break;
            default: printf("URI\n");
        }
    }

    return 0;
}