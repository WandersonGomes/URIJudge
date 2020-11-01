//PROBLEM 3109
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3109
#include <stdio.h>

#define MAX 1001

//QUANTIDADE DE REDIRECIONAMENTO
int qtdRedirecionamento(int mesas[MAX], int qtd_mesas, int posicao) {
   int resultado = 0, aux = posicao;
   while (mesas[aux] != posicao) {
      aux = mesas[aux];
      resultado++;
   }

   return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
   int mesas[MAX] = {0};
   int numero_mesas = 0, funcionario1 = 0, funcionario2 = 0, aux = 0;
   int qtd_eventos = 0, i = 0, posicao = 0;
   int tipo_operacao = 0;

   //inicializa mesas
   scanf("%d", &numero_mesas);
   for (i = 1; i <= numero_mesas; i++)
      mesas[i] = i;
   
   //realiza as operacoes
   scanf("%d", &qtd_eventos);
   for (i = 0; i < qtd_eventos; i++) {
      scanf("%d", &tipo_operacao);
      if (tipo_operacao == 1) {
         scanf("%d %d", &funcionario1, &funcionario2);
         aux = mesas[funcionario1];
         mesas[funcionario1] = mesas[funcionario2];
         mesas[funcionario2] = aux;
      } else {
         scanf("%d", &posicao);
         printf("%d\n", qtdRedirecionamento(mesas, numero_mesas, posicao));
      }
   }

   return 0;
}