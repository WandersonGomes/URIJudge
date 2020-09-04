//PROBLEM 2170
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2170
#include <stdio.h>

int main() {
   double capital_inicial = 0.00, aplicacao_rendimentos = 0.00;
   double resultado = 0.00;
   int projeto = 0;

   while (scanf("%lf %lf", &capital_inicial, &aplicacao_rendimentos) != EOF) {
      resultado = aplicacao_rendimentos/capital_inicial;
      projeto++;

      printf("Projeto %d:\n", projeto);
      printf("Percentual dos juros da aplicacao: ");
      printf("%.2lf %%\n\n", ((resultado - 1) * 100));
   }

   return 0;
}