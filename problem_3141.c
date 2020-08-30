//PROBLEM 3141
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/3141
#include <stdio.h>

#define MAX 51

int main() {
   char nome[MAX];
   int dia = 0, mes = 0, ano = 0;
   int dia_aniversario = 0, mes_aniversario = 0, ano_aniversario = 0;
   int flag_aniversario = 0, idade = 0;

   scanf("%[^\n]s", nome);
   scanf("%d/%d/%d", &dia, &mes, &ano);
   scanf("%d/%d/%d", &dia_aniversario, &mes_aniversario, &ano_aniversario);

   if ((dia == dia_aniversario) && (mes == mes_aniversario)) {
      flag_aniversario = 1;
   }

   idade = ano - ano_aniversario;
   if ((dia < dia_aniversario) && (mes == mes_aniversario)) {
      idade--;
   } else if (mes < mes_aniversario) {
      idade--;
   }

   if (flag_aniversario) {
      printf("Feliz aniversario!\n");
   }

   if (idade > 1) {
      printf("Voce tem %d anos %s.\n", idade, nome);
   } else {
      printf("Voce tem %d ano %s.\n", idade, nome);
   }
   return 0;
}