//PROBLEM 1045
//link = https://www.beecrowd.com.br/judge/pt/problems/view/1045
#include <stdio.h>

int main() {
    //dados
    float lado1, lado2, lado3;
    float a, b, c;

    //leitura
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    //processamento - saida
     if (lado1 > lado2) {
        if (lado2 > lado3) {
            a = lado1;
            b = lado2;
            c = lado3;
        } else {
            if (lado1 > lado3) {
                a = lado1;
                b = lado3;
                c = lado2;
            } else {
                a = lado3;
                b = lado1;
                c = lado2;
            }
        }
    } else {
        if (lado2 > lado3) {
            if (lado1 > lado3) {
                a = lado2;
                b = lado1;
                c = lado3;
            } else {
                a = lado2;
                b = lado3;
                c = lado1;
            }
        } else {
            a = lado3;
            b = lado2;
            c = lado1;
        }
    }

    if (a >= (b + c)) 
        puts("NAO FORMA TRIANGULO");
    else {
        if ((a * a) == ((b*b) + (c * c))) puts("TRIANGULO RETANGULO");
        if ((a * a) > ((b*b) + (c * c))) puts("TRIANGULO OBTUSANGULO");
        if ((a * a) < ((b*b) + (c * c))) puts("TRIANGULO ACUTANGULO");
        if ((a == b) && (b == c)) puts("TRIANGULO EQUILATERO");
        if ((a == b && b != c) ||
            (b == c && c != a) ||
            (a == c && c != b))
            puts("TRIANGULO ISOSCELES");
    }

    return 0;
}