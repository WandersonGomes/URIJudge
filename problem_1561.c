//PROBLEM 1561
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1561
#include <stdio.h>

#define MAX 48

int main() {
   int hora = 0, minuto = 0;
   char linha_hora[MAX] = "|   |                                    |   |\n";
   char linha_minuto[MAX] = "|   |                                    |   |\n";

   while (scanf("%d:%d", &hora, &minuto) != EOF) {
      //38 = 1
      if ((hora&1) == 1) {
         linha_hora[38] = 'o';
      }
      //28 = 2
      if ((hora&2) == 2) {
         linha_hora[28] = 'o';
      }
      //18 = 4
      if ((hora&4) == 4) {
         linha_hora[18] = 'o';
      }
      //8 = 8
      if ((hora&8) == 8) {
         linha_hora[8] = 'o';
      }
      
      //38 = 1
      if ((minuto&1) == 1) {
         linha_minuto[38] = 'o';
      }
      //32 = 2
      if ((minuto&2) == 2) {
         linha_minuto[32] = 'o';
      }
      //26 = 4
      if ((minuto&4) == 4) {
         linha_minuto[26] = 'o';
      }
      //20 = 8
      if ((minuto&8) == 8) {
         linha_minuto[20] = 'o';
      }
      //14 = 16
      if ((minuto&16) == 16) {
         linha_minuto[14] = 'o';
      }
      //8 = 32
      if ((minuto&32) == 32) {
         linha_minuto[8] = 'o';
      }

      //resultado
      printf(" ____________________________________________\n");
      printf("|                                            |\n");
      printf("|    ____________________________________    |_\n");
      printf("|   |                                    |   |_)\n");
      printf("|   |   8         4         2         1  |   |\n");
      printf("|   |                                    |   |\n");
      printf("%s", linha_hora);
      printf("|   |                                    |   |\n");
      printf("|   |                                    |   |\n");
      printf("%s", linha_minuto);
      printf("|   |                                    |   |\n");
      printf("|   |   32    16    8     4     2     1  |   |_\n");
      printf("|   |____________________________________|   |_)\n");
      printf("|                                            |\n");
      printf("|____________________________________________|\n\n");
   
      //reinicializa a linha_hora e a linha_minuto
      linha_hora[38] = ' ';
      linha_hora[28] = ' ';
      linha_hora[18] = ' ';
      linha_hora[8] = ' ';
      
      linha_minuto[38] = ' ';
      linha_minuto[32] = ' ';
      linha_minuto[26] = ' ';
      linha_minuto[20] = ' ';
      linha_minuto[14] = ' ';
      linha_minuto[8] = ' ';
   }


   return 0;
}