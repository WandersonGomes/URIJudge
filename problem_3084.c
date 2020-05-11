//PROBLEM 3084
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3084
#include <stdio.h>

int main() {
    int angulo_hora = 0, angulo_minuto = 0;
    int hora = 0, minuto = 0;

    while (scanf("%d %d", &angulo_hora, &angulo_minuto) != EOF) {
        hora = angulo_hora/30;
        minuto = angulo_minuto/6;

        printf("%02d:%02d\n", hora, minuto);
    }
    
    return 0;
}