//PROBLEM 3128
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3128
#include <stdio.h>

//FUNCAO QUE INFORMA SE PODE ENTRAR NO CINEMA
int podeEntrar(int idade1, int idade2) {
   if ((idade1 < 6) || (idade2 < 6)) {
      return 0;
   }

   if ((idade1 >= 18) || (idade2 >= 18)) {
      return 1;
   }

   if ((idade1 >= 14) && (idade2 >= 14)) {
      return 1;
   }

   return 0;
}

//PROGRAMA PRINCIPAL
int main() {
   int idade1 = 0, idade2 = 0;

   scanf("%d", &idade1);
   scanf("%d", &idade2);

   if (podeEntrar(idade1, idade2)) {
      printf("YES\n");
   } else {
      printf("NO\n");
   }

   return 0;
}