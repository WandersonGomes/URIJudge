//PROBLEM 2341
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2341
#include <stdio.h>
#include <string.h>

#define MAX1 1001
#define MAX2 1000001

int main() {
    long long int quantidade_rotulos[MAX1], rotulos_aldo = 0, i = 0, menor = MAX2;
    int rotulo = 0, qtd_rotulos_diferentes = 0, rotulos[MAX1], tmp = 0;

    memset(rotulos, 0, MAX1);

    //tive que usar assim pois memset deu bug
    for (i = 0; i < MAX1; i++) {
        quantidade_rotulos[i] = 0;
    }

    scanf("%lld %d", &rotulos_aldo, &qtd_rotulos_diferentes);

    for (i = 0; i < rotulos_aldo; i++) {
        scanf("%d", &rotulo);
        if (quantidade_rotulos[rotulo] == 0) {
            rotulos[tmp] = rotulo;
            tmp++;
        }

        quantidade_rotulos[rotulo]++;
    }

    if (tmp == qtd_rotulos_diferentes) {
        for (i = 0; i < tmp; i++) {
            if (quantidade_rotulos[rotulos[i]] < menor) {
                menor = quantidade_rotulos[rotulos[i]];
            }
        }
    } else {
        menor = 0;
    }

    printf("%lld\n", menor);
    return 0;
}