//PROBLEM 3154
//link =https://www.beecrowd.com.br/judge/pt/problems/view/3154

/*
Fontes de estudos:
    https://pt.wikipedia.org/wiki/Paradoxo_do_anivers%C3%A1rio#:~:text=Em%20teoria%20das%20probabilidades,%20o,%C3%A9%20de%20mais%20de%2050%25.
    https://www.youtube.com/watch?v=BryqkCOltvY
*/
#include <stdio.h>

//FUNCOES
float calcularProbabilidade(long qtd_dias, long qtd_pessoas) {
    long i;
    float probabilidade = 1.0;

    for (i = 0; i < qtd_pessoas; i++)
        probabilidade *= (float) (qtd_dias - i)/qtd_dias;
    
    return (1 - probabilidade);
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    long qtd_dias,
         qtd_pessoas;
    float porcentagem;

    //leitura
    scanf("%ld %ld", &qtd_dias, &qtd_pessoas);

    //processamento
    porcentagem = calcularProbabilidade(qtd_dias, qtd_pessoas) * 100.00;

    //saida
    printf("%.2f\n", porcentagem);

    return 0;
}