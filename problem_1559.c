//PROBLEM 1559
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1559
#include <stdio.h>
#include <string.h>

#define MAX 4

//FUNCAO QUE VERIFICA SE EH POSSIVEL REALIZAR O DOWN
int down(int tabela[MAX][MAX]) {
   int i = 0, j = 0;

   for (i = 0; i < (MAX - 1); i++) {
      for (j = 0; j < MAX; j++) {
         if ((tabela[i][j] != 0) && ((tabela[i][j] == tabela[i+1][j]) || (tabela[i+1][j] == 0))) {
            return 1;
         }
      }
   }

   return 0;
}

//FUNCAO QUE VERIFICA SE EH POSSIVEL REALIZAR O LEFT
int left(int tabela[MAX][MAX]) {
   int i = 0, j = 0;

   for (j = MAX - 1; j > 0; j--) {
      for (i = 0; i < MAX; i++) {
         if ((tabela[i][j] != 0) && ((tabela[i][j] == tabela[i][j-1]) || (tabela[i][j-1] == 0))) {
            return 1;
         }
      }
   }

   return 0;
}

//FUNCAO QUE VERIFICA SE EH POSSIVEL REALIZAR O RIGHT
int right(int tabela[MAX][MAX]) {
   int i = 0, j = 0;

   for (j = 0; j < (MAX - 1); j++) {
      for (i = 0; i < MAX; i++) {
         if ((tabela[i][j] != 0) && ((tabela[i][j] == tabela[i][j+1]) || (tabela[i][j+1] == 0))) {
            return 1;
         }
      }
   }

   return 0;
}

//FUNCAO QUE VERIFICA SE EH POSSIVEL REALIZAR O UP
int up(int tabela[MAX][MAX]) {
   int i = 0, j = 0;
   
   for (i = (MAX - 1); i > 0; i--) {
      for (j = 0; j < MAX; j++) {
         if ((tabela[i][j] != 0) && ((tabela[i][j] == tabela[i-1][j]) || (tabela[i-1][j] == 0))) {
            return 1;
         }
      }
   }

   return 0;
}

//PROGRAMA PRINCIPAL
int main() {
   int tabela[MAX][MAX] = {0};
   int i = 0, j = 0, k = 0;
   int qtd_testes = 0, end_game = 0, espaco = 0;

   scanf("%d", &qtd_testes);

   for (i = 0; i < qtd_testes; i++) {
      end_game = 0;
      espaco = 0;

      for (j = 0; j < MAX; j++) {
         for (k = 0; k < MAX; k++) {
            scanf("%d", &tabela[j][k]);
            if (tabela[j][k] == 2048) {
               end_game = 1;
            }
         }
      }

      if (end_game) {
         printf("NONE\n");
      } else {
         end_game = 1;
         if (down(tabela)) {
            printf("DOWN");
            espaco = 1;
            end_game = 0;
         }
         if (left(tabela)) {
            if (espaco) {
               printf(" ");
            }
            printf("LEFT");
            end_game = 0;
            espaco = 1;
         }
         if (right(tabela)) {
            if (espaco) {
               printf(" ");
            }
            printf("RIGHT");
            end_game = 0;
            espaco = 1;
         }
         if (up(tabela)) {
            if (espaco) {
               printf(" ");
            }
            printf("UP");
            end_game = 0;
            espaco = 1;
         }

         if (end_game) {
            printf("NONE");
         }
         printf("\n");
      }
   }

   return 0;
}