//PROBLEM 3278
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3278
#include <stdio.h>

int main() {
    //dados
    int flag_possivel = 1;

    long qtd_desceram,
        qtd_subiram,
        qtd_ficaram;
    
    long capacidade_maxima,
         capacidade_atual = 0;

    int qtd_estacoes;

    //leitura
    scanf("%ld %d", &capacidade_maxima, &qtd_estacoes);

    while (qtd_estacoes--) {
        scanf("%ld %ld %ld", &qtd_desceram, &qtd_subiram, &qtd_ficaram);

        if (qtd_desceram > capacidade_atual)
            flag_possivel = 0;
        
        capacidade_atual -= qtd_desceram;

        if ((capacidade_atual + qtd_subiram) > capacidade_maxima)
            flag_possivel = 0;
        
        capacidade_atual += qtd_subiram;

        if ((qtd_ficaram > 0) && (capacidade_atual < capacidade_maxima))
            flag_possivel = 0;
    }

    //ultima estacao
    if ((qtd_subiram > 0) || (qtd_ficaram > 0) || (capacidade_atual > 0))
        flag_possivel = 0;
    
    //saida
    (flag_possivel) ? puts("possible") : puts("impossible");

    return 0;
}