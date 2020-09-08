//PROBLEM 1608
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1608
#include <stdio.h>

#define MAX 100

int main() {
    //variaveis
    int i = 0, j = 0, k = 0;
    int numero_testes = 0, numero_ingredientes = 0, numero_bolos = 0;
    int ingredientes[MAX], qtd_ingredientes = 0, ingrediente, valor = 0;
    long long int dinheiro = 0, resultado = 0, custo_bolo = 0;

    //ler a quantidade de testes
    scanf("%d", &numero_testes);
    for (i = 0; i < numero_testes; i++) {
        //dinheiro, qtd_ingredientes, numero_bolos
        scanf("%lld %d %d", &dinheiro, &numero_ingredientes, &numero_bolos);
    
        //preenche a tabela dos precos dos ingredientes
        for (j = 0; j < numero_ingredientes; j++) {
            scanf("%d", &ingredientes[j]);
        }

        //verifica o preco de cada bolo e escolhe o de menor valor
        resultado = 0;
        for (j = 0; j < numero_bolos; j++) {
            //ler a quantidade de ingredientes do bolo
            scanf("%d", &qtd_ingredientes);
            custo_bolo = 0;
            for (k = 0; k < qtd_ingredientes; k++) {
                //ler o custo e a quantidade dos ingredientes do bolo
                scanf("%d %d", &ingrediente, &valor);
                custo_bolo += (ingredientes[ingrediente] * valor);
            }
            
            //checa se essa quantidade eh maior possivel
            if ((dinheiro/custo_bolo) > resultado) {
                resultado = dinheiro/custo_bolo;
            }
        }

        //apresenta o resultado
        printf("%lld\n", resultado);
    }
    return 0;
}