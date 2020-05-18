//PROBLEM 1012
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1012
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//FUNCAO QUE RETORNA A AREA DO TRIANGULO
double areaTriangulo(double base, double altura) {
    return (base*altura)/2.00;
}

//FUNCAO QUE RETORNA A AREA DO CIRCULO
double areaCirculo(double raio) {
    return (raio*raio)*PI;
}

//FUNCAO QUE RETORNA A AREA DO TRAPEZIO
double areaTrapezio(double base_menor, double base_maior, double altura) {
    return ((base_maior + base_menor) * altura)/2.00;
}

//FUNCAO QUE RETORNA A AREA DO QUADRADO OU DO TRIANGULO
double areaQuadradoRetangulo(double comprimento, double altura) {
    return comprimento * altura;
}

//PROGRAMA PRINCIPAL
int main() {
    double a = 0.00, b = 0.00, c = 0.00;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", areaTriangulo(a,c));
    printf("CIRCULO: %.3lf\n", areaCirculo(c));
    printf("TRAPEZIO: %.3lf\n", areaTrapezio(a,b,c));
    printf("QUADRADO: %.3lf\n", areaQuadradoRetangulo(b,b));
    printf("RETANGULO: %.3lf\n", areaQuadradoRetangulo(a,b));

    return 0;
}