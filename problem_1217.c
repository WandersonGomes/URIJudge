//PROBLEM 1217
//link = https://www.urionlinejudge.com.br/judge/pt/problems/view/1217
//Obs.:
/*
Este problema apresenta um coisa importante a ser observada ele conta o numero
de palavras como a quantidade de espacos em branco + 1, por isso eh importante
se atentar para este detalhe em outros problemas.
*/
#include <stdio.h>

int main() {
	double soma_valores = 0.00, soma_kg = 0.00, valor = 0.00;
	int quantidade_frutas = 0;
	char c; //utilizado para encontrar o numero de palavras atraves da quantidade de espacos em branco

	int quantidade_dias = 0;
	int dia = 1, i = 0;
	scanf("%d", &quantidade_dias);

	for (i = 0; i < quantidade_dias; i++) {
		quantidade_frutas = 0;
		scanf("%lf%*c", &valor);
		soma_valores += valor;

		//conta a quantidade de frutas
		do {
			c = getchar();
			if (c == ' ') {
				quantidade_frutas++;
			}
		} while (c != '\n');
		quantidade_frutas++;

		//apresenta o resultado dos dias
		printf("day %d: %d kg\n", dia, quantidade_frutas);
		soma_kg += quantidade_frutas;

		dia++;
	}

	//apresenta as medias
	printf("%.2lf kg by day\n", (soma_kg/(dia-1)));
	printf("R$ %.2lf by day\n", (soma_valores/(dia-1)));

	return 0;
}