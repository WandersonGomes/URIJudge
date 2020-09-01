//PROBLEM 3129
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3129
#include <stdio.h>
#include <string.h>

#define MAX 301

int main() {
   int numero_figurinhas = 0, i = 0;
   int figurinha = 0, figurinhas[MAX];
   int numero_diferentes = 0, numero_iguais = 0;

   scanf("%d", &numero_figurinhas);
   memset(figurinhas, 0, sizeof(figurinhas));

   for (i = 0; i < numero_figurinhas; i++) {
      scanf("%d", &figurinha);
      if (figurinhas[figurinha] == 1) {
         numero_iguais++;
      } else {
         numero_diferentes++;
         figurinhas[figurinha] = 1;
      }
   }

   printf("%d\n%d\n", numero_diferentes, numero_iguais);

   return 0;
}