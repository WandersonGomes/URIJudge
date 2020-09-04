//PROBLEM 3138
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3138
#include <stdio.h>
#include <string.h>

#define MAX_LINHA 20
#define MAX_COLUNA 21

//FUNCAO QUE RETORNA O INDICE DA COR
//Obs.: a busca eh realizada sequencialmente devido a baixa complexidade. Pior caso 20.
int indiceCor(char cores[MAX_LINHA][MAX_COLUNA], char cor[MAX_COLUNA], int tam) {
   int i = 0;
   for (i = 0; i < tam; i++) {
      if (strcmp(cores[i], cor) == 0) {
         return i;
      }
   }
   return -1;
}

//FUNCAO QUE CALCULA O FATORIAL
//Obs.: complexidade tambem baixa
long long int fatorial(int numero) {
   long long int resultado = 1;
   if ((numero == 0) || (numero == 1)) {
      return 1;
   } else {
      while (numero > 1) {
         resultado = resultado * numero;
         numero--;
      }
   }
   return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
   //variaveis
   char cores[MAX_LINHA][MAX_COLUNA];
   int quantidade_baloes[MAX_LINHA];
   int numero_linhas = 0, quantidade = 0, i = 0, j = 0;
   char cor[MAX_COLUNA];
   int indice = 0, soma = 0;
   long double resultado = 0.00;

   //obtem a quantidade de linhas
   scanf("%d", &numero_linhas);

   //preenche o vetor das cores e da quantidade de baloes de determinada cor
   for (i = 0; i < numero_linhas; i++) {
      scanf("%s %d", cor, &quantidade);
      indice = indiceCor(cores, cor, j);
      if (indice == -1) {
         strcpy(cores[j], cor);
         quantidade_baloes[j] = quantidade;
         j++;
      } else {
         quantidade_baloes[indice] += quantidade;
      }
      soma += quantidade;
   }

   //calcula o valor do arranjo com repeticao
   resultado = fatorial(soma);
   for (i = 0; i < j; i++) {
      resultado = resultado/fatorial(quantidade_baloes[i]);  
   }

   //apresenta o resultado
   printf("Feliz aniversario Tobias!\n");
   printf("%.0Lf\n", resultado);

   return 0;
}