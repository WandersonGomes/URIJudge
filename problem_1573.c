//PROBLEM 1573
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1573
//Obs.: utilize a diretiva -lm
#include <stdio.h>
#include <math.h>

int main() {
    int comprimento = 0, largura = 0, altura = 0;
    int resultado = 0, volume = 0;

    scanf("%d %d %d", &comprimento, &largura, &altura);
    while ((comprimento != 0) && (largura != 0) && (altura != 0)) {
        volume = comprimento * largura * altura;
        
        resultado = (int) pow(volume,1.0/3.0);

        printf("%d\n", resultado);

        scanf("%d %d %d", &comprimento, &largura, &altura);        
    }

    return 0;
}