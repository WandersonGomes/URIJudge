//PROBLEM 1919
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1919
#include <stdio.h> 
  
int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int qtd_testes = 0, i = 0, flag = 1;
    long long unsigned valor;

    scanf("%d", &qtd_testes);
    
    for (i = 0; i < qtd_testes; i++) {
        scanf("%llu", &valor);
        flag = 1;

        for (a = 0; a < 6; a++) {
            for (b = a+1; b < 7; b++) {
                for (c = b+1; c < 8; c++) {
                    for (d = c+1; d < 9; d++) {
                        for (e = d+1; e < 10; e++) {
                            if ((a + b + c + d + e) == (valor/266664.00)) {
                                printf("{%d,%d,%d,%d,%d}\n", a, b, c, d, e);
                                flag = 0;
                            }
                        }
                    }
                }
            }
        }

        if (flag) {
            printf("impossivel\n");
        }
        printf("\n");
    }

    return 0;
}