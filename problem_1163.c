//PROBLEM 1163
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1163
//Obs.: aula sobre o assunto = https://www.youtube.com/watch?v=DJxzPuQlyG4
#include <stdio.h>
#include <math.h>

//CONSTANTES DO PROBLEMA
#define PI 3.14159
#define ACELERACAO_GRAVIDADE 9.80665

//FUNCAO QUE RETORNA O MAXIMO
double max(double a, double b) {
    if (a > b) {
        return a;
    }
    return b;
}
 
//FUNCAO QUE RETORNA O TEMPO PARA QUE O PATO CHEGUE ATE O SOLO
double tempoImpacto(double y0, double velocidade_y, double aceleracao_gravidade) {
    //novas variaveis adicionadas para melhorar a legibilidade do codigo
    double delta = 0.00;
    double a = aceleracao_gravidade/2.00;
    double b = velocidade_y;
    double c = y0;

    double raiz1 = 0.00;
    double raiz2 = 0.00;

    delta = (b*b) - (4 * a * c);

    raiz1 = (-b + sqrt(delta))/(2 * a);
    raiz2 = (-b - sqrt(delta))/(2 * a);


    return max(raiz1, raiz2);
}

//FUNCAO QUE RETORNA O VALOR DA ANGULO EM RADIANOS
double anguloRadianos(double angulo) {
    return angulo * (PI/180);
}

//PROGRAMA PRINCIPAL
int main() {
    double altura_disparo = 0.00;
    int limite1 = 0, limite2 = 0;
    int numero_disparos = 0;
    double angulo = 0.00, velocidade = 0.00;
    double velocidade_x = 0.00, velocidade_y = 0.00, tempo_impacto = 0.00, local_impacto = 0.00;

    int i = 0;

    while (scanf("%lf", &altura_disparo) != EOF) {
        scanf("%d %d", &limite1, &limite2);
        scanf("%d", &numero_disparos);

        for(i = 0; i < numero_disparos; i++) {
            scanf("%lf %lf", &angulo, &velocidade);
            velocidade_x = cos(anguloRadianos(angulo)) * velocidade;
            velocidade_y = sin(anguloRadianos(angulo)) * velocidade;

            tempo_impacto = tempoImpacto(altura_disparo, velocidade_y, -ACELERACAO_GRAVIDADE);
            local_impacto = velocidade_x * tempo_impacto;

            if ((local_impacto >= limite1) && (local_impacto <= limite2)) {
                printf("%.5lf -> DUCK\n", local_impacto);
            } else {
                printf("%.5lf -> NUCK\n", local_impacto);
            }
        }
    }

    return 0;
}