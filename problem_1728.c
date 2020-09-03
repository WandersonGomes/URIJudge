//PROBLEM 1728
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1728
#include <stdio.h>
#include <string.h>

#define MAX_TOTAL 23
#define MAX 8

//FUNCAO QUE RETORNA O VALOR DE UMA DETERMINADA STRING
long long int stringParaNumero(char string[MAX], int tam) {
   long long int numero = 0, multiplicador = 1;
   int i = 0;
   
   for (i = tam - 1; i > -1; i--) {
      numero += (string[i]%48 * multiplicador);
      multiplicador = multiplicador * 10;
   }

   return numero;
}

//PROGRAMA PRINCIPAL
int main() {
   char linha[MAX_TOTAL];
   char numero1[MAX], numero2[MAX], resultado[MAX];
   long long int num1 = 0, num2 = 0, resul = 0;
   int tam = 0, flag = 0, i = 0, j = 0;

   while (1) {
      //realiza a leitura de toda a linha de entrada
      scanf("%s", linha);
      getchar(); //eliminar caracteres indesejados do buffer
      
      //inicializa as variaveis que serao usadadas no processamento
      tam = strlen(linha) - 1;
      j = 0;
      flag = 0;

      //realiza a separacao dos dados
      for (i = tam; i > -1; i--) {
         if (linha[i] == '=') {
            flag = 1;
            j = 0;
         } else if (linha[i] == '+') {
            flag = 2;
            j = 0;
         } else {
            if (flag == 0) {
               resultado[j] = linha[i];
               resultado[j+1] = '\0';
            } else if (flag == 1) {
               numero1[j] = linha[i];
               numero1[j+1] = '\0';
            } else {
               numero2[j] = linha[i];
               numero2[j+1] = '\0';
            }
            j++;
         }
      }

      //converte os dados de string para um valor inteiro
      num1 = stringParaNumero(numero1, strlen(numero1));
      num2 = stringParaNumero(numero2, strlen(numero2));
      resul = stringParaNumero(resultado, strlen(resultado));

      //verifica a validade da expressao
      if ((num1 + num2) == resul) {
         printf("True\n");
      } else {
         printf("False\n");
      }

      //encerra o programa
      if ((num1 == 0) && (num2 == 0) && (resul == 0)) {
         break;
      }
   }

   return 0;
}