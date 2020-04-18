//PROBLEM 2395
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2395
#include <stdio.h>

int main() {
    long int largura_conteiner = 0, comprimento_conteiner = 0, altura_conteiner = 0;
    long int largura_navio = 0, comprimento_navio = 0, altura_maxima_navio = 0;
    
    long int quantidade_conteiners_largura = 0, quantidade_conteiners_comprimento = 0, quantidade_conteiners_altura = 0;

    scanf("%ld %ld %ld", &largura_conteiner, &comprimento_conteiner, &altura_conteiner);
    scanf("%ld %ld %ld", &largura_navio, &comprimento_navio, &altura_maxima_navio);

    quantidade_conteiners_largura = largura_navio/largura_conteiner;
    quantidade_conteiners_comprimento = comprimento_navio/comprimento_conteiner;
    quantidade_conteiners_altura = altura_maxima_navio/altura_conteiner;

    printf("%ld\n", (quantidade_conteiners_largura * quantidade_conteiners_comprimento * quantidade_conteiners_altura));

    return 0;
}