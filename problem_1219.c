//PROBLEM 1219
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1219
/*
Obs.:
Mais dados assista essa video aula incrivel:
https://www.youtube.com/watch?v=JC7LIKTzi-s&t=1782s
*/
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main() {
    int lado1 = 0, lado2 = 0, lado3 = 0;
    double semi_perimetro = 0.00;
    double area_triangulo = 0.00, raio_circulo_menor = 0.00, raio_circulo_maior = 0.00;
    double girassol = 0.00, violetas = 0.00, rosas = 0.00;    

    while (scanf("%d %d %d", &lado1, &lado2, &lado3) != EOF) {
        semi_perimetro = (lado1 + lado2 + lado3)/2.00;
        
        area_triangulo = sqrt(semi_perimetro*(semi_perimetro-lado1)*(semi_perimetro-lado2)*(semi_perimetro-lado3));
        raio_circulo_menor = (2.00*(area_triangulo))/(lado1 + lado2 + lado3); 
        raio_circulo_maior = (lado1 * lado2 * lado3)/(4.00 * area_triangulo);

        rosas = PI * raio_circulo_menor * raio_circulo_menor;
        violetas = area_triangulo - rosas;
        girassol = (PI * raio_circulo_maior * raio_circulo_maior) - area_triangulo;

        printf("%.4lf %.4lf %.4lf\n", girassol, violetas, rosas);
    }
    
    return 0;
}