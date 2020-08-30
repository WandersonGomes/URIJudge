//PROBLEM 3139
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3139
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 30

int main() {
   int i = 0;
   double media = 0.00;
   long long int fila[MAX], soma = 0; 
   long long int atual = 0, objetivo = 0, resultado = 0;
   
   scanf("%lld %lld", &atual, &objetivo);
   memset(fila, 0, sizeof(fila));


   for (i = 0; i < 30; i++) {
      scanf("%lld", &fila[i]);
      soma += fila[i];
   }

   media = ceil(soma/30.00);

   i = 0;
   while (atual < objetivo) {
      atual += media;

      soma -= fila[i];
      soma += media;
      fila[i] = media;

      media = ceil(soma/30.00);

      i = (i + 1)%30;

      resultado++;
   }

   printf("%lld\n", resultado);

   return 0;
}