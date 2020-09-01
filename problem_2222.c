//PROBLEM 2222
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2222
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 10001

//FUNCAO QUE RETORNA A QUANTIDADE DE BITS ATIVOS EM UM NUMERO DE 64 BITS SEM SINAL
int contaBits(unsigned long long int numero) {
   int resultado = 0;
   while (numero > 0) {
      if (numero&1 == 1) {
         resultado++;
      }
      numero = numero >> 1;
   }

   return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
   int numero_instancias = 0, numero_conjuntos = 0, numero_elementos = 0, numero_consultas = 0;
   int i = 0, j = 0, k = 0;
   int conjunto1 = 0, conjunto2 = 0, operacao = 0, resultado = 0; 
   unsigned long long int conjuntos[MAX], aux = 0;

   //obtem o numero de instancias
   scanf("%d", &numero_instancias);

   //percorre cada instancia
   for (i = 0; i < numero_instancias; i++) {
      //inicializa todos os conjuntos
      memset(conjuntos, 0, sizeof(conjuntos));
      
      //obtem o numero de conjuntos da instancia atual
      scanf("%d", &numero_conjuntos);
      
      //preenche os conjuntos com o numeros
      for (j = 0; j < numero_conjuntos; j++) {
         //obtem a quantidade de elementos do conjunto
         scanf("%d", &numero_elementos);
         //preenche o conjunto
         for (k = 0; k < numero_elementos; k++) {
            scanf("%llu", &aux);
            //estou usando mask bit, sendo assim seto cada bit na posicao do numero informado
            aux = pow(2, aux);
            conjuntos[j] = (conjuntos[j] | aux); //atualizo o conjunto
         }
      }

      //obtem o numero de consultas
      scanf("%d", &numero_consultas);
      for (j = 0; j < numero_consultas; j++) {
         resultado = 0;
         scanf("%d %d %d", &operacao, &conjunto1, &conjunto2);

         //intersecao
         if (operacao == 1) {
            resultado = contaBits(conjuntos[conjunto1-1] & conjuntos[conjunto2-1]);
         } else {
         //uniao
            resultado = contaBits(conjuntos[conjunto1-1] | conjuntos[conjunto2-1]);
         }

         //apresenta o resultado
         printf("%d\n", resultado);
      }
   }

   return 0;
}