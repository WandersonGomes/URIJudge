//PROBLEM 2369
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2369
#include <stdio.h>

int main() {
    int consumo = 0;
    int pagamento = 0;

    scanf("%d", &consumo);
    if (consumo >= 101) {
        pagamento = ((consumo - 100) * 5) + 167;
    } else if (consumo >= 31) {
        pagamento = ((consumo - 30) * 2) + 27;
    } else if (consumo >= 11) {
        pagamento = (consumo - 10) + 7;
    } else {
        pagamento = 7;
    }

    printf("%d\n", pagamento);
    
    return 0;
}