//PROBLEM 2422
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2422
#include <stdio.h>

#define MAX 100000

//REALIZA A BUSCA DOS VALORES
int buscaBinaria(long long int casas[MAX], long int inicio, long int fim, long long int valor) {
   long int meio = 0;
   
   if (inicio < fim) {
      meio = (inicio + fim)/2;

      if (casas[meio] == valor) {
         return 1;
      } else if (valor < casas[meio]) {
         return buscaBinaria(casas, inicio, meio, valor);
      } else if (valor > casas[meio]) {
         return buscaBinaria(casas, meio+1, fim, valor);
      }

   }

   return 0;
}

//PROGRAMA PRINCIPAL
int main() {
   long int numero_casas = 0, i = 0;
   long long int casas[MAX], casa = 0, soma = 0, aux = 0;

   scanf("%ld", &numero_casas);

   for (i = 0; i < numero_casas; i++) {
      scanf("%lld", &casas[i]);
   }

   scanf("%lld", &soma);

   for (i = 0; i < numero_casas; i++) {
      aux = soma - casas[i];

      if (buscaBinaria(casas, 0, numero_casas - 1, aux)) {
         if (casas[i] <= aux) {
            printf("%lld %lld\n", casas[i], aux);
         } else {
            printf("%lld %lld\n", aux, casas[i]);
         }
         break;
      }
   }

   return 0;
}