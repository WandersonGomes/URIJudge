//PROBLEM 1043
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

#include <stdio.h>

//FUNCAO QUE INFORMA SE AS MEDIDAS PODEM FORMAR UM TRIANGULO
int formaTriangulo(float lado1, float lado2, float lado3) {
    if (lado1 >= (lado2 + lado3)) {
        return 0;
    }
    
    if (lado2 >= (lado1 + lado3)) {
        return 0;
    }

    if (lado3 >= (lado1 + lado2)) {
        return 0;
    }

    return 1;
}

//PROGRAMA PRINCIPAL
int main() {
    //lado1 = a lado2 = b lado3 = c
    float lado1 = 0.0, lado2 = 0.0, lado3 = 0.0;
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (formaTriangulo(lado1, lado2, lado3)) {
        printf("Perimetro = %.1f\n", (lado1 + lado2 + lado3));
    } else {
        printf("Area = %.1f\n", ((lado1 + lado2) * lado3)/2.0);
    }
    return 0;
}