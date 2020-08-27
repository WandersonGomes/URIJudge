//PROBLEM 1793
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1793
#include <stdio.h>

#define MAX 100

int main() {
   int qtd_inteiros = 0, resultado = 0, i = 0;
   int limite1 = 0, limite2 = 0;
   int valores[MAX], flag = 0;

   while (1) {
      scanf("%d", &qtd_inteiros);
      if (qtd_inteiros == 0) {
         break;
      }

      for (i = 0; i < qtd_inteiros; i++) {
         scanf("%d", &valores[i]);
      }

      resultado = 0;
      limite1 = valores[0];
      limite2 = valores[0] + 10;

      for (i = 1; i < qtd_inteiros; i++) {
         flag = 0;
         if (limite2 >= valores[i]) {
            limite2 = valores[i] + 10;
         } else {
            resultado += (limite2 - limite1);
            limite1 = valores[i];
            limite2 = valores[i] + 10;
         }
      }

      resultado += (limite2 - limite1);

      printf("%d\n", resultado);
   }

   return 0;
}