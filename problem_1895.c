//PROBLEM 1895
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1895
#include <stdio.h>

#define MAX 58

//FUNCAO QUE RETORNA O VALOR ABSOLUTO DE UM NUMERO
int abs(int a) {
   if (a < 0) {
      return -a;
   }
   return a;
}

//PROGRAMA PRINCIPAL
int main() {
   int numero_cartas = 0, carta_mesa = 0, limite = 0, i = 0;
   int carta = 0, alice = 0, bob = 0, tmp = 0;

   scanf("%d %d %d", &numero_cartas, &carta_mesa, &limite);

   for (i = 1; i < numero_cartas; i++) {
      scanf("%d", &carta);
      tmp = abs(carta - carta_mesa);
      if (tmp <= limite) {
         if (i % 2 != 0) {
            alice += tmp;
         } else {
            bob += tmp;
         }
         carta_mesa = carta;
      }
   }

   printf("%d %d\n", alice, bob);

   return 0;
}