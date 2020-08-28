//PROBLEM 1620
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1620
#include <stdio.h>

int main() {
   double numero_lados = 0.00, numero_arcos = 0.00, resultado = 0.00;

   while (1) {
      scanf("%lf", &numero_lados);
      if (numero_lados == 0) {
         break;
      }

      numero_arcos = (numero_lados - 1) + (numero_lados - 2);

      resultado = (numero_arcos - numero_lados)/numero_lados;

      printf("%.6lf\n", resultado);
   }

   return 0;
}