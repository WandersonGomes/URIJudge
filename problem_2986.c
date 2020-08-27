//PROBLEM 2986
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2986
#include <stdio.h>

//FUNCAO QUE RETORNA O NUMERO DE COMBINACOES
long long int numeroCombinacoes(long long int numero) {
   long long int aux1 = 1, aux2 = 2, aux3 = 4, i = 0, tmp = 0;
   
   if (numero < 3) {
      return numero;
   }
   if (numero == 3) {
      return 4;
   }

   for (i = 3; i < numero; i++) {
      tmp = (aux3 + aux2 + aux1)%1000000007;
      aux1 = aux2;
      aux2 = aux3;
      aux3 = tmp;
   }

   return aux3;
}

//PROGRAMA PRINCIPAL
int main() {
   long long int numero = 0;

   scanf("%lld", &numero);
   
   printf("%lld\n", numeroCombinacoes(numero));
   
   return 0;
}