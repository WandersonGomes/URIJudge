//PROBLEM 2390
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2390
#include <stdio.h>

int main() {
   int quantidade_pessoas = 0, i = 0;
   long int resultado = 0, sensor = 0, inicio = 0, fim = 0;

   scanf("%d", &quantidade_pessoas);

   if (quantidade_pessoas == 1) {
      resultado = 10;
   } else {
      scanf("%ld", &sensor);
      inicio = sensor;
      fim = inicio + 10;

      for (i = 1; i < quantidade_pessoas; i++) {
         scanf("%ld", &sensor);
         if (fim <= sensor) {
            resultado += (fim - inicio);
            inicio = sensor;
            fim = inicio + 10;
         } else {
            fim = sensor + 10;
         }
      }

      resultado += (fim - inicio);
   }

   printf("%ld\n", resultado);

   return 0;
}