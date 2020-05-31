//PROBLEM 2180
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2180
#include <stdio.h>
#include <math.h>

#define QTD_PRIMOS 66

int main() {
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317};
    long int peso = 0;
    long long int velocidade = 0, tempo = 0, dias = 0;
    int i =  0, j = 0, flag = 0;
    double raiz = 0.00;

    scanf("%ld", &peso);
    //caso seja para a gente ja comeca com o impar seguinte
    if (peso%2 == 0) {
        peso++;
    }

    while (i < 10) {
        raiz = sqrt(peso);
        flag = 1;
        for (j = 0; j < QTD_PRIMOS; j++) {
            if (peso%primos[j] == 0) {
                flag = 0;
                break;
            }
            if (primos[j] > raiz) {
                break;
            }
        }

        if (flag) {
            velocidade += peso;
            i++;
        }

        peso += 2;
    }

    printf("%lld km/h\n", velocidade);

    tempo = 60000000/velocidade;
    dias = tempo/24;

    printf("%lld h / %lld d\n", tempo, dias);   

    return 0;
}