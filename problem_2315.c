//PROBLEM 2315
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/2315
#include <stdio.h>

//dias dos meses de uma ano nao bissexto de acordo com o inicio do ano
#define JANEIRO 0 //31
#define FEVEREIRO 31 //28
#define MARCO 59 //31
#define ABRIL 90 //30
#define MAIO 120 //31
#define JUNHO 151 //30
#define JULHO 181 //31
#define AGOSTO 212 // 31
#define SETEMBRO 243 //30
#define OUTUBRO 273 //31
#define NOVEMBRO 304 //30
#define DEZEMBRO 334//31

//PROGRAMA PRINCIPAL
int main() {
    int dias_mes[12] = {
            JANEIRO, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, 
            JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
        };

    int dia1 = 0, mes1 = 0, dia2 = 0, mes2 = 0, resultado = 0;    

    scanf("%d %d", &dia1, &mes1);
    scanf("%d %d", &dia2, &mes2);

    resultado = (dias_mes[mes2 - 1] + dia2) - (dias_mes[mes1 - 1] + dia1);

    printf("%d\n", resultado);

    return 0;
}