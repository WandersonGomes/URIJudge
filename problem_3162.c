//PROBLEM 3162
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3162
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//PONTO ESPACO TRIDIMENSIONAL
typedef struct ponto {
    long int x;
    long int y;
    long int z;
} Ponto;

//FUNCAO QUE CALCULA A DISTANCIA ENTRE DOIS PONTOS NO R3
double calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

//PROGRAMA PRINCIPAL
int main() {
    Ponto naves[100];
    int quantidade_naves = 0;
    int i = 0, j = 0;
    double distancia = 0.00, distancia_calculada = 0.00;

    scanf("%d", &quantidade_naves);

    for (i = 0; i < quantidade_naves; i++) {
        scanf("%ld %ld %ld", &naves[i].x, &naves[i].y, &naves[i].z);
    }

    for (i = 0; i < quantidade_naves; i++) {
        distancia = -1.00;
        for (j = 0; j < quantidade_naves; j++) {
            if (j != i) {
                distancia_calculada = calcularDistancia(naves[i], naves[j]);
                
                if (distancia == -1.00 || distancia_calculada < distancia) {
                    distancia = distancia_calculada;
                }
            }
        }

        if (distancia <= 20.00) {
            printf("A\n");
        } else if (distancia <= 50.00) {
            printf("M\n");
        } else {
            printf("B\n");
        }  
    }

    return 0;
}