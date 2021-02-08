//PROBLEM 3152
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3152
/*
Mais informacoes estude pelos seguintes links:
https://pt.wikihow.com/Calcular-a-%C3%81rea-de-um-Pol%C3%ADgono - WIKI HOW
https://www.youtube.com/watch?v=XiQbVuoTv4o - PORTAL DA MATEMATICA - CANAL NO YOUTUBE
*/
#include <stdio.h>
#include <stdlib.h>

//PONTO
typedef struct ponto {
    int x;
    int y;
} Ponto;


//FUNCAO QUE RETORNA O VALOR ABSOLUTO
int valorAbsoluto(int numero) {
    return (numero < 0) ? (numero * (-1)) : numero;
}

//FUNCAO QUE RETORNA A AREA DE UM POLIGONO DE 4 LADOS
double areaPoligonoQuadrilatero(Ponto* pontos) {
    int primeira_parte = 0, segunda_parte = 0;
    int i = 0;

    for (; i < 4; i++)
        primeira_parte += (pontos[i].x * pontos[i + 1].y);
    
    for (i = 0; i < 4; i++)
        segunda_parte += (pontos[i].y * pontos[i + 1].x);

    return (0.5) * valorAbsoluto(primeira_parte - segunda_parte);
}

//PROGRAMA PRINCIPAL
int main() {
    Ponto terrenoA[5], terrenoB[5];
    double area_terreno_A = 0.0, area_terreno_B = 0.0;
    int i = 0;

    for (; i < 4; i++)
        scanf("%d %d", &terrenoA[i].x, &terrenoA[i].y);
    terrenoA[i].x = terrenoA[0].x;
    terrenoA[i].y = terrenoA[0].y;
    
    for (i = 0; i < 4; i++)
        scanf("%d %d", &terrenoB[i].x, &terrenoB[i].y);
    terrenoB[i].x = terrenoB[0].x;
    terrenoB[i].y = terrenoB[0].y;

    area_terreno_A = areaPoligonoQuadrilatero(terrenoA);
    area_terreno_B = areaPoligonoQuadrilatero(terrenoB);

    if (area_terreno_A > area_terreno_B)
        printf("terreno A\n");
    else
        printf("terreno B\n");

    return 0;
}