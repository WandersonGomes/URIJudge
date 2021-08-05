//PROBLEM 3307
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3307
#include <stdio.h>
#include <math.h>

//CUSTOS
#define VERMELHA 0.09
#define AZUL 0.07
#define AMARELA 0.05

//FUNCAO QUE APRESENTA O RESULTADO
void resultado(double area) {
    double raio = 0.00;
    
    raio = sqrt(area/12.56);

    if (raio < 12.00)
        printf("vermelho = R$ %.2f\n", area * VERMELHA);
    else if (raio >= 12.00 && raio <= 15.00)
        printf("azul = R$ %.2f\n", area * AZUL);
    else
        printf("amarelo = R$ %.2f\n", area * AMARELA);
}

//PROGRAMA PRINCIPAL
int main() {
    //dados
    int qtd_testes = 0, i = 0;
    int area = 0;

    //leitura
    scanf("%d", &qtd_testes);
    for (i = 0; i < qtd_testes; i++) {
        scanf("%d", &area);
        //calculo
        resultado(area);
    }

    return 0;
}