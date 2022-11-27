//PROBLEM 3089
//link = https://www.beecrowd.com.br/judge/pt/problems/view/3089
#include <stdio.h>

//DEFINICOES
#define MAX 10000

//novos tipos
typedef struct {
    long a;
    long b;
} Par;

//FUNCOES
long somaPar(Par par) {
    return (par.a + par.b);
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_netos;
    
    Par pares[MAX];
    
    long valor_par_mais_caro,
         valor_par_mais_barato,
         soma;

    int i;
    
    //leitura - processamento - saida
    while (1) {
        scanf("%d", &qtd_netos);

        if (!qtd_netos) break;

        for (i = 0; i < qtd_netos; i++)
            scanf("%ld", &pares[i].a);
        for (i = (qtd_netos - 1); i > -1; i--)
            scanf("%ld", &pares[i].b);

        valor_par_mais_barato = somaPar(pares[0]);
        valor_par_mais_caro   = somaPar(pares[0]);

        for (i = 1; i < qtd_netos; i++) {
            soma = somaPar(pares[i]);

            if (soma < valor_par_mais_barato)
                valor_par_mais_barato = soma;
            else if (soma > valor_par_mais_caro)
                valor_par_mais_caro = soma;
        }

        printf("%ld %ld\n", valor_par_mais_caro, valor_par_mais_barato);
    }


    return 0;
}