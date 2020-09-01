//PROBLEM 3134
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3134
#include <stdio.h>

//FUNCAO QUE INFORMA SE EH POSSIVEL COLOCAR OS PESOS NA BALANCA
int equilibrio(double a, double b, double c, double d) {
   if ((a + b) == (c + d)) {
      return 1;
   }
   if ((a + c) == (b + d)) {
      return 1;
   }
   if ((a + d) == (b + c)) {
      return 1;
   }

   if (a == (b + c + d)) {
      return 1;
   }
   if (b == (a + c + d)) {
      return 1;
   }
   if (c == (b + a + d)) {
      return 1;
   }
   if (d == (b + c + a)) {
      return 1;
   }

   return 0;
}

//PROGRAMA PRINCIPAL
int main() {
   double peso1 = 0.00, peso2 = 0.00, peso3 = 0.00, peso4 = 0.00;

   scanf("%lf", &peso1);
   scanf("%lf", &peso2);
   scanf("%lf", &peso3);
   scanf("%lf", &peso4);

   if (equilibrio(peso1*10, peso2*10, peso3*10, peso4*10)) {
      printf("YES\n");
   } else {
      printf("NO\n");
   }

   return 0;
}