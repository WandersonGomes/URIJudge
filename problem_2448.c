//PROBLEM 2448
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2448
#include <stdio.h>

#define MAX 45005

//FUNCAOQ QUE RETORNA O VALOR ABSOLUTO DE UM NUMERO
long long int modulo(long long int a) {
   if (a < 0) {
      return -a;
   }
   return a;
}

//FUNCAO QUE REALIZA UMA BUSCA BINARIA EM UM VETOR DE ATE 45.000 POSICOES
//Obs.: Usa-se mais memoria, porem eh mais facil de implementar do que arvore
long long int casaEncomenda(long long int casas[MAX], long long int inicio, long long int fim, long long int encomenda) {
   long long int meio = 0;
   if (inicio <= fim) {
      meio = (inicio+fim)/2;
      if (encomenda == casas[meio]) {
         return meio;
      } else if (encomenda < casas[meio]) {
         return casaEncomenda(casas, inicio, meio-1, encomenda);
      } else {
         return casaEncomenda(casas, meio+1, fim, encomenda);
      }
   }   
}

//PROGRAMA PRINCIPAL
int main() {
   long long int numero_casas = 0, numero_encomendas = 0, i = 0;
   long long int encomenda = 0, casas[MAX];
   long long int casa_atual = 0, proxima_casa = 0, resultado = 0;

   scanf("%lld %lld", &numero_casas, &numero_encomendas);

   for (i = 0; i < numero_casas; i++) {
      scanf("%lld", &casas[i]);
   }

   for (i = 0; i < numero_encomendas; i++) {
      scanf("%lld", &encomenda);
      proxima_casa = casaEncomenda(casas, 0, numero_casas - 1, encomenda);
      resultado += modulo(casa_atual - proxima_casa);
      casa_atual = proxima_casa;
   }

   printf("%lld\n", resultado);

   return 0;
}