//PROBLEM 2295
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2295
//Obs.: adicionamento de variaveis para legibilidade do codigo
#include <stdio.h>

int main() {
    double preco_litro_alcool = 0.00, preco_litro_gasolina = 0.00;
    double consumo_km_alcool = 0.00, consumo_km_gasolina = 0.00;
    double valor_km_alcool = 0.00, valor_km_gasolina = 0.00;

    scanf("%lf %lf %lf %lf", &preco_litro_alcool, &preco_litro_gasolina, &consumo_km_alcool, &consumo_km_gasolina);

    valor_km_alcool = preco_litro_alcool/consumo_km_alcool;
    valor_km_gasolina = preco_litro_gasolina/consumo_km_gasolina;

    if (valor_km_alcool < valor_km_gasolina) {
        printf("A\n");
    } else {
        printf("G\n");
    }

    return 0;
}