//PROBLEM 2411
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2411
#include <stdio.h>
#include <string.h>

int main() {
    int matriz[8][8];
    int x = 0, y = 0;
    int numero_movimentos = 0, movimento = 0, i = 0;
    int resultado = 0;

    scanf("%d", &numero_movimentos);
    x = 4;
    y = 3;

    for (i = 0; i < numero_movimentos; i++) {
        scanf("%d", &movimento);

        switch (movimento) {
            case 1: x += 1; y += 2; break;
            case 2: x += 2; y += 1; break;
            case 3: x += 2; y -= 1; break;
            case 4: x += 1; y -= 2; break;
            case 5: x -= 1; y -= 2; break;
            case 6: x -= 2; y -= 1; break;
            case 7: x -= 2; y += 1; break;
            case 8: x -= 1; y += 2; break;
        }

        resultado++;

        //buraco 01
        if ((x == 1) && (y == 3))
            break;

        //buraco 02
        if ((x == 2) && (y == 3))
            break;

        //buraco 03
        if ((x == 2) && (y == 5))
            break;

        //buraco 04
        if ((x == 5) && (y == 4))
            break;
    }


    printf("%d\n", resultado);

    return 0;
}