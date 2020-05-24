//PROBLEM 2868
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2868
#include <stdio.h>

//FUNCAO QUE RETORNA O VALOR ABSOLUTO
int abs(int a) {
    if (a < 0) {
        return (-1)*a;
    }
    return a;
}

//PROGRAMA PRINCIPAL
int main() {
    int numero1 = 0, numero2 = 0, i = 0, j = 0;
    char operacao;
    int resultado = 0, resposta = 0;
    int quantidade_testes = 0;
    scanf("%d", &quantidade_testes);

    for (i = 0; i < quantidade_testes; i++) {
        scanf("%d %c %d = %d", &numero1, &operacao, &numero2, &resultado);
        
        if (operacao == '+') {
            resposta = numero1 + numero2;
        }
        if (operacao == '-') {
            resposta = numero1 - numero2;
        }
        if (operacao == 'x') {
            resposta = numero1 * numero2;
        }

        printf("E");
        for (j = 0; j < abs(resultado - resposta); j++) {
            printf("r");
        }
        printf("ou!\n");
    }


    return 0;
}