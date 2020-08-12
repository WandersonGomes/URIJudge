//PROBLEM 3036
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3036
#include <stdio.h>
#include <math.h>

#define VELOCIDADE_LUZ 300000000
#define COMPRIMENTO_LUZ_VERMELHA 0.0000007

//FUNCAO QUE IMPRIMI A COR VISUALIZADA
void comprimentoCor(long double valor) {
    //invisivel
    if ((valor < 400) || (valor >= 750)) {
        printf("invisivel\n");
    }
    //violeta
    if ((valor >= 400) && (valor < 425)) {
        printf("violeta\n");
    }
    //anil
    if ((valor >= 425) && (valor < 445)) {
        printf("anil\n");
    }
    //azul
    if ((valor >= 445) && (valor < 500)) {
        printf("azul\n");
    }
    //verde
    if ((valor >= 500) && (valor < 575)) {
        printf("verde\n");
    }
    //amarelo
    if ((valor >= 575) && (valor < 585)) {
        printf("amarelo\n");
    }
    //laranja
    if ((valor >= 585) && (valor < 620)) {
        printf("laranja\n");
    }
    //vermelho
    if ((valor >= 620) && (valor < 750)) {
        printf("vermelho\n");
    }
}

//PROGRAMA PRINCIPAL
int main() {
    long long int velocide_observador = 0;
    long double comprimento_visivel_observador = 0.00, aux = 0.00;

    scanf("%lld", &velocide_observador);

    aux = ((VELOCIDADE_LUZ - velocide_observador) * 1.00)/(VELOCIDADE_LUZ + velocide_observador);
    comprimento_visivel_observador = ((sqrt(aux) - 1) * COMPRIMENTO_LUZ_VERMELHA) + COMPRIMENTO_LUZ_VERMELHA;

    comprimentoCor(comprimento_visivel_observador * 1000000000);

    return 0;
}