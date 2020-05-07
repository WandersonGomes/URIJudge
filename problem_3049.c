//PROBLEM 3049
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3049
#include <stdio.h>

#define ALTURA 70
#define COMPRIMENTO 160

//FUNCAO PARA CALCULAR A AREA DE UM TRAPEZIO RECEBENDO DADOS INTEIROS
double areaTrapezio(int base1, int base2, int altura) {
    return ((base1 + base2) * altura)/2.0;
}

//PROGRAMA PRINCIPAL
int main() {
    int base1_felix = 0, base2_felix = 0;
    int base1_marzia = 0, base2_marzia = 0;

    double area_felix = 0.00, area_marzia = 0.00;

    scanf("%d", &base1_felix);
    scanf("%d", &base2_felix);

    area_felix = areaTrapezio(base1_felix, base2_felix, ALTURA);
    
    base1_marzia = COMPRIMENTO - base1_felix;
    base2_marzia = COMPRIMENTO - base2_felix;

    area_marzia = areaTrapezio(base1_marzia, base2_marzia, ALTURA);

    if (area_marzia > area_felix) {
        printf("2\n");
    } else if (area_felix > area_marzia) {
        printf("1\n");
    } else {   
        printf("0\n");
    }
    return 0;
}