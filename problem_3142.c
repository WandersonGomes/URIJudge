//PROBLEM 3142
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3142
#include <stdio.h>
#include <string.h>

#define MAX 11

//FUNCAO QUE RETORNA O INDICE DA COLUNA BASEADO NO NOME DA COLUNA
int indiceColuna(char nome[MAX]) {
   int tamanho = strlen(nome);
   int indice = 0, i = 0, base = 1;

   for (i = tamanho - 1; i > -1; i--) {
      indice += (nome[i]%65 + 1) * base;
      base = base * 26;
   }

   //se o valor for maior do que 16384 (XFD) em base 26
   if (indice > 16384) {
      return 0;
   }

   return indice;
}

//PROGRAMA PRINCIPAL
int main() {
   char nome_coluna[MAX];
   int resultado = 0;

   while (scanf("%s", nome_coluna) != EOF) {
      resultado = indiceColuna(nome_coluna);

      if (resultado > 0) {
         printf("%d\n", resultado);
      } else {
         printf("Essa coluna nao existe Tobias!\n");
      }
   }

   return 0;
}
