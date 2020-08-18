//PROBLEM 2304
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2304
#include <stdio.h>

int main() {
    long long int saldo = 0, numero_operacoes = 0, i = 0;
    long long int dalia = 0, eloi = 0, felix = 0;
    long long int valor_operacao = 0;
    char operacao = 'a', pessoa1 = 'a', pessoa2 = 'a';

    scanf("%lld %lld", &saldo, &numero_operacoes);
    dalia = saldo;
    eloi = saldo;
    felix = saldo;

    for (i = 0; i < numero_operacoes; i++) {
        getchar();
        scanf("%c ", &operacao);

        if (operacao == 'C') {
            scanf("%c %lld", &pessoa1, &valor_operacao);

            //compra
            if (pessoa1 == 'D') {
                dalia -= valor_operacao;
            } else if (pessoa1 == 'E') {
                eloi -= valor_operacao;
            } else if (pessoa1 == 'F') {
                felix -= valor_operacao;
            }
        } else if (operacao == 'V') {
            scanf("%c %lld", &pessoa1, &valor_operacao);

            //venda
            if (pessoa1 == 'D') {
                dalia += valor_operacao;
            } else if (pessoa1 == 'E') {
                eloi += valor_operacao;
            } else if (pessoa1 == 'F') {
                felix += valor_operacao;
            }
        } else {
            scanf("%c %c %lld", &pessoa1, &pessoa2, &valor_operacao);

            //aluguel
            if (pessoa1 == 'D') {
                dalia += valor_operacao;
            } else if (pessoa1 == 'E') {
                eloi += valor_operacao;
            } else if (pessoa1 == 'F') {
                felix += valor_operacao;
            }

            if (pessoa2 == 'D') {
                dalia -= valor_operacao;
            } else if (pessoa2 == 'E') {
                eloi -= valor_operacao;
            } else if (pessoa2 == 'F') {
                felix -= valor_operacao;
            }
        }
    }

    printf("%lld %lld %lld\n", dalia, eloi, felix);

    return 0;
}