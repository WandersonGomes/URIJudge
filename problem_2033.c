//PROBLEM 2033
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2033
#include <stdio.h>
#include <math.h>

//FUNCAO QUE RETORNA O VALOR EM MODULO DE UM NUMERO DE PONTO FLUTUANTE
double modulo(double valor) {
   if (valor < 0) {
      return -valor;
   }
   return valor;
}

//PROGRAMA PRINCIPAL
int main() {
   double capital = 0.00, taxa = 0.00;
   int periodo = 0;
   double montante = 0.00, juros_composto = 0.00, juros_simples = 0.00;
   double diferenca = 0.00;

   while (scanf("%lf", &capital) != EOF) {
      scanf("%lf", &taxa);
      scanf("%d", &periodo);

      //juros simples
      juros_simples = capital * taxa * periodo;

      //juros composto
      montante = capital * pow((1 + taxa), periodo);
      juros_composto = montante - capital;

      //apresenta os resultados
      diferenca = modulo(juros_composto - juros_simples);
      printf("DIFERENCA DE VALOR = %.2lf\n", diferenca);
      printf("JUROS SIMPLES = %.2lf\n", juros_simples);
      printf("JUROS COMPOSTO = %.2lf\n", juros_composto);
   }

   return 0;
}